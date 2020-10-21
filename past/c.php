<?php
fscanf(STDIN, '%d %d', $cnt, $limit);
$answer = 1000;
$clear = false;
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $cost, $minute);
    if ($minute <= $limit) {
        $clear = true;
        $answer = min($answer, $cost);
    }
}
if ($clear) {
    echo $answer;
} else {
    echo 'TLE';
}