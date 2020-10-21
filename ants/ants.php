<?php
fscanf(STDIN, '%d %d', $len, $cnt);
$dists = explode(' ', trim(fgets(STDIN)));
$ansMin = 0;
$ansMax = 0;
for ($i=0; $i < $cnt; $i++) { 
    $ansMin = max($ansMin, min($dists[$i], $len - $dists[$i]));
}
for ($i=0; $i < $cnt; $i++) { 
    $ansMax = max($ansMax, max($dists[$i], $len - $dists[$i]));
}
echo $ansMin . ' ' . $ansMax;