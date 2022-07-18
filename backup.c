	if (parent == NULL)
	{
		parent = new;
		return (new);
	}

	while (parent)
	{
		if (new->n <= parent->n)
		{
			if (parent->left == NULL)
			{
				parent->left = new;
				new->parent = parent;
				return (new);
			}
			else
				parent = parent->left;
		}
		else
		{
			if (parent->right == NULL)
			{
				parent->right = new;
				new->parent = parent;
				return (new);
			}
			else
				parent = parent->right;
		}

	}
	return (NULL);
}
