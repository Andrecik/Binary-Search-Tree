/*

Inserts a new element into the container constructed in-place with the given args if there is no
element with the key in the container.

*/


template< class... Types >
std::pair<iterator,bool> emplace(Types&&... args);