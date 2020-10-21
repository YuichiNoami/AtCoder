<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$memo = [];
$ans = 0;
$mod = 1000000007;
$sum = array_fill(0, $cnt+1, 0);
for ($i=0; $i < $cnt; $i++) { 
    $sum[$i+1] = $sum[$i] + $nums[$i];
}

$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    $rui = ($sum[$cnt] - $sum[$i + 1]) % $mod;
    $ans += $nums[$i] * $rui;
    $ans %= $mod;
}
echo $ans;