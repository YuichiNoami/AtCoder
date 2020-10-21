<?php
fscanf(STDIN, '%d', $num);
$ans = 0;
for ($i=1; $i <= $num ; $i++) { 
    for ($j=1; $j <= $num ; $j++) {
        $ij = gmp_gcd($i, $j); 
        for ($k=1; $k <= $num ; $k++) { 
            if ($k === 1) {
                $ans++;
                continue;
            }
            $ans+=gmp_gcd($ij, $k); 
        }
    }
}
echo $ans; 