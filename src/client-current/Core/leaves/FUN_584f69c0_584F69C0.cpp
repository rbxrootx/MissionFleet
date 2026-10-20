// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F69C0 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_584f69c0_584F69C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x584f6a60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 14h
        shl ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 14h]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f69fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, 14h
        shl edx, 2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + edx + 8]
        ; Exact mapped bytes 7D 52: jge 0x584f6a60
        __asm _emit 0x7d
        __asm _emit 0x52
        movzx edx, byte ptr [ebp + 8]
        imul eax, dword ptr [ebp - 4], 9ch
        mov ecx, dword ptr [ebp - 8]
        movzx eax, byte ptr [ecx + eax]
        cmp edx, eax
        ; Exact mapped bytes 75 3A: jne 0x584f6a5e
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx ecx, byte ptr [ebp + 9]
        imul edx, dword ptr [ebp - 4], 9ch
        mov eax, dword ptr [ebp - 8]
        movzx edx, byte ptr [eax + edx + 1]
        cmp ecx, edx
        ; Exact mapped bytes 75 23: jne 0x584f6a5e
        __asm _emit 0x75
        __asm _emit 0x23
        movzx eax, word ptr [ebp + 0ah]
        imul ecx, dword ptr [ebp - 4], 9ch
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + ecx + 2]
        cmp eax, ecx
        ; Exact mapped bytes 75 0C: jne 0x584f6a5e
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 9ch
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584f6a62
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 91: jmp 0x584f69f1
        __asm _emit 0xeb
        __asm _emit 0x91
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
