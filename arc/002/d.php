<?php
fscanf(STDIN, '%d %d', $cnt, $rel);

$friends = array_fill(1, $cnt, []);

for ($i=0; $i < $rel; $i++) { 
    $tmp = explode(' ', trim(fgets(STDIN)));
    $friends[$tmp[1]][] = $tmp[0];
    $friends[$tmp[0]][] = $tmp[1]; 
}

$ans = 0;

for ($mask=0; $mask < 1<<$cnt; $mask++) { 
    $group = [];
    for ($i=0; $i < $cnt; $i++) { 
        if (($mask>>$i) & 1) {
            $group[] = $i+1;
        }
    }

    $possible = true;
    $groupCnt = count($group);

    for ($i=0; $i < $groupCnt; $i++) {
        for ($j=0; $j < $groupCnt; $j++) {
            if ($i == $j) {
                continue;
            }
             
            if (!in_array($group[$j], $friends[$group[$i]])) {
                $possible = false;
            }
        }
    }
    
    if ($possible) {
        $ans = max($ans, $groupCnt);
    }
}

echo "$ans\n";