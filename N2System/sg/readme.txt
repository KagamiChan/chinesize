/*************SG 汉化文本（估计是最终版）******************/

以前发给你的所有东西都可以删掉了。翻译过的往这里面覆盖时也请注意一下行数是否对应。

汉化文本分为三部分：
第一部分：脚本
	nss3目录中为纯文本，使用此文件翻译。
	具体封装方法和以前一样。
第二部分：tips和成就
	extra_tips1.txt
		该文件前面是tip标题，每5行为一个tip，其中前两行别动，后三行分别是分类，标题发音，标题。
		最后224行是tip文本，不想用这个翻译的话就用nss3中的extra_tips.txt，那里面分好了。翻完了我来导入。
	extra_achievements1.txt
		成就文本。
	这部分文本由我来封装吧。
第三部分：手机系统文本
	EXE目录\name.txt info.txt mail.txt
	三个文件翻译时均不能改变行数。否则整个文件中的内容将无法显示。
	name和info中的文本翻译时不要超过每行的初始长度。mail长度随意，mail文件中每行开头的'S '、'N '、'T '均可有可无。
	这部分文本的使用方法是把"EXE目录"下面的所有文件复制到游戏目录下，在三个txt中编辑的结果会直接在游戏中显示。（注意游戏目录名字中不能包含分号 ";"）

共同注意事项：
1 行数不变。
2 注意gbk字符集中无法显示的字符。可以通过把文件另存一个gbk编码的副本，然后在其中搜索?来判断哪些字符不能显示。

newnsbs中的那个文件封装进去的话，sg启动时的4幅logo停留时间将大幅缩短。上次给你的另外几个nsb都不要了。