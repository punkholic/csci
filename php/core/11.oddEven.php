<?php 
$a = 12;
/*
a % 2 gives reminder after dividing value of a with 2,
if the reminder is 1 it means the number cannot be divided by 2 
so the value would be considered as odd 
if reminder is 0 the value is considered as even
*/
if($a % 2 == 0){
    echo("even");
}else{
    echo("odd");
}
/*
another way:
here a & 1 means the code is performing bitwise "and" operator
every number which is odd will always have 1 as last bit after being converted to binary
and every number which is even will always have 0 as last bit

when we perform bitwise and operation it will look like:
1100
0001
----
0000
because & 1 is given only last bit will be checked cause other bit will always be 0 no matter what
the above bit has (0 or 1)

*/
if( $a & 1 ){
    echo("odd");
}else{
    echo("even");
}