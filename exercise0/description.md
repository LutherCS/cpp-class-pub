# Environment setup

Make sure you have a good grasp of basic software development tools and Linux commands.

## Repository

- Create a new **private** repository on GitHub (e.g. `cpp-class-work`).
- Invite me as a collaborator to your private repo.
- Clone the class **public** repository:
    - `git clone git@github.com:LutherCS/cpp-class-pub.git cpp-class-local`.
- Configure public repo as **upstream**, so you could pull updates:
    - `git remote rename origin upstream`
- Pull the current public repo:
    - `git pull upstream main`
- Add private repo as **origin**:
    - `git remote add origin git@github.com:yourname/cpp-class-work.git`
- Push local files to GitHub:
    - `git push -u origin main`
- Start working on an assignment:
    - `nano src/exercise0.cpp`
- Complete an assignment (produce the expected output and/or pass the provided tests)
- Test your implementation:
    - `cd exercise0`
    - `make`
    - `make test_run`
- Stage updated files:
    - `git add src/exercise0.cpp`
- Commit changes:
    - `git commit -m "Exercise 0 done"`
- Push code to your private repository (`origin/main` by default):
    - `git push`

### Sample workflow for the exercise253

```bash
$ git pull upstream main
$ cd exercise253
$ vi src/exercise253.cpp
$ make
$ make test_run
$ git add src/exercise253.cpp
$ git commit -m "Exercise 253 done"
$ git push
```

## Compiler

[Install g++-11](https://lindevs.com/install-g-on-ubuntu/):

```bash
$ sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
$ sudo apt install -y g++-11
$ g++-11 --version
```

## IDE

The following steps are optional if you prefer another IDE or a text editor. Many are optional even if you are going to use VS Code.

- Download and install [Visual Studio Code](https://code.visualstudio.com/download).
- Install the [C/C++ extension](https://code.visualstudio.com/docs/languages/cpp) or [C/C++ extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
- Optional: Install [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) VS Code extension.
- Optional: Install clang and [C/C++ Clang Command Adapter](https://github.com/mitaki28/vscode-clang).
    - `sudo apt install clang`
- Optional: Download the latest version of *Catch2* test framework. Note: it is already part of the public repository. 
    - `wget https://github.com/catchorg/Catch2/releases/download/v2.13.8/catch.hpp`
- Optional: Copy the downloaded file to the system library. You only should do it if you are planning to use *Catch2* outside of this class.
    - `cp catch.hpp /usr/include/`
