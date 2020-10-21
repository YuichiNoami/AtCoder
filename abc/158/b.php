<?php
fscanf(STDIN, '%d %d %d', $cnt, $blue, $red);
$sum = $blue + $red;
$loop = intdiv($cnt, $sum);
$ans = $blue * $loop;
$rest = $cnt - ($loop * $sum);
$ans += min($blue, $rest);
echo $ans;
echo "\n";