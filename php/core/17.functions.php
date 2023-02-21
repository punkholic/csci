<?php
// this is function call
functionName();

/*
we cannot access variables from one function to another directly so we need to pass them with some functionality
to pass values from main to function we need to pass parameters
like in sum function we asked for two values a and b with , now we can pass those 2 values while calling function
*/
sum(1, 2);
echo ("function with return value = " + sum1(1, 2));

/*
    like c we dont need to provide return type like void or int,
    we can return any kind of value without giving it's return type 
    like in sum1 function we returned c variable
*/


// this is function defination

function sum($a, $b) {
    $c = $a + $b;
    echo ($c);
}
function functionName() {
    echo ("Hello World");
}
function sum1($a, $b) {
    $c = $a + $b;
    return $c;
}
