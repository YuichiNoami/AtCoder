<?php
fscanf(STDIN, '%s', $str);
$arr = str_split($str);
$ans = 0;
$list = [];
for ($i=0; $i < 3; $i++) { 
    if ($arr[$i] == 'R') {
        $ans++;
        if ($i == 2) {
            $list[] = $ans;
        }
    } else {
        $list[] = $ans;
        $ans = 0;
    }
}
echo max($list);