<?php
function combine() {
    $args = func_get_args();

    $a = array_shift($args);
    $b = array_shift($args);

    $result = array();
    foreach ($a as $val1) {
        foreach ($b as $val2) {
            $result[] = array_merge((array)$val1, (array)$val2);
        }
    }

    if (count($args) > 0) {
        foreach ($args as $arg) {
            $result = combine($result, $arg);
        }
    }

    return $result;
}

var_dump(combine([1,2,3]));