// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6770 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_584f6770_584F6770() {
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
        ; Exact mapped bytes EB 09: jmp 0x584f67b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 3B: jge 0x584f67f9
        __asm _emit 0x7d
        __asm _emit 0x3b
        movzx edx, word ptr [ebp + 8]
        imul eax, dword ptr [ebp - 4], 574h
        mov ecx, dword ptr [ebp - 8]
        movzx eax, word ptr [ecx + eax + 4]
        cmp edx, eax
        ; Exact mapped bytes 75 22: jne 0x584f67f7
        __asm _emit 0x75
        __asm _emit 0x22
        imul ecx, dword ptr [ebp - 4], 574h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + ecx + 55ch]
        ; Exact mapped bytes 75 0C: jne 0x584f67f7
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 574h
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584f67fb
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B4: jmp 0x584f67ad
        __asm _emit 0xeb
        __asm _emit 0xb4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
