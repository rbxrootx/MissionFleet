// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F83A0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_100f83a0_100F83A0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        sub esp, 50h
        test edx, edx
        push ebp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 36: jne 0x100f83e6
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [esp + 68h]
        mov edx, dword ptr [esp + 64h]
        push 505050h
        push edx
        mov ecx, dword ptr [esi + eax*4 + 124h]
        push 101ac914h
        mov dword ptr [ecx + 60h], 505050h
        mov ecx, dword ptr [esi + eax*4 + 124h]
        ; Exact mapped bytes E8 53 BC 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        add esp, 50h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 68h]
        mov ebp, dword ptr [esp + 64h]
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edi + ebp*2]
        mov ecx, dword ptr [ecx + 0d0ch]
        mov ecx, dword ptr [ecx + eax*4 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 7A: je 0x100f8482
        __asm _emit 0x74
        __asm _emit 0x7a
        mov al, byte ptr [ecx + 98h]
        and eax, 0ffh
        mov dword ptr [esi + 400h], eax
        ; Exact mapped bytes 66 8B 89 9A 00 00 00: mov cx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 8
        and ecx, 0fh
        sub ecx, 0
        ; Exact mapped bytes 74 28: je 0x100f8453
        __asm _emit 0x74
        __asm _emit 0x28
        dec ecx
        ; Exact mapped bytes 74 14: je 0x100f8442
        __asm _emit 0x74
        __asm _emit 0x14
        dec ecx
        ; Exact mapped bytes 75 3A: jne 0x100f846b
        __asm _emit 0x75
        __asm _emit 0x3a
        imul eax, edx
        push edx
        push eax
        lea edx, [esp + 14h]
        push 101ac900h
        push edx
        ; Exact mapped bytes EB 20: jmp 0x100f8462
        __asm _emit 0xeb
        __asm _emit 0x20
        imul eax, edx
        push edx
        push eax
        lea eax, [esp + 14h]
        push 101ac8ech
        push eax
        ; Exact mapped bytes EB 0F: jmp 0x100f8462
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, edx
        push edx
        push eax
        lea ecx, [esp + 14h]
        push 101ac8d8h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        mov ecx, dword ptr [esi + edi*4 + 124h]
        push 0ffffffh
        lea edx, [esp + 10h]
        push ebp
        push edx
        ; Exact mapped bytes E8 AE BB 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        add esp, 50h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
