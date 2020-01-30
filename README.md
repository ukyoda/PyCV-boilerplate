# PyCV-boilerplate

Boost.PythonでOpenCVのモジュールを作成するためのボイラープレート

## 必要なライブラリ

* Python3
* Boost.Python
* OpenCV (ver4.x 推奨)

## 使い方

### 1. このプロジェクトをクローンする

下記コマンドでこのリポジトリをクローンしてください

```bash
$ git clone https://github.com/ukyoda/PyCV-boilerplate.git
```

### 2. makeできるように、各種パスを調整する

makeは下記コマンドで行ってください

```bash
$ cd /path/to/PyCV-boilerplate
$ mkdir build
$ cd build
$ cmake ..
$ make 
```

ビルドエラーが出たら、プロジェクトルートのディレクトリにある「CMakeLists.txt」の各種パッケージのパスを修正してください。
ビルドに成功したら「build/lib」にライブラリが作成されます。

### 3. モジュールを作成する

pycv_exampleを参考に、新しいライブラリを作成してください。
また、プロジェクトルートディレクトリの「CMakeLists.txt」に、作成したライブラリをサブディレクトリとして追加してください

### 4. モジュールを利用する

環境変数`PYTHONPATH`に、「/path/to/pycv_boilerplate/build/lib」を追加してpythonから作成したモジュールをimportしてください。