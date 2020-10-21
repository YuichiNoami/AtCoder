<?php
$ans = 0;
$memo = [];
$mod = 10**9+7;
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
for ($i=0; $i < 60; $i++) { 
    $tmp = 0;
    foreach ($nums as $num) {
        $tmp += ($num>>$i) & 1;
    }
    $ans += ((($tmp % $mod) * ($cnt-$tmp)) % $mod) * ((1<<$i) % $mod);
    $ans %= $mod;
}
echo $ans."\n";
