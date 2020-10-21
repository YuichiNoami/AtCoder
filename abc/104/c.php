<?php
fscanf(STDIN, '%d %d', $cnt, $goal);
$problems = [];
$bonuses = [];
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $problems[], $bonuses[]);
}
$ans = PHP_INT_MAX;
for ($mask=0; $mask < (1 << $cnt); $mask++) { 
    $score = 0;
    $num = 0;
    $rest_max = -1;
    for ($i=0; $i < $cnt; $i++) { 
        if ($mask >> $i & 1) {
            $score += 100 * ($i+1) * $problems[$i] + $bonuses[$i];
            $num += $problems[$i];
        } else {
            $rest_max = $i;
        }
    }
    if ($score < $goal) {
        $tmp = 100 * ($rest_max + 1);
        $need = floor(($goal - $score + $tmp - 1) / $tmp);
        if ($need >= $problems[$rest_max]) {
            continue;
        }
        $num += $need;
    }
    $ans = min($ans, $num);
}
echo $ans;