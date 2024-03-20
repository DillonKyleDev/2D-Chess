## 2D Chess

## Description:

This is a simple 2 player 2D chess game made using the 2D game engine that I developed.

## Purpose

This project was a way for me to test the usability and the overall functionallity of my engine, "FlatEngine".  I was able to see where parts of the engine need work and which parts work well.

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