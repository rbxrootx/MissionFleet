// Exact recovered numeric classifier.
extern "C" __declspec(naked) void Recovered004C42E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-4], 0
    __asm next:
    __asm mov eax, dword ptr [ebp+8]
    __asm mov cl, byte ptr [eax]
    __asm mov byte ptr [ebp-8], cl
    __asm movsx edx, byte ptr [ebp-8]
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 1
    __asm mov dword ptr [ebp+8], eax
    __asm test edx, edx
    __asm je done
    __asm movsx ecx, byte ptr [ebp-8]
    __asm cmp ecx, 97
    __asm jl uppercase
    __asm movsx edx, byte ptr [ebp-8]
    __asm cmp edx, 102
    __asm jg uppercase
    __asm mov al, byte ptr [ebp-8]
    __asm add al, 0d9h
    __asm mov byte ptr [ebp-8], al
    __asm jmp accumulate
    __asm uppercase:
    __asm movsx ecx, byte ptr [ebp-8]
    __asm cmp ecx, 65
    __asm jl accumulate
    __asm movsx edx, byte ptr [ebp-8]
    __asm cmp edx, 70
    __asm jg accumulate
    __asm mov al, byte ptr [ebp-8]
    __asm add al, 0f9h
    __asm mov byte ptr [ebp-8], al
    __asm accumulate:
    __asm mov ecx, dword ptr [ebp-4]
    __asm shl ecx, 4
    __asm movsx edx, byte ptr [ebp-8]
    __asm lea eax, dword ptr [ecx+edx-48]
    __asm mov dword ptr [ebp-4], eax
    __asm jmp next
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
