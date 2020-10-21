<?php
fscanf(STDIN, '%s', $numStr);
$ans = $numStr;
$numLen = strlen($numStr);
$maxPlusCnt = $numLen- 1;
for ($i=1; $i <= $maxPlusCnt; $i++) {
    $numArr = str_split($numStr);
    // array_map()
}

echo $ans."\n";

function addPlusMark($arr, $start) {
    $max = count($arr) - 1;
    $result = 0;
    for ($i=$start; $i < $max; $i++) { 
        $arr[$i] .= '+';
        $evalStr = implode($arr);
        $result += eval("return $evalStr;");
    }
}