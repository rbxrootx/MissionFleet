extern "C" void Call00530FE3();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005313D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call00530FE3
    __asm xor ecx, ecx
    __asm test eax, eax
    __asm setle cl
    __asm mov al, cl
    __asm pop ebp
    __asm ret 8
}
