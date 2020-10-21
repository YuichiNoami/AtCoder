<?php
fscanf(STDIN, '%d', $len);
$mod = 1000000007;

function powMod($x, $y) {
    global $mod;
    $res = 1;
    for ($i=0; $i < $y; $i++) { 
        $res = $res * $x % $mod;
    }
    return $res;
}

$ans = powMod(10, $len) - powMod(9, $len) - powMod(9, $len) + powMod(8, $len);
$ans %= $mod;
$ans = ($ans+$mod) % $mod;
echo $ans;