// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858E7F0 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_5858e7f0_5858E7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588842f9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 64h
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
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x5858e900
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 D5 27 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x27
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 77: je 0x5858e8b9
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        ; Exact mapped bytes E8 5A D8 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd8
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 28h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        ; Exact mapped bytes E8 50 81 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x81
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 186h
        mov dword ptr [ebp - 2ch], eax
        push 26h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 62 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC C0 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc0
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e8c0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 3ch], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 94 75 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 41 75 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x75
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x5858e9e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 ED 26 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x26
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 77: je 0x5858e9a1
        __asm _emit 0x74
        __asm _emit 0x77
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 48h]
        ; Exact mapped bytes E8 72 D7 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 44h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 48h]
        ; Exact mapped bytes E8 68 80 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 1a9h
        mov dword ptr [ebp - 48h], eax
        push 26h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 61 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x61
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 48h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D4 BF 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbf
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e9a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 58h], edx
        push 2710h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AC 74 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x74
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 59 74 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x74
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 60h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E2 74 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x74
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 64h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CC 74 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x74
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 59: je 0x5858ea74
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 14h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 14h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 32 C7 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1D C7 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
