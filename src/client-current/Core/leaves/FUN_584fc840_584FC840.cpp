// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC840 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_584fc840_584FC840() {
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
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 C0 33 8A 58: mulsd xmm0, qword ptr [0x588a33c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov esp, ebp
        pop ebp
        ret
    }
}
