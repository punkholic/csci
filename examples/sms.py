import requests
def radiantnepal(to_number, msg):
    to = ','.join(to_number)
    token = 'dMs5g3thfBgpJPX61693HR4hAualD1wSpya4'
    sender =  'fenfit'

    r = requests.get("http://sms.radiantnepal.com/api/v3/sms?", # this api from radiant nepal
                params={'token' : token,
                    'sender'  : sender,
                    'to'    : to,
                        'message'  : msg,
                })
    return r
def sparrow(to_number, msg):
    to = ','.join(to_number)
    r = requests.get("http://api.sparrowsms.com/v2/sms/",
                  params={'token' : 'v2_L6IV9g500Hz6Otonk2Z8aU20cxq.XTdY',
                  'from'  : 'InfoSMS',
                  'to'    : to,
                  'text'  : msg})
    status_code = r.status_code
    response = r.text
    response_json = r.json()
    return response_json

def akash(to_number, msg):
    r = requests.get("https://sms.aakashsms.com/sms/v3/send/",
                  params={'auth_token' : '28a22c64768a49ee5f539fa2924a8c278bb9ff16d7798496adbb87278d1c7e70',
                  'from'  : '31001',
                  'to'    : to_number,
                  'text'  : msg})
    status_code = r.status_code
    response = r.text
    response_json = r.json()
    return response_json
to_number = ['9811111111']

print(sparrow(to_number, "helo world"))