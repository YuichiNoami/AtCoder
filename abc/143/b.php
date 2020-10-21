<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ans = 0;
$memo = [];
for ($i=0; $i < $cnt; $i++) { 
    for ($j=0; $j < $cnt; $j++) { 
        if ($i === $j || in_array($j.'_'.$i, $memo)) {
            continue;
        }
        $ans+=$nums[$i]*$nums[$j];
        $memo[] = $i.'_'.$j;
    }
}
echo $ans;