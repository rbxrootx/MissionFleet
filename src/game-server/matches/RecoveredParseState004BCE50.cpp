// Exact recovered parser/runtime helper.
extern "C" __declspec(naked) void Recovered004BCE50()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 32
    __asm test eax, eax
    __asm je bit8
    __asm mov dword ptr [ebp-4], 5
    __asm jmp done
    __asm bit8:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 8
    __asm test ecx, ecx
    __asm je bit4
    __asm mov dword ptr [ebp-4], 1
    __asm jmp done
    __asm bit4:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 4
    __asm test edx, edx
    __asm je bit1
    __asm mov dword ptr [ebp-4], 2
    __asm jmp done
    __asm bit1:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je bit2
    __asm mov dword ptr [ebp-4], 3
    __asm jmp done
    __asm bit2:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 2
    __asm test ecx, ecx
    __asm je none
    __asm mov dword ptr [ebp-4], 4
    __asm jmp done
    __asm none:
    __asm mov dword ptr [ebp-4], 0
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
