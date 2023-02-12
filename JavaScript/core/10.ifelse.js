a = 12;
b = 14;
/*
syntax:
if(condition){
    // if the given condition is true, this block will get executed
}else{
    // if the given condition is false, this block will get executed
}
*/
// if you have only two conditions like below use if else
if( a == b ){
console.log("both numbers are equal");
}else{
console.log("numbers are not equal");
}

// if more then two conditions are avilable add else if
if( a > b){
    console.log("a is bigger");
}else if( b > a){
    console.log("b is bigger");
}else{
    console.log("both are equal");
}
