<?php
fscanf(STDIN, '%d %d', $cnt, $must);
$heights = explode(' ', trim(fgets(STDIN)));
$answer = 0;
for ($i=0; $i < $cnt; $i++) { 
    $target = $heights[$i];
    if ($target >= $must) {
        $answer++;
    }
}
echo $answer;