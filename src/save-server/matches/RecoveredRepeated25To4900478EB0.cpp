
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00478EB0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm fld qword ptr [ebp + 8]
    __asm frndint
    __asm fstp qword ptr [ebp - 8]
    __asm fld qword ptr [ebp - 8]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
