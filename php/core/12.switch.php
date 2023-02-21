<?php 
/*if you have many conditions using if else, it would cause chaos while reading code

    so to tackle with this c provides another option which is known as switch
    syntax:
    switch(value_to_be_checked/expression){
    case value_to_compare: {
        // if the given in this case matches code inside this block will get executed
        // code
        break;
    }
    default: {
        // if non of those above case matches the code inside this block will get executed
        // code
    }

    }
*/

$a = 11;
switch($a){
    case 1:{
        echo ("the value of a is 1\n");
        break;
    }
    case 2:{
        echo ("the value of a is 2\n");
        break;
    }
    default: {
        echo ("non of those case matches\n");
    }
}