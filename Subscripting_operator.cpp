/*
Returns a reference to the value that is mapped to a key equivalent to x , performing an insertion
if such key does not already exist.
*/


value_type& operator[](const key_type& x);
value_type& operator[](key_type&& x);

