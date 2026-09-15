extern "C" void Call0054CCB7();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0054D1D4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm fld qword ptr [eax]
    __asm fchs
    __asm sub esp, 8
    __asm fstp qword ptr [esp]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call0054CCB7
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
