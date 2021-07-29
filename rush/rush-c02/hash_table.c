#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "headers/header.h"
#include <stdlib.h>
struct	hash_table
{
	int	size;
	char	*keys;
	char	**values;
};

struct	hash_table	*create_hash(int size)
{
	int	i;

	i = 0;
	struct	hash_table *hash = malloc(sizeof(struct hash_table) * size);
	hash->keys = malloc(sizeof(*hash->keys) * size);
	hash->values = malloc(sizeof(*hash->values) * size);
	hash->size = size;
	while (i < size)
		hash->keys[i++] = -1;
	return (hash);
}

int	get_hash_index(struct hash_table *hash, char *keys)
{
	int	i;

	i = *keys % hash->size;
	while (hash->keys[i] != *keys && hash->keys[i] != -1)
		i = (i - 1) % hash->size;
	return (i);
}

char	*find_value(struct hash_table *hash, char key)
{
	return (hash->values[get_hash_index(hash, &key)]);
}

void	insert(struct hash_table *hash, char key, char *value)
{
	int	i;

	i = get_hash_index(hash, &key);
	hash->keys[i] = key;
	hash->values[i] = value;
}

int	main(void)
{
	struct	hash_table *test = create_hash(12);

	open_file();
}
