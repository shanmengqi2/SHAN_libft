char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *str;
    
    if (!s1 || !set)
        return (NULL);
        
    // 找到开头第一个不在set中的字符位置
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    
    // 找到结尾最后一个不在set中的字符位置
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    
    // 分配内存并复制字符串
    str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!str)
        return (NULL);
    
    // 复制截取的字符串
    ft_strlcpy(str, &s1[start], end - start + 1);
    
    return (str);
}

// 辅助函数：在字符串中查找字符
static char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

// 辅助函数：获取字符串长度
static size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

// 辅助函数：复制字符串
static size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    i = 0;
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}