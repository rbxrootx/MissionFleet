// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024F80 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_10024f80_10024F80() {
    __asm {
        push ebx
        ; Exact mapped bytes 66 8B 5C 24 08: mov bx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        mov al, bl
        push ebp
        and al, 0fh
        push esi
        cmp al, 4
        push edi
        ; Exact mapped bytes 75 2A: jne 0x10024fbb
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edi, dword ptr [ecx + 58h]
        mov ebp, dword ptr [ecx + 64h]
        xor edx, edx
        test edi, edi
        ; Exact mapped bytes 7E 1E: jle 0x10024fbb
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov esi, ebp
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 33 C3: xor ax, bx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc3
        test al, 1fh
        ; Exact mapped bytes 75 07: jne 0x10024fb0
        __asm _emit 0x75
        __asm _emit 0x07
        test eax, 0ffe0h
        ; Exact mapped bytes 74 14: je 0x10024fc4
        __asm _emit 0x74
        __asm _emit 0x14
        inc edx
        add esi, 9ch
        cmp edx, edi
        ; Exact mapped bytes 7C E4: jl 0x10024f9f
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [edx + edx*4]
        pop edi
        shl ecx, 3
        sub ecx, edx
        pop esi
        lea eax, [ebp + ecx*4]
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
