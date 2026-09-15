// Exact recovered numeric classifier.
extern "C" __declspec(naked) void Recovered00479C10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp+12], 7ff00000h
    __asm jne negative_inf
    __asm cmp dword ptr [ebp+8], 0
    __asm jne negative_inf
    __asm mov eax, 1
    __asm jmp done
    __asm negative_inf:
    __asm cmp dword ptr [ebp+12], 0fff00000h
    __asm jne quiet_nan
    __asm cmp dword ptr [ebp+8], 0
    __asm jne quiet_nan
    __asm mov eax, 2
    __asm jmp done
    __asm quiet_nan:
    __asm mov eax, dword ptr [ebp+14]
    __asm and eax, 0ffffh
    __asm and eax, 7ff8h
    __asm cmp eax, 7ff8h
    __asm jne signaling
    __asm mov eax, 3
    __asm jmp done
    __asm signaling:
    __asm mov ecx, dword ptr [ebp+14]
    __asm and ecx, 0ffffh
    __asm and ecx, 7ff8h
    __asm cmp ecx, 7ff0h
    __asm jne normal
    __asm mov edx, dword ptr [ebp+12]
    __asm shl edx, 13
    __asm test edx, edx
    __asm jne nan
    __asm cmp dword ptr [ebp+8], 0
    __asm je normal
    __asm nan:
    __asm mov eax, 4
    __asm jmp done
    __asm normal:
    __asm xor eax, eax
    __asm done:
    __asm pop ebp
    __asm ret
}
