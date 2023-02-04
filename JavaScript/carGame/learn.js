// selection elements:
roads = document.querySelectorAll("#road #row")
obstacles = document.querySelector("#obstacles")
car = document.querySelector("#car")
carPosition = 592


//functions:
function createImageTag(){
    imgTag = document.createElement("img")
    imgTag.src = "http://127.0.0.1:5500/carGame/walking.gif"
    imgTag.style.height = "50px"
    imgTag.style.width = "50px"
    imgTag.style.transform = "rotate(180deg)"
    imgTag.style.position = "absolute"
    return imgTag
}
function addObstacles(){
    height = 490
    width = 200
    randomCarRow = Math.ceil(Math.random() * height)
    randomCarColumn = Math.ceil(Math.random() * width)
    image = createImageTag()
    image.style.marginTop = `${randomCarRow}px`
    image.style.marginLeft = `${randomCarColumn}px`
    obstacles.append(image)
}

function createObstacles(count){
    for(i = 0; i<count;i++){
        addObstacles()
    }    
}

function generateRoadLines(lines){
    if(!lines.includes("<br>")){
        lines = ""
        for(i=0;i<12;i++){
            lines = `${lines}|<br><br>`
        }
    }else{
        firstPart = lines.match(/^(\||<br>)/g)[0]    
        lines = lines.replace(/^(\||<br>)/g, "") + firstPart    
    }
    return lines
}
function positionCar(movement){
    switch(movement){
        case '+' :{
            if(carPosition < 692){
                carPosition += 10
            }
            break
        }
        case '-' : {
            if(carPosition > 492){
                carPosition -= 10
            }
        }
    }
    car.style.marginLeft = `${carPosition}px`;
}

function roadMovement(){
    roadLines = generateRoadLines("")
    roads[1].innerHTML = roadLines

    setInterval(() => {
        roadLines = generateRoadLines(roadLines)
        roads[1].innerHTML = roadLines
    } , 100)
}


//function calls:
createObstacles(3)
positionCar()
roadMovement()

// events:
document.querySelector("body").addEventListener('keydown', (e) => {
    switch(e.key){
        case 'ArrowRight':{
            positionCar('+')
            break
        }
        case 'ArrowLeft':{
            positionCar('-')
        }
    }
})