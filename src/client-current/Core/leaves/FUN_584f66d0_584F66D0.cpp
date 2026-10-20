// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F66D0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_584f66d0_584F66D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, 14h
        shl eax, 3
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 14h], 0
        mov eax, 14h
        shl eax, 3
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 14h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f6716
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 3C: jge 0x584f675a
        __asm _emit 0x7d
        __asm _emit 0x3c
        movzx edx, word ptr [ebp + 8]
        imul eax, dword ptr [ebp - 4], 574h
        mov ecx, dword ptr [ebp - 8]
        movzx eax, word ptr [ecx + eax + 4]
        cmp edx, eax
        ; Exact mapped bytes 75 23: jne 0x584f6758
        __asm _emit 0x75
        __asm _emit 0x23
        movzx ecx, word ptr [ebp + 0ch]
        imul edx, dword ptr [ebp - 4], 574h
        mov eax, dword ptr [ebp - 8]
        movzx edx, word ptr [eax + edx + 6]
        cmp ecx, edx
        ; Exact mapped bytes 75 0C: jne 0x584f6758
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 574h
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584f675c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B3: jmp 0x584f670d
        __asm _emit 0xeb
        __asm _emit 0xb3
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
