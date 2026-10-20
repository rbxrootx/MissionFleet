// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B403 .. +0x3D8 bytes.
extern "C" __declspec(naked) void FUN_0051b403_0051B403() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58da46h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0b8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0bch], ecx
        mov ecx, 68709ch
        ; Exact mapped bytes E8 DC 8B 02 00: call 0x544010
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 30h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 BA 9E F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 8C 2C 03 00 00: jl 0x51b77f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 0F 84 1E 03 00 00: je 0x51b77f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 5B 36 01 00: call 0x52eacb
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 58 A9 FC FF: call 0x4e5dd4
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 5
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 9C B3 FB FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x51b4b8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 0C FC FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x51b4b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes EB 0A: jmp 0x51b4c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 1
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 30h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x51b4e6
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x51b4e6
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0dh
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 60h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 4F A7 FC FF: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 F2 88 01 00: call 0x533e05
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 46 02 00 00: je 0x51b761
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 E8 F9 FF FF: call 0x51af12
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        lea edx, [ebp - 24h]
        push edx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 BB 6C 01 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [ecx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x51b574
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes EB 14: jmp 0x51b588
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [edx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ebp - 74h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        add eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 49 6C 01 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 8ch]
        lea edx, [ecx + eax + 2]
        mov dword ptr [ebp - 84h], edx
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 0ch], edx
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 0ch], edx
        lea eax, [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 86 6D 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 7A 6D 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 7E 6F 01 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51b669
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 6769f8h
        ; Exact mapped bytes E8 DC D6 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b669
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C2: jne 0x51b631
        __asm _emit 0x75
        __asm _emit 0xc2
        lea ecx, [ebp - 0a4h]
        push ecx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 AA 6F 01 00: call 0x532628
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x51b6c2
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        lea ecx, [ebp - 0b0h]
        push ecx
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 26 6C 01 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 65 01 00: call 0x531c3b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51b6d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 126h
        push 6769f8h
        ; Exact mapped bytes E8 6F D6 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b6d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 93: jne 0x51b66f
        __asm _emit 0x75
        __asm _emit 0x93
        mov eax, dword ptr [ebp - 58h]
        push eax
        lea ecx, [ebp - 94h]
        ; Exact mapped bytes E8 95 D8 FC FF: call 0x4e8f80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 94h]
        push ecx
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 C1 6C 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 18 96 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        push 0cc0020h
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        imul eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 53 A0 01 00: call 0x535797
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 94h]
        ; Exact mapped bytes E8 A8 77 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 F8 A7 FC FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x51b7a0
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 15: je 0x51b7a0
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx + 2]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
