# Priority_queue

```c++
template<
    class T,
    class Container = std::vector<T>,
    class Compare = std::less<typename Container::value_type>
> class priority_queue;
```

|        参数        |                             描述                             |  默认值   |
| :----------------: | :----------------------------------------------------------: | :-------: |
|     数据类型 T     |                   优先队列中存放的数据类型                   |           |
|        容器        |              用于实现优先队列（潜在）的容器类型              | vector<T> |
| 比较函数（优先级） | 用于确定一个元素是否小于另一个元素的比较函数。如果Compare(x, y)是正确的,那么x小于y，优先队列Q.top()返回的就是最大的元素。此时，优先队列队头元素Q.top()与优先队列Q中所有其他元素x进行比较，即Compare(Q.top (), x) 是错误的 |  less<T>  |

> - Container：必须是用数组实现的容器，比如 vector, deque，但不能用 list。STL里面默认用的是 vector。
> - Compare：比较方式默认用使用less<T>，operator <（小于号）。
> - 所以如果你把后面俩个参数缺省的话，优先队列就是大顶堆，队头元素最大。

**如果想改为小根堆，直接**

```c++
priority_queue<int, vector<int>, greater<int> > que;
```



# 定义比较函数

## 重载运算符

```c++
template<typename T>
bool operator<(T& a, T& b) {
    if (a == b) return a < b;
    else return a < b;
}
```

## 仿生函数

```c++
template<typename T>
struct cmp
{
        bool operator() (T a, T b) {
            if (a == b) return a < b;
            else return a < b;
        }
};
priority_queue<int, vector<int>, cmp<int>> que;
```

# 其他一些常见的函数：

|  函数   |               功能               |
| :-----: | :------------------------------: |
| empty() |    如果优先队列为空，则返回真    |
|  top()  | 返回优先队列中有最高优先级的元素 |
|  pop()  |          删除第一个元素          |
| push()  |           插入一个元素           |
| size()  |  返回优先队列中拥有的元素的个数  |

