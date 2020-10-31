<?php
$ans = null;
$same = 0;
fscanf(STDIN, '%d', $cnt);
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $a[], $b[]);
}

for ($i=0; $i < $cnt; $i++) { 
    if ($a[$i] === $b[$i]) {
        $same++;
        if ($same >= 3) {
            break;
        }
    } else {
        $same = 0;
    }
}

if ($same >= 3) {
    $ans = "Yes";
} else {
    $ans = "No";
}
echo $ans;
