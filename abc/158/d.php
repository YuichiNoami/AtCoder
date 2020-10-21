<?php
fscanf(STDIN, '%s', $org);
fscanf(STDIN, '%d', $cnt);
$headAdd = [];
$footAdd = [$org];
$revFlag = false;
$ans = '';
for ($i=0; $i < $cnt; $i++) { 
    $in = trim(fgets(STDIN));
    if ($in > 1) {
        $arr = explode(' ', $in);
        $mode = $arr[1];
        $char = $arr[2];
        if (!$revFlag) {
            if ($mode == 1) {
                $headAdd[] = $char;
            } else {
                $footAdd[] = $char;
            }
        } else {
            if ($mode == 1) {
                $footAdd[] = $char;
            } else {
                $headAdd[] = $char;
            }
        }
    } else {
        $revFlag = !$revFlag;
    }
}
$ans .= implode(array_reverse($headAdd));
$ans .= implode($footAdd);
echo $revFlag ? strrev($ans) : $ans;
echo "\n";
