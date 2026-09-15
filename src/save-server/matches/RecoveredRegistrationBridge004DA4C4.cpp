// Exact recovered class-registration synchronization bridge.
extern "C" void Call004DA650();
extern "C" void Call00540663();
extern "C" void Call00542D7A();
extern "C" void Call00542EAC();
extern "C" __declspec(naked) void Recovered004DA4C4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm call Call00540663
    __asm mov dword ptr [ebp-4], eax
    __asm push 0
    __asm call Call00542D7A
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 28
    __asm call Call004DA650
    __asm push 0
    __asm call Call00542EAC
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
