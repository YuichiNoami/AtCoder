<?php
$ans = 0;
fscanf(STDIN, '%d', $cnt);
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $start, $end);
    $ans += (($end - $start + 1) * ($start + $end)) / 2;
}
echo $ans;