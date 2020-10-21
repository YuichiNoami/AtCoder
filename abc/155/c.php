<?php
fscanf(STDIN, '%d', $cnt);
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%s', $strings[]);
}
$acvs = array_count_values($strings);
arsort($acvs);
$keyCnt = count($acvs);
$max = $acvs[array_keys($acvs)[0]];
foreach ($acvs as $key => $value) {
    if ($value < $max) {
        break;
    }
    $answers[] = $key;
}
sort($answers);
$ansCnt = count($answers);
for ($i=0; $i < $ansCnt; $i++) { 
    echo $answers[$i]."\n";
}