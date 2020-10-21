<?php
fscanf(STDIN, '%d %d', $cnt, $cho);
$ans = 0;
$mod = 1000000007;
for ($i=$cho; $i <= $cnt+1; ++$i) { 
    $ans += sum($cnt-$i+1, $cnt) - sum(0, $i-1) + 1;
    $ans %= $mod;
}
echo $ans;

function sum($left, $right) {
    return ($left+$right) * ($right-$left+1) / 2;
}