<?php
$a = 11;
$b = 2;
$c = $a - $b;
$d = $a + $b;
$e = $a / $b;
$f = $a * $b;
$g = $a % $b; // modules returns reminder after dividing the given number
echo $a . "\n";
echo $b . "\n";
echo $c . "\n";
echo $d . "\n";
echo $e . "\n";
echo $f . "\n";
echo $g . "\n";
/* 
there are two types of increment and decrement, post and pre
post increment and decrement updates values after running the current line
so the value wont change on the used line
below the value of a++ will be same and won't be incremented on that line
but it will increase after running the line
*/
echo $a++ . "\n";
echo $a-- . "\n";
/*
pre increment and decrement changes the value on the used line
*/
echo ++$a . "\n";
echo --$a . "\n";
