// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854CFF0 .. +0x2C8 bytes.
extern "C" __declspec(naked) void FUN_5854cff0_5854CFF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883082h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 68h
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
        mov dword ptr [eax], 588a7ea4h
        push 0fh
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 7A F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 05: jne 0x5854d03c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 68 02 00 00: jmp 0x5854d2a4
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 17h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 221h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c0h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5854d072
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 28 02 00 00: jge 0x5854d2a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        sub eax, dword ptr [ebp - 14h]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        push 54h
        ; Exact mapped bytes E8 73 3F 2E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 49: je 0x5854d0ed
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10h]
        sub edx, eax
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C5 90 FF FF: call 0x58546190
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 40h
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 38 52 F3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5854d0f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + eax*4 + 18h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [ebp - 4ch], edx
        push 22eh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 58 8D F3 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [ebp - 50h], edx
        push 1eh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 71 84 26 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [ebp - 54h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E7 83 26 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A3 3E 2E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3e
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 32: je 0x5854d1a6
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14h]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        sub ecx, edx
        sub ecx, 0bh
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7F 51 F3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5854d1ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [edx + ecx*4 + 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        mov dword ptr [ebp - 5ch], eax
        push 22ch
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9F 8C F3 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 1B 3E 2E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3e
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 50: je 0x5854d24c
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 14h]
        sub edx, 5
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10h]
        sub edx, eax
        sub edx, 5
        mov dword ptr [ebp - 64h], edx
        push 75h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 78 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x78
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 40h
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D9 50 F3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5854d253
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + edx*4 + 58h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 58h]
        mov dword ptr [ebp - 70h], ecx
        push 321h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F9 8B F3 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 58h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 42 8C F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 FD FF FF: jmp 0x5854d069
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
