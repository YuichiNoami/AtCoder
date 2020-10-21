<?php
fscanf(STDIN, '%d', $cnt);
$ans = array_fill(0, 10050, 0);
for ($i=1; $i <= 105; $i++) { 
    for ($j=1; $j <= 105; $j++) { 
        for ($k=1; $k <= 105; $k++) { 
            $calc = $i * $i + $j * $j + $k * $k + $i * $j + $j * $k + $i * $k;
            if ($calc < 10050) {
                $ans[$calc]+=1;
            }
        }
    }
}
for ($i=0; $i < $cnt; $i++) { 
    echo $ans[$i+1]."\n";
}
