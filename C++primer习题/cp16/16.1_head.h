
/*template <typename T> int compare(const T &v1, const T &v2)
{
	return v1 < v2 ? -1 : 1;
}*/

template <typename T> T compare(const T &v1, const T &v2)
{
	return v1 < v2 ? v1 : v2;
}
