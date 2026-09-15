extern "C" void Call0051675B();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00516868()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm push 1
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0051675B
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
