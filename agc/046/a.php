<?php
fscanf(STDIN, '%d', $num);
$angle = array_fill(0, 1000000, 0);
$now = $angle[0];
$ans = 0;
while (!($now > 0 && $now % 360 == 0)) {
    $angle[$now]++;
    $now+=$num;
    $ans++;
}
echo $ans;