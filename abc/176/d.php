<?php
fscanf(STDIN, '%d %d', $height, $width);
fscanf(STDIN, '%d %d', $startY, $startX);
fscanf(STDIN, '%d %d', $goalY, $goalX);
$map = [];
for ($i=0; $i < $height; $i++) { 
    $map[$i] = [];
    for ($j=0; $j < $width; $j++) {
        $map[$i][$j] = 0; 
        fscanf(STDIN, '%s', $str);
        $arr = str_split($str);
        for ($k=0; $k < $width; $k++) { 
            $map[$i][$j] = $arr[$k] == '#' ? 1 : 0;
        }
    }
}

$nowX = $startX;
$nowY = $startY;

$movePlusX = null;
$movePlusY = null;

if ($startX < $goalX) {
    $movePlusX = true;
} elseif ($startX > $goalX) {
    $movePlusX = false;
}

if ($startY < $goalY) {
    $movePlusY = true;
} elseif ($startY > $goalY) {
    $movePlusY = false;
}

while (!($nowX == $goalX && $nowY == $goalY)) {
    $canMoveX = false;
    $canMoveY = false;
    if ($movePlusX === true) {
        if (isset($map[$nowY][$nowX+1]) && $map[$nowY][$nowX+1] === 0) {
            $nowX++;
            $canMoveX = true;
        }
    } elseif ($movePlusX === false) {
        if (isset($map[$nowY][$nowX-1]) && $map[$nowY][$nowX-1] === 0) {
            $nowX--;
            $canMoveX = true;
        }
    }
    if ($movePlusY === true) {
        # code...
    } elseif ($movePlusY === false) {
        # code...
    }
}