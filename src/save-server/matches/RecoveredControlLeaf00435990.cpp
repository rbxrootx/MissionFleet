// Exact recovered repeated control/table leaf helper.
extern "C" __declspec(naked) void Recovered00435990()
{
    __asm mov ecx, dword ptr [esp+8]
    __asm mov edx, dword ptr [esp+4]
    __asm mov eax, dword ptr [esp+12]
    __asm sub ecx, edx
    __asm sar ecx, 1
    __asm test ecx, ecx
    __asm jle done
    __asm push esi
    __asm sub edx, eax
    __asm copy:
    __asm mov si, word ptr [edx+eax]
    __asm mov word ptr [eax], si
    __asm add eax, 2
    __asm dec ecx
    __asm jne copy
    __asm pop esi
    __asm done:
    __asm ret
}
