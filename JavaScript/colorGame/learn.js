function generateRandomRGB(){
    color = `RGB(${Math.ceil(Math.random() * 255 )}, ${Math.ceil(Math.random() * 255 )}, ${Math.ceil(Math.random() * 255 )})`;
    return color
}
questionDiv = document.querySelector("#questionDiv")
realAnswer = generateRandomRGB()
questionDiv.style.backgroundColor = realAnswer;
questionText = document.querySelector("#questionDiv > h1:nth-child(1)")
questionText.textContent = realAnswer

answerOptions = document.querySelectorAll("#options div")
answerIndex = Math.ceil(Math.random() * 3) - 1

for(i =0;i<answerOptions.length; i++){
    if(i == answerIndex){
        answerOptions[i].style.backgroundColor = realAnswer

    }else{
        answerOptions[i].style.backgroundColor = generateRandomRGB()
    }
}
// a = [1,2,3]

answerOptions.forEach(function test(value, index){
    value.addEventListener('click', function clickGar(){
        if(answerIndex > 2){
            return
        }
        if(index == answerIndex){
            questionText.textContent = "correct"
        }else{
            questionText.textContent = "incorrect"
        }
        answerIndex= 77
    })
})
