extern "C" void Call0053450A();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005344DA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053450A
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
