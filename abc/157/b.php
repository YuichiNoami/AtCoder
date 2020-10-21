<?php
$bingo = false;
$ans = [];
$nums[] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$nums[] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$nums[] = array_map('intval', explode(' ', trim(fgets(STDIN))));
for ($i = 0; $i < 3; $i++) {
    $ans[$i] = [];
    foreach ($nums[$i] as $value) {
        $ans[$i][$value] = 0;
    }
}

fscanf(STDIN, '%d', $cnt);
for ($i = 0; $i < $cnt; $i++) {
    fscanf(STDIN, '%d', $ball);
    for ($j = 0; $j < 3; $j++) {
        foreach ($ans[$j] as $key => $value) {
            if ($ball === $key) {
                $ans[$j][$key] = 1;
            }
        }
    }
}
for ($i=0; $i < 3; $i++) { 
    $ans[$i] = array_values($ans[$i]);
}
if (array_sum($ans[0]) === 3 || array_sum($ans[1]) === 3 || array_sum($ans[2]) === 3) {
    $bingo = true;
} elseif ($ans[0][0] + $ans[1][0] + $ans[2][0] === 3 || $ans[0][1] + $ans[1][1] + $ans[2][1] === 3 || $ans[0][2] + $ans[1][2] + $ans[2][2] === 3) {
    $bingo = true;
} elseif ($ans[1][1] === 1 && (($ans[0][0] === 1 && $ans[2][2] === 1) || ($ans[0][2] === 1 && $ans[2][0] === 1))) {
    $bingo = true;
}
echo $bingo ? "Yes" : "No";
echo "\n";
