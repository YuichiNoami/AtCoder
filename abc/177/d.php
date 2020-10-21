<?php
fscanf(STDIN, '%d %d', $personCnt, $infoCnt);
$list = array_fill(1, $personCnt, []);
$relation = [];
for ($i=0; $i < $infoCnt; $i++) { 
    fscanf(STDIN, '%d %d', $x, $y);
    if (in_array(min($x, $y).'_'.max($x, $y), $relation)) {
        $list[$x][] = $x;
        $list[$y][] = $y;
    } else {
        $relFlagX = false;
        $relFlagY = false;

        if (!in_array($x, $list[1]) && !in_array($x, $list[2])) {
            foreach ($list as $par => $arr) {
                foreach ($arr as $key => $value) {
                    if (in_array(min($x, $value).'_'.max($x, $value), $relation)) {
                        $relFlagX = true;
                    }
                }
            }
            if (!$relFlagX) {
                $list[1][] = $x;
            } else {
                $list[$x][] = $x;
            }
        }

        if (!in_array($y, $list[1]) && !in_array($y, $list[2])) {
            foreach ($list as $par => $arr) {
                foreach ($arr as $key => $value) {
                    if (in_array(min($y, $value).'_'.max($y, $value), $relation)) {
                        $relFlagY = true;
                    }
                }
            }
            if (!$relFlagY) {
                $list[2][] = $y;
            } else {
                $list[$y][] = $y;
            }
        }
        
    }
    $relation[] = min($x, $y).'_'.max($x, $y);
}

$memo = [];
$ans = 0;
foreach ($list as $par => $arr) {
    foreach ($arr as $key => $value) {
        if (in_array($value, $memo)) {
            unset($list[$par][$key]);
        } else {
            $memo[] = $value;
        }
    }
}
$ans = count($list, 2);
echo $ans;