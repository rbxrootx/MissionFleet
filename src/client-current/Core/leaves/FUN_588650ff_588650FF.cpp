// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588650FF .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_588650ff_588650FF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 E5 3A 00 00: call 0x58868bf1
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x5886512e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [esi]
        mov ecx, edx
        lea eax, [edx + 90h]
        cmp edx, eax
        ; Exact mapped bytes 74 0E: je 0x5886512e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 74 0D: je 0x58865134
        __asm _emit 0x74
        __asm _emit 0x0d
        add ecx, 0ch
        cmp ecx, eax
        ; Exact mapped bytes 75 F5: jne 0x58865123
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        pop edi
        pop esi
        leave
        ret
        test ecx, ecx
        ; Exact mapped bytes 74 F6: je 0x5886512e
        __asm _emit 0x74
        __asm _emit 0xf6
        mov edi, dword ptr [ecx + 8]
        test edi, edi
        ; Exact mapped bytes 74 EF: je 0x5886512e
        __asm _emit 0x74
        __asm _emit 0xef
        cmp edi, 5
        ; Exact mapped bytes 75 09: jne 0x5886514d
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [ecx + 8], 0
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB E3: jmp 0x58865130
        __asm _emit 0xeb
        __asm _emit 0xe3
        cmp edi, 1
        ; Exact mapped bytes 75 05: jne 0x58865157
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB D9: jmp 0x58865130
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov eax, dword ptr [esi + 4]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 4], eax
        cmp dword ptr [ecx + 4], 8
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x58865228
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 24h
        lea eax, [edx + 6ch]
        ; Exact mapped bytes EB 07: jmp 0x5886517c
        __asm _emit 0xeb
        __asm _emit 0x07
        and dword ptr [edx + 8], 0
        add edx, 0ch
        cmp edx, eax
        ; Exact mapped bytes 75 F5: jne 0x58865175
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, 0c0000091h
        push ebx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 77 47: ja 0x588651d4
        __asm _emit 0x77
        __asm _emit 0x47
        ; Exact mapped bytes 74 3E: je 0x588651cd
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ecx], 0c000008dh
        ; Exact mapped bytes 74 2F: je 0x588651c6
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [ecx], 0c000008eh
        ; Exact mapped bytes 74 20: je 0x588651bf
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ecx], 0c000008fh
        ; Exact mapped bytes 74 11: je 0x588651b8
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ecx], 0c0000090h
        mov eax, ebx
        ; Exact mapped bytes 75 62: jne 0x58865213
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, 81h
        ; Exact mapped bytes EB 58: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, 86h
        ; Exact mapped bytes EB 51: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, 83h
        ; Exact mapped bytes EB 4A: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, 82h
        ; Exact mapped bytes EB 43: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, 84h
        ; Exact mapped bytes EB 3C: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ecx], 0c0000092h
        ; Exact mapped bytes 74 2F: je 0x5886520b
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [ecx], 0c0000093h
        ; Exact mapped bytes 74 20: je 0x58865204
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ecx], 0c00002b4h
        ; Exact mapped bytes 74 11: je 0x588651fd
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ecx], 0c00002b5h
        mov eax, ebx
        ; Exact mapped bytes 75 1D: jne 0x58865213
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, 8dh
        ; Exact mapped bytes EB 13: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, 8eh
        ; Exact mapped bytes EB 0C: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 85h
        ; Exact mapped bytes EB 05: jmp 0x58865210
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 8ah
        mov dword ptr [esi + 8], eax
        push eax
        push 8
        mov ecx, edi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop ecx
        pop ecx
        mov dword ptr [esi + 8], ebx
        pop ebx
        ; Exact mapped bytes EB 12: jmp 0x5886523a
        __asm _emit 0xeb
        __asm _emit 0x12
        and dword ptr [ecx + 8], 0
        push dword ptr [ecx + 4]
        mov ecx, edi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x58865152
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
