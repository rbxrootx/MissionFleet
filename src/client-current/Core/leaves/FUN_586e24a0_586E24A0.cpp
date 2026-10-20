// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E24A0 .. +0x338 bytes.
extern "C" __declspec(naked) void FUN_586e24a0_586E24A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c6beh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 74h
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
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B A0 E8 FF: call 0x5856c580
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b2ff8h
        push 54h
        ; Exact mapped bytes E8 08 EB 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x586e253b
        __asm _emit 0x74
        __asm _emit 0x2f
        push 72h
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 26 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push -1
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EA FD D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2542
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 44h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 45 30 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C2 38 DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7E EA 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2F: je 0x586e25c5
        __asm _emit 0x74
        __asm _emit 0x2f
        push 73h
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 25 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 60 FD D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e25cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 54h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B5 2F 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 2F 38 DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x38
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 EB E9 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3B: je 0x586e2664
        __asm _emit 0x74
        __asm _emit 0x3b
        push 9ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 24 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2b7h
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C1 FC D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e266b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 64h], eax
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 16 2F 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 30 38 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x38
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 49 E9 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 35: je 0x586e2700
        __asm _emit 0x74
        __asm _emit 0x35
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 23 DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 28h
        push ecx
        push 0ah
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 75 82 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2707
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 74h], edx
        push 101h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7A 2E 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2e
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 C3 E8 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 35: je 0x586e2786
        __asm _emit 0x74
        __asm _emit 0x35
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 23 DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 28h
        push ecx
        push 0ah
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EF 81 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e278d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 80h], edx
        push 101h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F4 2D 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2d
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
