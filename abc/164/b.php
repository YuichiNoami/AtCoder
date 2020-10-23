<?php
$takWin = false;
fscanf(STDIN, '%d %d %d %d', $takHp, $takAtk, $aokHp, $aokAtk);
while ($takHp > 0 && $aokHp > 0) {
    $aokHp -= $takAtk;
    if ($aokHp <= 0) {
        $takWin = true;
        break;
    }
    $takHp -= $aokAtk;
    if ($takHp <= 0) {
        $takWin = false;
        break;
    }
}
echo $takWin ? 'Yes' : 'No';