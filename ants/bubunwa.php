<?php
fscanf(STDIN, '%d', $cnt);
$nums = explode(' ', trim(fgets(STDIN)));
fscanf(STDIN, '%d', $goal);

function dfs($i, $sum) {
    global $cnt, $nums, $goal;
    if ($i == $cnt) {
        return $sum == $goal;
    }
    
    if (dfs($i + 1, $sum)) {
        return true;
    }

    if (dfs($i + 1, $sum + $nums[$i])) {
        return true;
    }

    return false;
}

if (dfs(0, 0)) {
    echo "Yes\n";
} else {
    echo "No\n";
}