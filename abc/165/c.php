<?php
fscanf(STDIN, '%d %d %d', $length, $max, $quad);
$map = [];
$highScore = 0;
for ($i=0; $i < $quad; $i++) { 
    $nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
    $map[] = $nums;
}
$arr = [1];
dfs($arr);
echo $highScore;

function dfs($arr) {
    global $length, $max, $highScore;
    $size = count($arr);
    if ($size-1 == $length) {
        $highScore = setHighScore($arr);
        return;
    }
    $arr[] = $arr[$size-1];
    $size++;
    while($arr[$size-1] <= $max) {
        dfs($arr);
        $arr[$size-1]++;
    }
}

function setHighScore($arr) {
    global $quad, $map, $highScore;
    $tmpScore = 0;
    for ($i=0; $i < $quad; $i++) { 
        $target = $map[$i];
        if ($arr[$target[1]]-$arr[$target[0]]==$target[2]) {
            $tmpScore+=$target[3];
        }
    }
    return max($tmpScore, $highScore);
}