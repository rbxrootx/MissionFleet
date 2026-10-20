// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58590310 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_58590310_58590310() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884384h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 2
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 75 44: jne 0x5859038f
        __asm _emit 0x75
        __asm _emit 0x44
        push 24h
        ; Exact mapped bytes E8 B2 0C 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x58590372
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 01 00 00: call 0x58590480
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58590379
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 24h], eax
        push 2
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EE 04 00 00: call 0x58590890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        mov edx, dword ptr [eax + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F2 04 00 00: call 0x585908b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 FE FF FF: call 0x585902c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 9D 16 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 92 16 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 84 16 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 76 16 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        push 8
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 0a4h
        push eax
        ; Exact mapped bytes E8 04 CA 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xca
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 BA EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xba
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5859042a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 BD EF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 30: je 0x58590460
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 C0 EF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 F3 F1 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 CB EF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xcb
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 D4 FF FF: call 0x5858d930
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x5859041f
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
