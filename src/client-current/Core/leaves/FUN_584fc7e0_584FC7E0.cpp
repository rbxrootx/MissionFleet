// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC7E0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_584fc7e0_584FC7E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 58h]
        xor ecx, 55h
        add eax, ecx
        mov edx, 2
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + edx + 58h]
        xor edx, 55h
        add eax, edx
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a0h]
        xor edx, 55h
        imul eax, edx
        mov esp, ebp
        pop ebp
        ret
    }
}
