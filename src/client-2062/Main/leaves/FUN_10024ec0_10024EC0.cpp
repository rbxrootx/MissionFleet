// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024EC0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_10024ec0_10024EC0() {
    __asm {
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 66 8B 4C 24 08: mov cx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        push esi
        mov al, cl
        push edi
        and al, 0fh
        cmp al, 1
        ; Exact mapped bytes 75 28: jne 0x10024efa
        __asm _emit 0x75
        __asm _emit 0x28
        mov edi, dword ptr [ebp + 1ch]
        mov esi, dword ptr [ebp + 28h]
        xor edx, edx
        test edi, edi
        ; Exact mapped bytes 7E 1C: jle 0x10024efa
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 33 C1: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc1
        test al, 1fh
        ; Exact mapped bytes 75 07: jne 0x10024eef
        __asm _emit 0x75
        __asm _emit 0x07
        test eax, 0ffe0h
        ; Exact mapped bytes 74 13: je 0x10024f02
        __asm _emit 0x74
        __asm _emit 0x13
        inc edx
        add esi, 368h
        cmp edx, edi
        ; Exact mapped bytes 7C E4: jl 0x10024ede
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, edx
        pop edi
        shl eax, 4
        add eax, edx
        pop esi
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [ebp + 14h]
        pop ebp
        lea edx, [edx + ecx*2]
        lea eax, [eax + edx*2]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
