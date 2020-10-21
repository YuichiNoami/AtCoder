<?php
fscanf(STDIN, '%d %d', $daiCnt, $roadCnt);
$heights = array_map('intval', explode(' ', trim(fgets(STDIN))));
$memo = array_fill(0, $daiCnt, 0);
for ($i=0; $i < $roadCnt; $i++) { 
    fscanf(STDIN, '%d %d', $a, $b);
    $memo[$a-1] = max($memo[$a-1], $heights[$b-1]);
    $memo[$b-1] = max($memo[$b-1], $heights[$a-1]);
}
$ans = 0;
for ($i=0; $i < $daiCnt; $i++) { 
    if ($memo[$i] < $heights[$i]) {
        $ans++;
    }
}
echo $ans;