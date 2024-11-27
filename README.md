## 2D Chess

![FlatEngine 3_20_2024 3_30_02 PM](https://github.com/DillonKyleDev/2D-Chess/assets/82423961/65e31bbb-5698-4622-a9f9-3fa5d4d7fea1)
![FlatEngine 3_20_2024 3_26_53 PM](https://github.com/DillonKyleDev/2D-Chess/assets/82423961/0641a078-7379-4954-b067-46ec2903d8ae)
![FlatEngine 3_20_2024 3_28_27 PM](https://github.com/DillonKyleDev/2D-Chess/assets/82423961/42a2cfe0-bce6-47d9-be3e-59dd13ba5313)


## To Play ##

The release available above is outdated.  For the latest version download from the "Releases" section on the right-hand sidebar.

1. Download the release .zip file from "Releases" on the right-hand sidebar
2. Extract
3. Run the SimpleChess.exe file

## Description:

This is a simple 2 player 2D chess game made using the 2D game engine that I developed.

## Purpose

This project was a way for me to test the usability and the overall functionallity of my 2D game engine, FlatEngine.  I was able to see where parts of the engine need work and which parts work well.

## Things Learned

During the development of this game, I discovered that:

1. Having simple ways to access aspects of the engine is very important and that I need to make accessing things like GameObject components much more streamlined.

2. The scripts system also could use some work to reduce the amount of boilerplate needed when creating new ones.

3. I need to allow Audio components to include more than one sound effect/music file.

4. I need to fix some scaling bugs that appear with child objects.  Scale changes but location doesn't always change with parent object scaling.

5. Having a way to move GameObjects within the scene view would make editing the scene much easier.

6. Being able to drag GameObjects within the hierarchy to change the ordering would be nice.

7. Being able to drag components around in the inspector view would be nice.

8. I didn't end up using Animation components but I know they need a lot more work to make them usable.

9. I need to rework the Button components to work more intuitively with their event functions.

10. A lot of minor UI tweaks here and there would make the engine much more pleasant to use, like creating a top menu bar with more traditional ways to load and save scenes.
