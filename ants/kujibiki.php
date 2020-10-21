<?php
fscanf(STDIN, '%d %d', $cnt, $goal);
$nums = explode(' ', trim(fgets(STDIN)));
$answer = false;
for ($a=0; $a < $cnt; $a++) { 
    for ($b=0; $b < $cnt; $b++) { 
        for ($c=0; $c < $cnt; $c++) { 
            for ($d=0; $d < $cnt; $d++) { 
                if ($nums[$a] + $nums[$b] + $nums[$c] + $nums[$d] === $goal) {
                    $answer = true;
                    break 4;
                }
            }
        }
    }
}
echo $answer ? 'Yes' : 'No';