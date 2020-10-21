<?php
$answer = 0;
$memo = [];
fscanf(STDIN, '%d', $personCnt);
$infoCnts = [];
$infoList = [];
for ($i=0; $i < $personCnt; $i++) { 
    $num = $i;
    fscanf(STDIN, '%d', $infoCnts[$num]);
    for ($j=0; $j < $infoCnts[$num]; $j++) { 
        fscanf(STDIN, '%d %d', $target, $request);
        $infoList[$num][$target-1] = $request;
        if ($request == 1 && !in_array($num.'-'.$target, $memo)) {
            $memo[] = $num.'-'.$target;
        }
    }
}

for ($i=0, $I=2**$personCnt; $i < $I; $i++) { 
    $bits = sprintf('%0'.$personCnt.'b', $i);
    $flag = true;
    foreach ($infoList as $person => $map) {
        if ($bits[$person] == '1') {
            foreach ($map as $key => $value) {
                if ($bits[$key] != $value) {
                    $flag = false;
                }
            }
        }
    }
    if ($flag) {
        $total = 0;
        for ($j=0; $j < $personCnt; $j++) { 
            $total += $bits[$j];
        }
        $answer = max($answer, $total);
    }
}

echo $answer . "\n";