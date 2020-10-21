<?php
fscanf(STDIN, '%d', $target);
$arr = array_fill(0, 1000001, 0);
$arr[1] = 7 % $target;
for ($i=2; $i <= $target; $i++) { 
    $arr[$i] = ($arr[$i-1]*10+7)%$target;
}
for ($i=1; $i <= $target; $i++) { 
    if ($arr[$i] == 0) {
        echo $i;
        exit;
    }
}
echo -1;