#include <iostream>
#include <raylib.h>
//(?????)    should use a function to initialize or just do it in int main?


class introduction{
  public:
    void waking_up(){
      BeginDrawing();

      ClearBackground(BLACK);

      DrawText("You wake up on the ground. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));


        ClearBackgroun(BLACK);
      DrawText("The ground is hard and cold. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));
    

      
        ClearBackgroun(BLACK);
      DrawText("You can feel your body heat being pulled from you. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));


        ClearBackgroun(BLACK);
      DrawText("Do you get up? (y/n)\n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));


      if  (IsKeyDown(KEY_Y)) {
        break;
      } else if (IsKeyDown(KEY_N)) {
        ClearBackground(BLACK);
        DrawText("Yeah ... I get it .... \n", 10, 10, 20);
        std::this_thread::sleep_for(std::chrono::seconds(2));
      }
      

        ClearBackgroun(BLACK);
      DrawText(" You stand up. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));

        ClearBackgroun(BLACK);
      DrawText("Your hear your joints popping. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));

        ClearBackgroun(BLACK);
      DrawText("Your really need to start taking better care of yourself. \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));

        ClearBackgroun(BLACK);
      DrawText("You wake up on the ground \n" , 10, 10, 20, WHITE);
      std::this_thread::sleep_for(std::chrono::seconds(2));

        ClearBackgroun(BLACK);

      EndDrawing();
    }
}


int main () {
  InitWindow(800, 600 "Welcome to 0.00 !");

  while (!WindowShouldClose()) { // main game functions should be called in here
    introduction callable_intro;
    callable_intro.waking_up();


    
    















  }

  CloseWindow();
}
