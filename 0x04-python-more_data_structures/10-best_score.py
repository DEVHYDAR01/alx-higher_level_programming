#!/usr/bin/python3
def best_score(a_dictionary):
    if not isinstance(a_dictionary, dict) or len(a_dictionary) == 0:
        return None

    rev_value = list(a_dictionary.keys())[0]
    bout_score = list(a_dictionary.values())[0]
    for j, k in a_dictionary.items():
        if k > bout_score:
            bout_score = k
            rev_value = j
    return (rev_value)
