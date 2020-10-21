<?php
$x = [];
$y = [];
$tmp = 0;
fscanf(STDIN, '%d', $cnt);
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $x[], $y[]);
}

for ($i=0; $i < $cnt; $i++) { 
    for ($j=$i; $j < $cnt; $j++) { 
        if ($j === $i) {
            continue;
        }
        $tmp += sqrt(pow($x[$i]-$x[$j], 2) + pow($y[$i]-$y[$j], 2));
    }
}

for ($i=0; $i < $cnt; $i++) { 
    for ($j=$i; $j < $cnt; $j++) { 
        if ($j === $i) {
            continue;
        }
        $tmp += sqrt(pow($x[$j]-$x[$i], 2) + pow($y[$j]-$y[$i], 2));
    }
}

echo $tmp/$cnt."\n";