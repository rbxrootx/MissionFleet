// Exact recovered OLE global registration target.
extern "C" unsigned char OleData0054A78A;
extern "C" void Construct0054A799();
void Target0054A780();
__declspec(naked) void Target0054A780()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset OleData0054A78A
    __asm call Construct0054A799
    __asm pop ebp
    __asm ret
}
