/* * * * * * * * *
 * Dynamic hash table using cuckoo hashing, resolving collisions by switching
 * keys between two tables with two separate hash functions
 *
 * created by Maxim Kirkman <max.kirkman94@gmail.com>
 */

#ifndef CUCKOO_H
#define CUCKOO_H

#include <stdbool.h>
#include "../inthash.h"

typedef struct cuckoo_table CuckooHashTable ;

// initialise a cuckoo hash table with the given size
CuckooHashTable *new_cuckoo_hash_table(int size) ;

// free all memory associated with a given cuckoo hash table
void free_cuckoo_hash_table(CuckooHashTable *hash_table) ;

// insert a new key into a cuckoo hash table
// returns true if successful, false if the key was already present
bool cuckoo_hash_table_insert(CuckooHashTable *hash_table, int64 key) ;

// lookup whether a key is inside a cuckoo table
// returns true if found, false if not
bool cuckoo_hash_table_lookup(CuckooHashTable *hash_table, int64 key) ;

// print the contents of a cuckoo hash table to stdout
void cuckoo_hash_table_print(CuckooHashTable *hash_table) ;

// print statistics about a cuckoo hash table to stdout
void cuckoo_hash_table_stats(CuckooHashTable *hash_table) ;

#endif