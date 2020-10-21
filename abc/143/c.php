<?php
fscanf(STDIN, '%d', $cnt);
fscanf(STDIN, '%s', $str);
$arr = str_split($str);
$now = $arr[0];
$ans = 1;
for ($i=1; $i < $cnt; $i++) { 
    if ($arr[$i] !== $now) {
        $ans++;
        $now = $arr[$i];
    }
}
echo $ans;