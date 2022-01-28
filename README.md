# 1 数组
> 考点：二分 双指针(首尾指针 快慢指针) 滑动窗口(关键字:连续子数组、连续子串 限定词:最大、最小) 模拟
## 2.二分查找
[704](https://github.com/Kukukukiki192/LeetCode1/blob/master/P704_BinarySearch.cpp) 
[35](https://github.com/Kukukukiki192/LeetCode1/blob/master/P35_SearchInsertPosition.cpp) 
[34](https://github.com/Kukukukiki192/LeetCode1/blob/master/P34_FindFirstAndLastPositionOfElementInSortedArray.cpp) 
[69](https://github.com/Kukukukiki192/LeetCode1/blob/master/P69_Sqrtx.cpp) 
[367](https://github.com/Kukukukiki192/LeetCode1/blob/master/P367_ValidPerfectSquare.cpp)
## 3.移除元素
[27](https://github.com/Kukukukiki192/LeetCode1/blob/master/P27_RemoveElement.cpp) 
[26](https://github.com/Kukukukiki192/LeetCode1/blob/master/P26_RemoveDuplicatesFromSortedArray.cpp) 
[283](https://github.com/Kukukukiki192/LeetCode1/blob/master/P283_MoveZeroes.cpp) 
[844](https://github.com/Kukukukiki192/LeetCode1/blob/master/P844_BackspaceStringCompare.cpp) 

## 4.有序数组的平方
[977](https://github.com/Kukukukiki192/LeetCode1/blob/master/P977_SquaresOfASortedArray.cpp)

## 5.长度最小的子数组
[209]() 
[904]() 
[76]()
## 6.螺旋矩阵
[59](https://github.com/Kukukukiki192/LeetCode1/blob/master/P59_SpiralMatrixIi.cpp) 
[54](https://github.com/Kukukukiki192/LeetCode1/blob/master/P54_SpiralMatrix.cpp)

# 2 链表
## [203.移除链表元素](https://github.com/Kukukukiki192/LeetCode1/blob/master/P203_RemoveLinkedListElements.cpp)
头节点特殊情况：单独处理/设`虚拟头 ListNode* dummy=new ListNode(-1,head);  / auto v=new ListNode(-1);  v->next=head;`   
C++手动释放内存 Java自动垃圾回收
## [707.设计链表](https://github.com/Kukukukiki192/LeetCode1/blob/master/P707_DesignLinkedList.cpp)
## [206.反转链表](https://github.com/Kukukukiki192/LeetCode1/blob/master/P206_ReverseLinkedList.cpp)
双指针/递归
## [24. 两两交换链表中的节点](https://github.com/Kukukukiki192/LeetCode1/blob/master/P24_SwapNodesInPairs.cpp)
## [19.删除链表的倒数第N个节点](https://github.com/Kukukukiki192/LeetCode1/blob/master/P19_RemoveNthNodeFromEndOfList.cpp)
计算总结点数/快慢指针
## [160.链表相交](https://github.com/Kukukukiki192/LeetCode1/blob/master/P160_IntersectionOfTwoLinkedLists.cpp)
## [142.环形链表II](https://github.com/Kukukukiki192/LeetCode1/blob/master/P142_LinkedListCycleIi.cpp)
<img src="https://img-blog.csdnimg.cn/49015a1f65b94f78a7c812f4bec43f9c.png" width=50%> 快慢指针 <strong>数学关系</strong>

# 10 动态规划 Dynamic Programming (DP)
有重叠子问题  
每个状态由上个状态推导(区分于贪心-局部最优选)  
> 步骤：
> 1. 确定dp数组（dp table）以及下标的含义
> 2. 确定**递推公式**(状态转移方程) ->决定3
> 3. dp数组如何**初始化**
> 4. 确定**遍历顺序**
> 5. 举例推导dp数组  
> (debug:打印dp数组日志 和推导一样->递归公式、初始化、遍历顺序有bug 不一样->代码实现细节有bug)

![](https://img-blog.csdnimg.cn/dec83887f1db4959a8645b9aa8bf4b68.png)
## 0 基础
[509](https://github.com/Kukukukiki192/LeetCode1/blob/master/P509_FibonacciNumber.cpp) 
[70](https://github.com/Kukukukiki192/LeetCode1/blob/master/P70_ClimbingStairs.cpp) 
[746](https://github.com/Kukukukiki192/LeetCode1/blob/master/P746_MinCostClimbingStairs.cpp) 
[62](https://github.com/Kukukukiki192/LeetCode1/blob/master/P62_UniquePaths.cpp) 
[63]()
[343]()
[96]()
## 1 背包
### 01背包
[416]()
[1049]()
[494]()
[474]()
### 完全背包
[518]()
[377]()
[70]()
[322]()
[279]()
[139]()
### 多重背包

## 2 打家劫舍
[198]()
[213]()
[377]()
## 3 股票
[121]()
[122]()
[123]()
[188]()
[309]()
[714]()
## 4 子序列
### 子序列(不连续)
[300]()
[1143]()
[3035]()
### 子序列(连续)
[674]()
[718]()
[53]()
### 编辑距离
[392]()
[115]()
[583]()
[72]()
### 回文
[647]()
[516]()