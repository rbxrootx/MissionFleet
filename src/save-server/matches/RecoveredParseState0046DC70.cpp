// Exact recovered parser/runtime helper.
extern "C" __declspec(naked) void Recovered0046DC70()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], eax
    __asm copy_check:
    __asm cmp dword ptr [ebp+16], 0
    __asm je pad_check
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp+12]
    __asm mov ax, word ptr [edx]
    __asm mov word ptr [ecx], ax
    __asm mov ecx, dword ptr [ebp+8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 2
    __asm mov dword ptr [ebp+8], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm add ecx, 2
    __asm mov dword ptr [ebp+12], ecx
    __asm test edx, edx
    __asm je pad_check
    __asm mov edx, dword ptr [ebp+16]
    __asm sub edx, 1
    __asm mov dword ptr [ebp+16], edx
    __asm jmp copy_check
    __asm pad_check:
    __asm cmp dword ptr [ebp+16], 0
    __asm je done
    __asm pad_loop:
    __asm mov eax, dword ptr [ebp+16]
    __asm sub eax, 1
    __asm mov dword ptr [ebp+16], eax
    __asm cmp dword ptr [ebp+16], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov word ptr [ecx], 0
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 2
    __asm mov dword ptr [ebp+8], edx
    __asm jmp pad_loop
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
