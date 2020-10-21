<?php
fscanf(STDIN, '%d %d', $sunukeCnt, $treatCnt);
$treatHasMap = array_fill(0, $sunukeCnt, 0);

for ($i=0; $i < $treatCnt; $i++) { 
    fscanf(STDIN, '%d', $treatNo);
    $treatHas = array_map('intval', explode(' ', trim(fgets(STDIN))));
    foreach ($treatHas as $hasSunuke) {
        $treatHasMap[$hasSunuke-1] = $treatNo;
    }
}

$ans = count(array_filter($treatHasMap, 'isZero'));
echo $ans;

function isZero($num) {
    return $num == 0;
}