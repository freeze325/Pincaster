
#ifndef __KEY_NODES_H__
#define __KEY_NODES_H__ 1

RB_PROTOTYPE(KeyNodes_, KeyNode_, entry, key_node_cmp);

int key_node_cmp(const KeyNode * const kn1, const KeyNode * const kn2);

int get_key_node_from_key(PanDB * const db, Key * const key,
                          const _Bool create,
                          KeyNode * * const key_node);

void free_key_node(PanDB * const db, KeyNode * const key_node);

SubSlots count_key_nodes(const KeyNodes * const key_nodes);

typedef int (*KeyNodesForeachCB)(void *context, KeyNode * const key_node);

int key_nodes_foreach(KeyNodes * const key_nodes,
                      KeyNodesForeachCB cb, void * const context);

#endif
