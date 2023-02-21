// selection elements:
roads = document.querySelectorAll("#road #row")
obstacles = document.querySelector("#obstacles")
car = document.querySelector("#car")

carPositionXAxis = 592
carPositionYAxis = 0
initialScore = 1
obstaclesCount = 3
obstaclesSpeed = 10

roadInterval = undefined
obstaclesInterval = undefined
scoreInterval = undefined


//functions:

function moveObstacles(){
    decrementValue = obstaclesSpeed
    obstaclesInterval = setInterval(() => {
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
    imgTag.src = "./images/walking.gif"
    imgTag.style.height = "50px"
    imgTag.style.width = "50px"
    imgTag.style.transform = "rotate(180deg)"
    imgTag.style.position = "absolute"
    return imgTag
}
function addObstacles(){
    width = 200
    randomCarRow = 490
    randomCarColumn = Math.ceil(Math.random() * width)
    image = createImageTag()
    image.style.marginTop = `${randomCarRow}px`
    image.style.marginLeft = `${randomCarColumn}px`
    obstacles.append(image)
}

function createObstacles(count){
    setInterval(() => {
        persons = document.querySelectorAll("#obstacles img")
        if(persons.length < count){
            myTimeout = setTimeout(addObstacles, Math.ceil(Math.random() * 1000));
            
        }
    }, 1000)
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
    console.log(lines)
    return lines
}


function roadMovement(){
    roadLines = generateRoadLines("")
    roads[1].innerHTML = roadLines

    roadInterval = setInterval(() => {
        roadLines = generateRoadLines(roadLines)
        roads[1].innerHTML = roadLines
    } , 100)
}

function updateScore(){
    incrementScore = 1
    scoreInterval = setInterval(() => {
        initialScore += incrementScore
        if(incrementScore % 15 == 0){
            incrementScore += 5
        }
        if(incrementScore % 200 == 0){
            obstaclesSpeed += 1
            obstaclesCount += 1
        }
        document.querySelector("#gameInfo p").textContent = `Score: ${initialScore}`
    } , 200)
}

function carMovementEvent(e){
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
    car.style.marginLeft = `${carPositionXAxis}px`;
    car.style.marginTop = `${carPositionYAxis}px`;
}

function pauseGame(){
    clearInterval(roadInterval)
    clearInterval(scoreInterval)
    clearInterval(obstaclesInterval)
    document.querySelector("#gameInfo > p:nth-child(2)").style.display = 'block'
    document.querySelector("body").removeEventListener("keydown", carMovementEvent, true); 
}

function checkCollusion(){
    carPosition = car.getBoundingClientRect()
    persons = document.querySelectorAll("#obstacles img")
    
    persons.forEach(e => {
        obstaclePosition = e.getBoundingClientRect()
        distanceApartY = Math.abs(obstaclePosition.y - carPosition.y)
        distanceApartX = Math.abs(obstaclePosition.x - carPosition.x)
        if(distanceApartY < 50 && distanceApartX < 30){
            pauseGame()
        }
    })
    
}

//function calls:
car.style.marginLeft = `${carPositionXAxis}px`;
car.style.marginTop = `${carPositionYAxis}px`;
setInterval(checkCollusion, 100);
roadMovement()
createObstacles(obstaclesCount)
moveObstacles()
updateScore()
// events:
document.querySelector("body").addEventListener('keydown', carMovementEvent, true)