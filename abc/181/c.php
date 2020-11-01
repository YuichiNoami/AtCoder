<?php
fscanf(STDIN, '%d', $cnt);
for ($i = 0; $i < $cnt; $i++) {
    fscanf(STDIN, '%d %d', $x[$i], $y[$i]);
}
$flag = false;
for ($i = 0; $i < $cnt; $i++) {
    for ($j = $i + 1; $j < $cnt; $j++) {
        for ($k = $j + 1; $k < $cnt; $k++) {
            $x1 = $x[$i];
            $y1 = $y[$i];
            $x2 = $x[$j];
            $y2 = $y[$j];
            $x3 = $x[$k];
            $y3 = $y[$k];
            $x1 -= $x3;
            $x2 -= $x3;
            $y1 -= $y3;
            $y2 -= $y3;
            if ($x1 * $y2 === $x2 * $y1) {
                $flag = true;
                break 3;
            }
        }
    }
}
echo $flag ? "Yes" : "No";
