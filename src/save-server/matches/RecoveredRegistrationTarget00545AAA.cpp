// Exact recovered OLE global registration target.
extern "C" unsigned char OleData00545AAA;
extern "C" void Construct00545AB9();
void Target00545AA0();
__declspec(naked) void Target00545AA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset OleData00545AAA
    __asm call Construct00545AB9
    __asm pop ebp
    __asm ret
}
