<?php
$a = 12;
$b = 12;
/*
syntax:
if(condition){
    // if the given condition is true, this block will get executed
}else{
    // if the given condition is false, this block will get executed
}
*/
// if you have only two conditions like below use if else
if( $a == $b ){
echo ("both numbers are equal");
}else{
echo ("numbers are not equal");
}

// if more then two conditions are avilable add else if
if( $a > $b){
    echo ("a is bigger");
}else if( $b > $a){
    echo ("b is bigger");
}else{
    echo ("both are equal");
}
