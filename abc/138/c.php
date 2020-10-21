<?php
fscanf(STDIN, '%d', $cnt);
$ins = explode(' ', trim(fgets(STDIN)));
while ($cnt > 0) {
    sort($ins);
    if (isset($ins[1])) {
        $ins[] = ($ins[0] + $ins[1]) / 2;
        unset($ins[0]);
        unset($ins[1]);
    }
    $ins = array_values($ins);
    $cnt--;
}
$ans = array_sum($ins);
echo "$ans\n";