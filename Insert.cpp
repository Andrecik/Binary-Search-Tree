/*
la funzione deve inserire un nodo, la funzione restituisce un pair di un iteratore e un bool,
il bool è vero se l'inserimento del nuovo nodo ha successo altrimenti è falso
*/

std::pair<iterator, bool> insert(const pair_type& x);
std::pair<iterator, bool> insert(pair_type&& x);

/* |----------------------------------------------------------------|  */
