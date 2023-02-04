// selection elements:
roads = document.querySelectorAll("#road #row")
obstacles = document.querySelector("#obstacles")
car = document.querySelector("#car")
carPositionXAxis = 592
carPositionYAxis = 0


//functions:

function moveObstacles(){
    decrementValue = 5
    setInterval(() => {
        persons = document.querySelectorAll("#obstacles img")
        persons.forEach(e => {
            topMargin = parseInt(e.style.marginTop.match(/[0-9]+/)[0])
            if(topMargin - decrementValue <= 0){
                e.remove()
                createObstacles(1)
            }
            e.style.marginTop = `${topMargin - decrementValue}px`
        })
    } , 100)

}
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


function roadMovement(){
    roadLines = generateRoadLines("")
    roads[1].innerHTML = roadLines

    setInterval(() => {
        roadLines = generateRoadLines(roadLines)
        roads[1].innerHTML = roadLines
    } , 100)
}


//function calls:
car.style.marginLeft = `${carPositionXAxis}px`;
car.style.marginTop = `${carPositionYAxis}px`;
roadMovement()
createObstacles(3)
moveObstacles()

// events:
document.querySelector("body").addEventListener('keydown', (e) => {
    switch(e.key){
        case 'ArrowRight':{
            if(carPositionXAxis < 692){
                carPositionXAxis += 10
            }
            break
        }
        case 'ArrowLeft':{
            if(carPositionXAxis > 492){
                carPositionXAxis -= 10
            }
            break
        }
        case 'ArrowDown':{
            if(carPositionYAxis < 460){
                carPositionYAxis += 10
            }
            break
        }
        case 'ArrowUp':{
            if(carPositionYAxis > 0){
                carPositionYAxis -= 10
            }
        }
    }
    console.log(carPositionYAxis)

    car.style.marginLeft = `${carPositionXAxis}px`;
    car.style.marginTop = `${carPositionYAxis}px`;

})