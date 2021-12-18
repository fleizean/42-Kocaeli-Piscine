char	*ft_strdup(char *src)
{
	char	*dst;
	int		indx;

	indx = 0;
	while (src[indx])
		indx++;
	dst = malloc(sizeof(src) * indx);
	indx = 0;
	if (dst == NULL)
		return (0);
	else
	{
		while (src[indx])
		{
			dst[indx] = src[indx];
			indx++;
		}
		dst[indx] = '\0';
		return (dst);
	}
}
