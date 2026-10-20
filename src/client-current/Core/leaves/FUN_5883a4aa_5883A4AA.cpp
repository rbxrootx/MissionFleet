// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A4AA .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_5883a4aa_5883A4AA() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x5883a4ba
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        push esi
        push edi
        ; Exact mapped bytes E8 7F 1D 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5883536ch
        ; Exact mapped bytes FF 15 74 42 89 58: call dword ptr [0x58894274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5bdch
        mov esi, eax
        ; Exact mapped bytes E8 2C 6B FF FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5883a4e6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 EC 84 FF FF: call 0x588329d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883a4e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push dword ptr [ebp + 8]
        mov ecx, eax
        ; Exact mapped bytes A3 EC 83 96 58: mov dword ptr [0x589683ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 CF FF FF: call 0x588374c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 10h], eax
        cmp eax, 755h
        ; Exact mapped bytes 74 2B: je 0x5883a532
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes E8 8E AF FF FF: call 0x5883549a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 3e81h
        ; Exact mapped bytes 75 09: jne 0x5883a522
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ecx + 10h], 74h
        ; Exact mapped bytes EB 2B: jmp 0x5883a54d
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp eax, 3e82h
        ; Exact mapped bytes 75 24: jne 0x5883a54d
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [ecx + 10h], 75h
        ; Exact mapped bytes EB 1B: jmp 0x5883a54d
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 3D 88 72 96 58 00: cmp word ptr [0x58967288], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x5883a54d
        __asm _emit 0x74
        __asm _emit 0x11
        push 58967288h
        ; Exact mapped bytes E8 74 00 00 00: call 0x5883a5ba
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 1ch]
        mov edi, dword ptr [ecx + 10h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5883a564
        __asm _emit 0x74
        __asm _emit 0x0d
        push eax
        ; Exact mapped bytes FF 15 E0 43 89 58: call dword ptr [0x588943e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0B: je 0x5883a575
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        push dword ptr [ecx + 20h]
        ; Exact mapped bytes FF 15 B4 43 89 58: call dword ptr [0x588943b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x5883a580
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 74 42 89 58: call dword ptr [0x58894274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 1C 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
