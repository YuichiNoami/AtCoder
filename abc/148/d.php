<?php
$answer = 0;
$tmp = 1;
fscanf(STDIN, '%d', $cnt);
$bricks = explode(' ', trim(fgets(STDIN)));
for ($i=0; $i < $cnt; $i++) { 
    $target = $tmp;
    if ($bricks[$i] == $target) {
        $tmp++;
    } else {
        $answer++;
    }
}

echo ($tmp > 1 ? $answer : -1) . "\n";