<?php
fscanf(STDIN, '%d %d %d %d', $cardPlus1Cnt, $cardZeroCnt, $cardMinus1Cnt, $takeCnt);
if ($cardPlus1Cnt > $takeCnt) {
    echo $takeCnt;
} else {
    $minusCnt = $takeCnt - $cardPlus1Cnt - $cardZeroCnt;
    if ($minusCnt < 0) {
        $minusCnt = 0;
    }
    echo $cardPlus1Cnt - $minusCnt;
}