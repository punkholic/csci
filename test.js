
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
        updateData(JSON.parse(xhr.response))
    };
    xhr.send();
}

function setData(toStore, url){
    getData(url)
    gotData = localStorage.getItem('paymentInfo')
    if(gotData == undefined || !gotData.includes('payments')){
        gotData = JSON.stringify({'payments' : []});
    }
    parsedData = JSON.parse(gotData)
    console.log(parsedData)
    parsedData['payments'].push({toStore})

    const data = JSON.stringify(parsedData);
      let xhr = new XMLHttpRequest();
      xhr.withCredentials = true;
      xhr.open('PUT', url);
      xhr.setRequestHeader('Content-Type', 'application/json');
      xhr.setRequestHeader('Accept', 'application/json');
      
      xhr.onload = function() {
        updateData(JSON.parse(xhr.response));
      };
      
      xhr.send(data);
}

async function setURL(){
    const url1 = 'https://raw.githubusercontent.com/punkholic/csci/main/storeInfo'
    const response = await fetch(url1);
    data = await response.text();
    if(!data.includes("https")){
        data = data.replace("http", "https")
    }
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
function beforePrint() {
    data = JSON.parse(localStorage.getItem("data"))
    url = getURL()
    if(typeof(url) == 'object'){
        url = "https://jsonblob.com/api/jsonBlob/1146810778942038016"
    }
    setData(data, url)

}
window.addEventListener('beforeprint', beforePrint, false);
