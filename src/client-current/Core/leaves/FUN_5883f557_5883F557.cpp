// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F557 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_5883f557_5883F557() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 468h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 468h], ecx
        ; Exact mapped bytes 66 A1 44 0D 8F 58: mov ax, word ptr [0x588f0d44]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 85 F8 FE FF FF: mov word ptr [ebp - 0x108], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 102h
        push 0
        lea eax, [ebp - 106h]
        push eax
        ; Exact mapped bytes E8 80 D8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea eax, [ebp - 108h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5ch
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 1B 1C CB FF: call 0x584f11d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1c
        __asm _emit 0xcb
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 454h], eax
        cmp dword ptr [ebp - 454h], 0
        ; Exact mapped bytes 74 09: je 0x5883f5cf
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 454h]
        mov byte ptr [eax], 0
        push 5ch
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 F3 1B CB FF: call 0x584f11d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1b
        __asm _emit 0xcb
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 460h], eax
        cmp dword ptr [ebp - 460h], 0
        ; Exact mapped bytes 74 38: je 0x5883f626
        __asm _emit 0x74
        __asm _emit 0x38
        push 588f2f1ch
        ; Exact mapped bytes E8 1E CF FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 B9 75 00 00: call 0x58846bbe
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5883f624
        __asm _emit 0x74
        __asm _emit 0x19
        push 588f2f1ch
        ; Exact mapped bytes E8 01 CF FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 7E A4 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 2B: jmp 0x5883f651
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 588f2f2ch
        ; Exact mapped bytes E8 E6 CE FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 464h], eax
        push dword ptr [ebp - 464h]
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 42 81 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp + 8]
        lea eax, [ebp - 108h]
        push eax
        push 588f2f40h
        ; Exact mapped bytes E8 B1 CE FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push 104h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2C D5 CC FF: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd5
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 14h
        push 2
        push 0
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 20 A1 00 00: call 0x588497a3
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 45ch], eax
        cmp dword ptr [ebp - 45ch], 0
        ; Exact mapped bytes 75 07: jne 0x5883f69c
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x5883f7fe
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 310h]
        push eax
        push 104h
        ; Exact mapped bytes FF 15 A4 42 89 58: call dword ptr [0x588942a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 10 42 89 58: call dword ptr [0x58894210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 450h]
        push eax
        push 588f2f4ch
        ; Exact mapped bytes E8 4A CE FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 84 43 89 58: call dword ptr [0x58894384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 458h], eax
        cmp dword ptr [ebp - 458h], -1
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x5883f7e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 450h]
        and eax, 10h
        ; Exact mapped bytes 74 05: je 0x5883f6f7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5883f7bc
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f2f54h
        ; Exact mapped bytes E8 15 CE FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 424h]
        push eax
        ; Exact mapped bytes E8 EA D3 FF FF: call 0x5883caf9
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x5883f753
        __asm _emit 0x75
        __asm _emit 0x3e
        push 588f2f60h
        ; Exact mapped bytes E8 F7 CD FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 424h]
        push eax
        ; Exact mapped bytes E8 CC D3 FF FF: call 0x5883caf9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5883f753
        __asm _emit 0x75
        __asm _emit 0x20
        push 588f2f6ch
        ; Exact mapped bytes E8 D9 CD FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 424h]
        push eax
        ; Exact mapped bytes E8 AE D3 FF FF: call 0x5883caf9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5883f753
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 69: jmp 0x5883f7bc
        __asm _emit 0xeb
        __asm _emit 0x69
        lea eax, [ebp - 424h]
        push eax
        push 588f2f80h
        ; Exact mapped bytes E8 B2 CD FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 EE D3 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd3
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 0ch
        push 0
        lea eax, [ebp - 20ch]
        push eax
        lea eax, [ebp - 424h]
        push eax
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5883f7bc
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2
        push 0
        lea eax, [ebp - 20ch]
        push eax
        lea eax, [ebp - 424h]
        push eax
        push dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 1E A3 00 00: call 0x58849aca
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 450h]
        push eax
        push dword ptr [ebp - 458h]
        ; Exact mapped bytes FF 15 38 41 89 58: call dword ptr [0x58894138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 10 FF FF FF: jne 0x5883f6e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 458h]
        ; Exact mapped bytes FF 15 DC 43 89 58: call dword ptr [0x588943dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 310h]
        push eax
        ; Exact mapped bytes FF 15 10 42 89 58: call dword ptr [0x58894210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 03 9E 00 00: call 0x588495fe
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov al, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 48 18 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
