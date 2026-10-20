// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D1DB .. +0x226 bytes.
extern "C" __declspec(naked) void __CRT_INIT_12() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        xor eax, eax
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 0E: jne 0x5897d1f7
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 39 05 64 86 A2 58: cmp dword ptr [0x58a28664], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 7E 3C: jle 0x5897d22d
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes FF 0D 64 86 A2 58: dec dword ptr [0x58a28664]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 8B 0D D4 C1 98 58: mov ecx, dword ptr [0x5898c1d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ecx]
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 89 0D 98 89 A2 58: mov dword ptr [0x58a28998], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x5897d2e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 8B 0D 18 00 00 00: mov ecx, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 35 00 C1 98 58: mov esi, dword ptr [0x5898c100]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [ebp + 0ch], eax
        push eax
        mov ebx, 58a289a0h
        ; Exact mapped bytes EB 18: jmp 0x5897d245
        __asm _emit 0xeb
        __asm _emit 0x18
        xor eax, eax
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x5897d3fd
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 17: je 0x5897d24f
        __asm _emit 0x74
        __asm _emit 0x17
        push 3e8h
        ; Exact mapped bytes FF 15 54 C1 98 58: call dword ptr [0x5898c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push edi
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 E7: jne 0x5897d234
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 07: jmp 0x5897d256
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes A1 9C 89 A2 58: mov eax, dword ptr [0x58a2899c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5897d26b
        __asm _emit 0x74
        __asm _emit 0x09
        push 1fh
        ; Exact mapped bytes E8 91 07 00 00: call 0x5897d9fa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x5897d2a7
        __asm _emit 0xeb
        __asm _emit 0x3c
        push 5898c4bch
        push 5898c4b0h
        ; Exact mapped bytes C7 05 9C 89 A2 58 01 00 00 00: mov dword ptr [0x58a2899c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 70 07 00 00: call 0x5897d9f4
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5897d291
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x5897d3fa
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898c4ach
        push 5898c478h
        ; Exact mapped bytes E8 4E 07 00 00: call 0x5897d9ee
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 89 35 9C 89 A2 58: mov dword ptr [0x58a2899c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        pop ecx
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 75 08: jne 0x5897d2b7
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        push ebx
        ; Exact mapped bytes FF 15 68 C1 98 58: call dword ptr [0x5898c168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 3D A8 89 A2 58: cmp dword ptr [0x58a289a8], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 1C: je 0x5897d2db
        __asm _emit 0x74
        __asm _emit 0x1c
        push 58a289a8h
        ; Exact mapped bytes E8 67 06 00 00: call 0x5897d930
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5897d2db
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [ebp + 10h]
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 A8 89 A2 58: call dword ptr [0x58a289a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes FF 05 64 86 A2 58: inc dword ptr [0x58a28664]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x5897d3f7
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x5897d3f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 18 00 00 00: mov eax, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 4]
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 35 00 C1 98 58: mov esi, dword ptr [0x5898c100]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebx, 58a289a0h
        ; Exact mapped bytes EB 0F: jmp 0x5897d318
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp eax, edi
        ; Exact mapped bytes 74 17: je 0x5897d324
        __asm _emit 0x74
        __asm _emit 0x17
        push 3e8h
        ; Exact mapped bytes FF 15 54 C1 98 58: call dword ptr [0x5898c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push edi
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 E7: jne 0x5897d309
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 07: jmp 0x5897d32b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes A1 9C 89 A2 58: mov eax, dword ptr [0x58a2899c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x5897d342
        __asm _emit 0x74
        __asm _emit 0x0d
        push 1fh
        ; Exact mapped bytes E8 BE 06 00 00: call 0x5897d9fa
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5897d3f7
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 B0 89 A2 58: push dword ptr [0x58a289b0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 9C C3 98 58: mov esi, dword ptr [0x5898c39c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop ecx
        mov dword ptr [ebp + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5897d3e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 AC 89 A2 58: push dword ptr [0x58a289ac]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        mov dword ptr [ebp + 10h], eax
        mov dword ptr [ebp + 8], edi
        sub edi, 4
        cmp edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 51: jb 0x5897d3c9
        __asm _emit 0x72
        __asm _emit 0x51
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 F3: je 0x5897d370
        __asm _emit 0x74
        __asm _emit 0xf3
        ; Exact mapped bytes FF 15 E4 C1 98 58: call dword ptr [0x5898c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp dword ptr [edi], eax
        ; Exact mapped bytes 74 E9: je 0x5897d370
        __asm _emit 0x74
        __asm _emit 0xe9
        push dword ptr [edi]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes FF 15 E4 C1 98 58: call dword ptr [0x5898c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [edi], eax
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes FF 35 B0 89 A2 58: push dword ptr [0x58a289b0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF 35 AC 89 A2 58: push dword ptr [0x58a289ac]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 8]
        add esp, 0ch
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 75 05: jne 0x5897d3bc
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 B4: je 0x5897d370
        __asm _emit 0x74
        __asm _emit 0xb4
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 8], eax
        mov edi, eax
        ; Exact mapped bytes EB A7: jmp 0x5897d370
        __asm _emit 0xeb
        __asm _emit 0xa7
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 AC C2 98 58: call dword ptr [0x5898c2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
        pop ecx
        ; Exact mapped bytes FF 15 E4 C1 98 58: call dword ptr [0x5898c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A3 AC 89 A2 58: mov dword ptr [0x58a289ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 B0 89 A2 58: mov dword ptr [0x58a289b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes A3 9C 89 A2 58: mov dword ptr [0x58a2899c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 08: jne 0x5897d3f7
        __asm _emit 0x75
        __asm _emit 0x08
        push eax
        push ebx
        ; Exact mapped bytes FF 15 68 C1 98 58: call dword ptr [0x5898c168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        xor eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
