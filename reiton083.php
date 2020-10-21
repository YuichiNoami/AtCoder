<?php
define("N", 8);

function printQueen($chess) {
    printf("%d queen : ", N);
    for ($i = 0; $i < N; $i++) {
        printf("%d ", $chess[$i]);
    }
    printf("\n");
}

function setQueen($chess, $cnt) {
    if ($cnt == N) {
        if (check($chess)) {
            printQueen($chess);
        }
        return;
    }

    for ($i=0; $i < N; $i++) { 
        $chess[$cnt] = $i;
        setQueen($chess, $cnt+1);
    }
}

function check($chess) {
    for ($i=0; $i < N-1; $i++) { 
        for ($j=$i+1; $j < N; $j++) { 
            if ($chess[$i] == $chess[$j] || abs($chess[$i] - $chess[$j]) == $j - $i) {
                return false;
            }
        }
    }
    return true;
}

$chess = array_fill(0, 8, 0);
$chess[1] = 5;
$chess[3] = 6;
$chess[4] = 3;
setQueen($chess, 0);