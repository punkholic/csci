home = document.querySelector("body > p:nth-child(1)")
about = document.querySelector("body > p:nth-child(2)")
content = document.querySelector("body > div:nth-child(3) > p:nth-child(1)")
home.addEventListener('click', function test(){
    content.textContent = "home ho"
})
about.addEventListener('click', function test(){
    content.textContent = "about ho"
})