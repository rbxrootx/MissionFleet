// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6500 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_584f6500_584F6500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, 14h
        shl eax, 2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f652d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, 14h
        shl ecx, 2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + ecx + 8]
        ; Exact mapped bytes 7D 22: jge 0x584f6563
        __asm _emit 0x7d
        __asm _emit 0x22
        imul ecx, dword ptr [ebp - 4], 9ch
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 6]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x584f6561
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 9ch
        add eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x584f6565
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C1: jmp 0x584f6524
        __asm _emit 0xeb
        __asm _emit 0xc1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
