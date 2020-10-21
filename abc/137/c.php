<?php
fscanf(STDIN, '%d', $cnt);
$words = [];
for ($i=0; $i < $cnt; $i++) { 
    $words[] = str_split(trim(fgets(STDIN)));
}
$len = count($words);
$temps = [];
for ($i=0; $i < $len; $i++) { 
    asort($words[$i]);
    $temps[] = implode('', $words[$i]);
}
$acv = array_count_values($temps);
$ans = 0;
foreach ($acv as $key => $value) {
    if ($value > 2) {
        $ans +=  ($value * ($value - 1)) / 2;
    } elseif ($value === 2) {
        $ans += 1;
    }
}
echo $ans;
