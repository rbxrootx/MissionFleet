// Exact recovered text normalization primitive.
extern "C" __declspec(naked) void Recovered004BABF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], ecx
    __asm scan_loop:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-8]
    __asm sub eax, 1
    __asm mov dword ptr [ebp-8], eax
    __asm test edx, edx
    __asm je scan_done
    __asm mov ecx, dword ptr [ebp-4]
    __asm movsx edx, byte ptr [ecx]
    __asm test edx, edx
    __asm je scan_done
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm jmp short scan_loop
    __asm scan_done:
    __asm mov ecx, dword ptr [ebp-4]
    __asm movsx edx, byte ptr [ecx]
    __asm test edx, edx
    __asm jne limit_reached
    __asm mov eax, dword ptr [ebp-4]
    __asm sub eax, dword ptr [ebp+8]
    __asm jmp short result
    __asm limit_reached:
    __asm mov eax, dword ptr [ebp+12]
    __asm result:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
