// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB310 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_588eb310() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x588eb466
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5ch]
        push esi
        mov esi, dword ptr [edi + 58h]
        sub eax, esi
        mov edx, 40000000h
        ; Exact mapped bytes 74 23: je 0x588eb352
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [edi + 50h]
        cmp ecx, dword ptr [edi + 54h]
        push ebp
        lea ebp, [ecx + 1]
        mov dword ptr [edi + 50h], ebp
        pop ebp
        ; Exact mapped bytes 7E 0C: jle 0x588eb34b
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 60h], edx
        ; Exact mapped bytes EB 07: jmp 0x588eb352
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [edi + 60h], 0
        cmp dword ptr [edi + 60h], edx
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x588eb446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x588eb362
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 60h], eax
        cmp dword ptr [edi + 60h], edx
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x588eb446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x588eb38d
        __asm _emit 0x75
        __asm _emit 0x1a
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x588eb37e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, ecx
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x588eb441
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        mov eax, ecx
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x588eb441
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x588eb441
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x588eb3ee
        __asm _emit 0x7e
        __asm _emit 0x54
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 0A: jle 0x588eb3ab
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 1e240h
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x588eb441
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3039h
        ; Exact mapped bytes 7E 0A: jle 0x588eb3bc
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 3039h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x588eb441
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 07: jle 0x588eb3ca
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 4d2h
        ; Exact mapped bytes EB 77: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x77
        cmp eax, 7bh
        ; Exact mapped bytes 7E 07: jle 0x588eb3d6
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 7bh
        ; Exact mapped bytes EB 6B: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp eax, 0ch
        ; Exact mapped bytes 7E 07: jle 0x588eb3e2
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 0ch
        ; Exact mapped bytes EB 5F: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x5f
        xor edx, edx
        cmp eax, 1
        setge dl
        mov eax, edx
        ; Exact mapped bytes EB 53: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 7D 4F: jge 0x588eb43f
        __asm _emit 0x7d
        __asm _emit 0x4f
        cmp eax, 0fffe1dc0h
        ; Exact mapped bytes 7D 07: jge 0x588eb3fe
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffe1dc0h
        ; Exact mapped bytes EB 43: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp eax, 0ffffcfc7h
        ; Exact mapped bytes 7D 07: jge 0x588eb40c
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0ffffcfc7h
        ; Exact mapped bytes EB 35: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp eax, 0fffffb2eh
        ; Exact mapped bytes 7D 07: jge 0x588eb41a
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffffb2eh
        ; Exact mapped bytes EB 27: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp eax, -7bh
        ; Exact mapped bytes 7D 07: jge 0x588eb426
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0ffffff85h
        ; Exact mapped bytes EB 1B: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, -0ch
        ; Exact mapped bytes 7D 07: jge 0x588eb432
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffffff4h
        ; Exact mapped bytes EB 0F: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor ecx, ecx
        cmp eax, -1
        setg cl
        dec ecx
        mov eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x588eb441
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esi, eax
        mov dword ptr [edi + 58h], esi
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x588eb465
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x588eb468
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x588eb450
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
