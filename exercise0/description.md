# Environment setup

- Make sure you have a good grasp of basic software development tools and Linux commands.
- Download and install [Visual Studio Code](https://code.visualstudio.com/download).
- Install the C/C++ extension or C/C++ extension pack.
- Optional: Install Code Runner VS Code extension.
- Optional: Install clang: sudo apt install clang and C/C++ Clang Command Adapter.
- Optional: Configure the C/C++ extension to allow quick suggestions.
- Optional: Download the latest version of Catch2 test framework.
    - `wget https://github.com/catchorg/Catch2/releases/download/v2.13.8/catch.hpp`
- Optional: Copy the downloaded file to the system library.
    - `cp catch.hpp /usr/include/`
- Create a new private repository on GitHub.
- Duplicate the class public cpp-class-pub repository.
- Configure my repo as upstream, so you could pull updates from me
- Invite me as a collaborator to your private repo.
- Start working on an assignment.
- Pull the main branch from the course repository
- Complete an assignment (produce the expected output and/or pass the provided tests)
- Stage updated files
- Commit changes
- Push code to your private repository (origin)
- Sample workflow for the exercise253

```
git pull upstream main
cd exercise253
vi src/exercise253.cpp
git add .
git commit -m 'Exercise 253 done'
git push -u origin exercise253
```
