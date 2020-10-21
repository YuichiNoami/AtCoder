<?php
fscanf(STDIN, '%d %d', $k, $x);
$ran = $k - 1;
$min = $x - $ran;
$max = $x + $ran;
$answer = [];
for ($i=$min; $i <= $max; $i++) { 
    $answer[] = $i;
}
echo implode(' ', $answer);