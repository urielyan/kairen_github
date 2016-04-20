ssh-keygen -t rsa -C "urielyan@sina.com" 得到公钥和私钥

git remote add origin https://github.com/urielyan/kairen_github.git -- 把本地仓库和远程仓库关联起来， 如果不执行这个命令的话，每次 push 的时候都需要指定远程服务器的地址

git config --global user.name/emaile "urileyan" 设置邮箱和姓名

git  pull origin master 从github中获得资源。

先将本地修改的文件添加到版本库中:
  git commit -a -m "comment"
将版本库所有修改添加到网络云端:  
  git push origin master 将被编辑的文件发送到Github中。

git show-branch 显示分支。
git remote -v   得到远程git存取地址。
