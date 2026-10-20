// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481D90 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_00481d90_00481D90() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr [ebp + 10h]
        or ecx, ecx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x481e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8D 05 38 75 68 00: lea eax, [0x687538]
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 4E: jne 0x481e01
        __asm _emit 0x75
        __asm _emit 0x4e
        mov bh, 41h
        mov bl, 5ah
        mov dh, 20h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ah, byte ptr [esi]
        or ah, ah
        mov al, byte ptr [edi]
        ; Exact mapped bytes 74 21: je 0x481de5
        __asm _emit 0x74
        __asm _emit 0x21
        or al, al
        ; Exact mapped bytes 74 1D: je 0x481de5
        __asm _emit 0x74
        __asm _emit 0x1d
        inc esi
        inc edi
        cmp ah, bh
        ; Exact mapped bytes 72 06: jb 0x481dd4
        __asm _emit 0x72
        __asm _emit 0x06
        cmp ah, bl
        ; Exact mapped bytes 77 02: ja 0x481dd4
        __asm _emit 0x77
        __asm _emit 0x02
        add ah, dh
        cmp al, bh
        ; Exact mapped bytes 72 06: jb 0x481dde
        __asm _emit 0x72
        __asm _emit 0x06
        cmp al, bl
        ; Exact mapped bytes 77 02: ja 0x481dde
        __asm _emit 0x77
        __asm _emit 0x02
        add al, dh
        cmp ah, al
        ; Exact mapped bytes 75 0D: jne 0x481def
        __asm _emit 0x75
        __asm _emit 0x0d
        dec ecx
        ; Exact mapped bytes 75 D7: jne 0x481dbc
        __asm _emit 0x75
        __asm _emit 0xd7
        xor ecx, ecx
        cmp ah, al
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x481e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 0F 82 90 00 00 00: jb 0x481e8a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x481e8a
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F0 FF 05 54 89 68 00: lock inc dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 89 68 00 00: cmp dword ptr [0x688944], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 04: jg 0x481e15
        __asm _emit 0x7f
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 19: jmp 0x481e2e
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes F0 FF 0D 54 89 68 00: lock dec dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 8B EA FE FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esp], 1
        mov ecx, ebx
        xor eax, eax
        xor ebx, ebx
        mov edi, edi
        mov al, byte ptr [esi]
        or eax, eax
        mov bl, byte ptr [edi]
        ; Exact mapped bytes 74 23: je 0x481e5f
        __asm _emit 0x74
        __asm _emit 0x23
        or ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x481e5f
        __asm _emit 0x74
        __asm _emit 0x1f
        inc esi
        inc edi
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 96 A2 FF FF: call 0x47c0e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        add esp, 4
        ; Exact mapped bytes E8 8C A2 FF FF: call 0x47c0e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop ecx
        cmp eax, ebx
        ; Exact mapped bytes 75 09: jne 0x481e65
        __asm _emit 0x75
        __asm _emit 0x09
        dec ecx
        ; Exact mapped bytes 75 D5: jne 0x481e34
        __asm _emit 0x75
        __asm _emit 0xd5
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x481e6e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 72 02: jb 0x481e6e
        __asm _emit 0x72
        __asm _emit 0x02
        neg ecx
        pop eax
        or eax, eax
        ; Exact mapped bytes 75 09: jne 0x481e7c
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F0 FF 0D 54 89 68 00: lock dec dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x481e8a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 CB EA FE FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, ebx
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave
        ret
    }
}
