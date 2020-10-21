<?php
fscanf(STDIN, '%d', $num);
$score1000Cnt = floor($num / 500);
$rem = $num % 500;
$score5Cnt = floor($rem / 5);
echo $score1000Cnt * 1000 + $score5Cnt * 5;
echo "\n";