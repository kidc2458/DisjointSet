#ifndef DISJOINSET_H
#define DISJOINSET_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tagDisjoinSet
{
	struct tagDisjoinSet* Parent;
	void* Data;
} DisjointSet;

void DS_UnionSet(DisjointSet* Set1, DisjointSet* Set2);
DisjointSet* DS_FindSet(DisjointSet* Set);
DisjointSet* DS_MakeSet(void* NewData);
void DS_DestroySet(DisjointSet* Set);

#endif // !DISJOINSET_H
