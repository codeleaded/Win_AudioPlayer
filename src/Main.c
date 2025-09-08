#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"

void Setup(AlxWindow* w){
	
}
void Update(AlxWindow* w){
	
	Clear(BLACK);

	//String str = String_Format("MI:%d",nMaxIterations);
	//CStr_RenderSizeAlxFont(WINDOW_STD_ARGS,&window.AlxFont,str.Memory,str.size,0.0f,0.0f,WHITE);
	//String_Free(&str);
}
void Delete(AlxWindow* w){
	
}

int main(){
    if(Create("Audio Player",1920,1080,1,1,Setup,Update,Delete))
        Start();
    return 0;
}