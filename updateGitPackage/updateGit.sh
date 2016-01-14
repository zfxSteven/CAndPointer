#!bin/bash
mkdir /etc/yum.repo/
mkdir bak
mv * ./bak
#配置163的源
curl -L http://mirrors.163.com/.help/CentOS6-Base-163.repo  > CentOS6-Base-163.repo 
#配置epel的源
rpm -ivh http://mirrors.ustc.edu.cn/epel/6/x86_64/epel-release-6-8.noarch.rpm
#更新一下包
yum update
yum install ruby gcc gcc-g++ make libffi-devel  openssl-devel.x86_64 python-devel vim curl-devel perl-ExtUtils-MakeMaker.x86_64 tcl tk gettext  asciidoc xmlto
#下载解压
curl  -O https://www.kernel.org/pub/software/scm/git/git-2.0.0.tar.gz 
tar -zxvf git-2.0.0.tar.gz 
cd git-2.0.0
make configure ;# as yourself
./configure --prefix=/usr ;# as yourself
make all doc ;# as yourself
make install install-doc install-html;# as root

