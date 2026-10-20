// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869176 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_58869176_58869176() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        xor ebx, ebx
        push 1cah
        push ebx
        push edi
        ; Exact mapped bytes E8 7F 3C FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 0ch]
        add esp, 0ch
        movzx eax, word ptr [esi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x588691a6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x588692a1
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2eh
        pop ecx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 2D: jne 0x588691db
        __asm _emit 0x75
        __asm _emit 0x2d
        lea eax, [esi + 2]
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 25: je 0x588691db
        __asm _emit 0x74
        __asm _emit 0x25
        push 0fh
        push eax
        lea eax, [edi + 100h]
        push 10h
        push eax
        ; Exact mapped bytes E8 A9 CD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x588692a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 87 1E 01 00 00: mov word ptr [edi + 0x11e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C4: jmp 0x5886919f
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov dword ptr [ebp - 4], ebx
        push 588c4e68h
        push esi
        ; Exact mapped bytes E8 27 DD 00 00: call 0x58876f10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5886929e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + eax*2]
        movzx ebx, word ptr [ecx]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        push 2ch
        pop edx
        test ecx, ecx
        ; Exact mapped bytes 75 2B: jne 0x58869231
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp eax, 40h
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x5886929e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        push 40h
        push edi
        ; Exact mapped bytes E8 57 CD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x588692a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2eh
        pop eax
        ; Exact mapped bytes 66 3B D8: cmp bx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 75 4B: jne 0x58869277
        __asm _emit 0x75
        __asm _emit 0x4b
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 5E: jmp 0x5886928f
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp ecx, 1
        ; Exact mapped bytes 75 16: jne 0x5886924c
        __asm _emit 0x75
        __asm _emit 0x16
        cmp eax, 40h
        ; Exact mapped bytes 73 63: jae 0x5886929e
        __asm _emit 0x73
        __asm _emit 0x63
        cmp ebx, 5fh
        ; Exact mapped bytes 74 5E: je 0x5886929e
        __asm _emit 0x74
        __asm _emit 0x5e
        push eax
        push esi
        push 40h
        lea eax, [edi + 80h]
        ; Exact mapped bytes EB 1E: jmp 0x5886926a
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, 2
        ; Exact mapped bytes 75 4D: jne 0x5886929e
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp eax, 10h
        ; Exact mapped bytes 73 48: jae 0x5886929e
        __asm _emit 0x73
        __asm _emit 0x48
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 05: je 0x58869260
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B DA: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 75 3E: jne 0x5886929e
        __asm _emit 0x75
        __asm _emit 0x3e
        push eax
        push esi
        push 10h
        lea eax, [edi + 100h]
        push eax
        ; Exact mapped bytes E8 00 CD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x588692a6
        __asm _emit 0x75
        __asm _emit 0x2f
        push 2ch
        pop eax
        ; Exact mapped bytes 66 3B D8: cmp bx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 84 1C FF FF FF: je 0x5886919f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 13 FF FF FF: je 0x5886919f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        add esi, 2
        inc eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x588691de
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 27 7D FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
