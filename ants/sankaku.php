<?php
$ans = 0;
fscanf(STDIN, '%d', $cnt);
$edges = explode(' ', trim(fgets(STDIN)));
for ($i=0; $i < $cnt; $i++) { 
    for ($j=$i+1; $j < $cnt; $j++) { 
        for ($k=$j+1; $k < $cnt; $k++) { 
            $len = $edges[$i] + $edges[$j] + $edges[$k];
            $max = max($edges[$i], $edges[$j], $edges[$k]);
            $rest = $len - $max;
            if ($max < $rest) {
                $ans = max($ans, $len);
            }
        }
    }
}
echo $ans;