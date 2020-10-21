<?php
fscanf(STDIN, '%d %d', $height, $width);
$map = [];
for ($i=0; $i < $height; $i++) { 
    fscanf(STDIN, '%s', $str);
    $map[$i] = [];
    for ($j=0; $j < $width; $j++) {
        $map[$i][$j] = $str[$j] == '#' ? 1 : 0;
    }
}
$ans = 0;
foreach ($map as $y => $row) {
    foreach ($row as $x => $col) {
        $cnt = 0;
        $flag = false;
        if ($col == 0 && isset($row[$x+1]) && $row[$x+1] == 0) {
            $ans++;
        }
        if ($col == 0 && isset($map[$y+1][$x]) && $map[$y+1][$x] == 0) {
            $ans++;
        }
    }
}
echo $ans;