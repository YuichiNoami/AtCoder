<?php
fscanf(STDIN, '%f %f %f', $tak, $aok, $cnt);
$takRes = $tak - $cnt;
if ($takRes < 0) {
    $takRes = 0;
}
$tmp = $cnt - $tak;
if ($tmp < 0) {
    $tmp = 0;
}
$aokRes = $aok - $tmp;
if ($aokRes < 0) {
    $aokRes = 0;
}
echo $takRes.' '.$aokRes;