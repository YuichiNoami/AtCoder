<?php
fscanf(STDIN, '%d %d', $len, $cnt);
$rules = [];
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $tar, $val);
    $rules[] = [$tar => $val];
}

for ($i=0; $i < 1000; $i++) {
    $nums = array_map('intval', str_split($i)); 
    if (count($nums) < $len) {
        continue;
    }
    $flag = true;
    foreach ($rules as $rule) {
        foreach ($rule as $key => $value) {
            if ($nums[$key-1] !== $value) {
                $flag = false;
                break;
            }
        }
    }
    if ($flag) {
        echo $i."\n";
        exit;
    }
}
echo (-1)."\n";