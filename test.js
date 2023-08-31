
function updateData(data){
    localStorage.setItem('paymentInfo', JSON.stringify(data))
}
function getData(url){

    let xhr = new XMLHttpRequest();
    xhr.withCredentials = true;
    xhr.open('GET', url);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.setRequestHeader('Accept', 'application/json');

    xhr.onload = function() {
        updateData(xhr.response)
    };
    xhr.send();
}

function setData(newPayment, date, url){
    getData(url)
    gotData = localStorage.getItem('paymentInfo')
    if(gotData == undefined || !gotData.includes('payments')){
        gotData = JSON.stringify({'payments' : []});
    }
    parsedData = JSON.parse(gotData)

    parsedData['payments'].push({'date': date, 'amount': newPayment})

    const data = JSON.stringify(parsedData);
      
      let xhr = new XMLHttpRequest();
      xhr.withCredentials = true;
      xhr.open('PUT', url);
      xhr.setRequestHeader('Content-Type', 'application/json');
      xhr.setRequestHeader('Accept', 'application/json');
      
      xhr.onload = function() {
        updateData(xhr.response);
      };
      
      xhr.send(data);
}

async function setURL(){
    const url1 = 'https://raw.githubusercontent.com/punkholic/csci/main/storeInfo'
    const response = await fetch(url1);
    const data = await response.text();
    localStorage.setItem('paymentURL', data.trim())
    return data.trim()
}

function getURL(){
    url = localStorage.getItem('paymentURL')
    if(url == undefined){
        url = setURL()
    }
    return url
}
