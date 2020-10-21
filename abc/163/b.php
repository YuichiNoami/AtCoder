<?php
fscanf(STDIN, '%d %d', $daysCnt, $worksCnt);
$workDays = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ans = $daysCnt - array_sum($workDays);
if ($ans < 0) {
    $ans = -1;
}
echo $ans;