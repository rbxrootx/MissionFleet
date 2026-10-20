// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6A70 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_584f6a70_584F6A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x584f6b1b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 14h
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, 14h
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 14h]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f6ac1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 52: jge 0x584f6b1b
        __asm _emit 0x7d
        __asm _emit 0x52
        movzx eax, byte ptr [ebp + 8]
        imul ecx, dword ptr [ebp - 4], 0ach
        mov edx, dword ptr [ebp - 8]
        movzx ecx, byte ptr [edx + ecx]
        cmp eax, ecx
        ; Exact mapped bytes 75 3A: jne 0x584f6b19
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx edx, byte ptr [ebp + 9]
        imul eax, dword ptr [ebp - 4], 0ach
        mov ecx, dword ptr [ebp - 8]
        movzx eax, byte ptr [ecx + eax + 1]
        cmp edx, eax
        ; Exact mapped bytes 75 23: jne 0x584f6b19
        __asm _emit 0x75
        __asm _emit 0x23
        movzx ecx, word ptr [ebp + 0ah]
        imul edx, dword ptr [ebp - 4], 0ach
        mov eax, dword ptr [ebp - 8]
        movzx edx, word ptr [eax + edx + 2]
        cmp ecx, edx
        ; Exact mapped bytes 75 0C: jne 0x584f6b19
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 0ach
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584f6b1d
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 9D: jmp 0x584f6ab8
        __asm _emit 0xeb
        __asm _emit 0x9d
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
