# Qt５の環境構築

公式サイトからuibuntu向けのインストーラーをダウンロードしてきて、端末から

sudo apt install ./[インストーラー名]

を実行する

# Qt creator のインストール

端末で

sudo apt-get install qtcreatorとする

# Qt で Hello Worldをやってみる

argma 147氏著の　「Qt5/C++入門」に従って勉強していく

# SS3  Hello World 

1) UIプログラミングではmain中でまずQApplicationをインスタンス化する
　main()の終わりでは exec()を実行しイベントループを起動する

2) Qwidgetを継承したwidgetをインスタンス化しその変数に対してshow()を実行すると
ウィンドウが表示される

3) Qtでは親子関係のあるオブジェクトは子をdeleteしなくても親がデストラクタでdeleteされる
　ときにdeleteされる

　親のいないwidgetのオブジェクトをトップレベルウィジェットと言う

# SS4 Qtcreatorの使い方

1) リファクタリング

インクルードしていないクラスは対象で右クリックして開いたウィンドウで選択できる

2) ソースファイルに実態を追加する

 ヘッダーファイル中で関数のプロトタイプ宣言(classとか)した後に右クリック->リファクタリング->*.cppに実態を追加でソースファイルに関数の中身を書いてくれる

 3) ショートカットキー

 ソース、ヘッダの切り替えはF4を用いる

 # SS4 QObject

 
# SS5 UI

# SS6 development tips

# SS7

# SS8 MainWindow


