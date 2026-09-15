// Exact recovered parser/runtime helper.
extern "C" __declspec(naked) void Recovered0047F290()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm mov cl, byte ptr [eax]
    __asm mov byte ptr [ebp-4], cl
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 1
    __asm mov dword ptr [ebp+8], edx
    __asm check:
    __asm movsx eax, byte ptr [ebp-4]
    __asm cmp eax, 65
    __asm jl lowercase
    __asm movsx ecx, byte ptr [ebp-4]
    __asm cmp ecx, 90
    __asm jle accept
    __asm lowercase:
    __asm movsx edx, byte ptr [ebp-4]
    __asm cmp edx, 97
    __asm jl done
    __asm movsx eax, byte ptr [ebp-4]
    __asm cmp eax, 122
    __asm jg done
    __asm accept:
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov al, byte ptr [edx]
    __asm mov byte ptr [ebp-4], al
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp+8], ecx
    __asm jmp check
    __asm done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
