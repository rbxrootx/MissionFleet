// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6FB0 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_584f6fb0_584F6FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x584f705d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 14h
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        mov edx, 14h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 14h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f7003
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 52: jge 0x584f705d
        __asm _emit 0x7d
        __asm _emit 0x52
        movzx edx, byte ptr [ebp + 8]
        imul eax, dword ptr [ebp - 4], 0a8h
        mov ecx, dword ptr [ebp - 8]
        movzx eax, byte ptr [ecx + eax]
        cmp edx, eax
        ; Exact mapped bytes 75 3A: jne 0x584f705b
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx ecx, byte ptr [ebp + 9]
        imul edx, dword ptr [ebp - 4], 0a8h
        mov eax, dword ptr [ebp - 8]
        movzx edx, byte ptr [eax + edx + 1]
        cmp ecx, edx
        ; Exact mapped bytes 75 23: jne 0x584f705b
        __asm _emit 0x75
        __asm _emit 0x23
        movzx eax, word ptr [ebp + 0ah]
        imul ecx, dword ptr [ebp - 4], 0a8h
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + ecx + 2]
        cmp eax, ecx
        ; Exact mapped bytes 75 0C: jne 0x584f705b
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 0a8h
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584f705f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 9D: jmp 0x584f6ffa
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
