// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D220 .. +0x377 bytes.
extern "C" __declspec(naked) void FUN_5876d220_5876D220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888ff64h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 7ch
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
        cmp dword ptr [eax + 11cch], 0
        ; Exact mapped bytes 75 51: jne 0x5876d2a5
        __asm _emit 0x75
        __asm _emit 0x51
        push 198h
        ; Exact mapped bytes E8 A6 3D 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x5876d285
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 588b5280h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 94 04 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5876d28c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 11cch], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 11c0h], 0
        ; Exact mapped bytes 75 6F: jne 0x5876d320
        __asm _emit 0x75
        __asm _emit 0x6f
        push 58h
        ; Exact mapped bytes E8 4C 3D 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x5876d300
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 3fh
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 7fh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 15 95 D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x95
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5876d307
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 11c0h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 11c4h], 0
        ; Exact mapped bytes 75 6C: jne 0x5876d398
        __asm _emit 0x75
        __asm _emit 0x6c
        push 58h
        ; Exact mapped bytes E8 D1 3C 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 32: je 0x5876d378
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 122h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 82h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 94 D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x94
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5876d37f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 11c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11c0h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 92 8A D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11c4h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7C 8A D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11c0h]
        mov dword ptr [ebp - 48h], edx
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D3 81 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11c4h]
        mov dword ptr [ebp - 4ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BA 81 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11c0h]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D4 8A D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11c4h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 BE 8A D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 11c8h], 0
        ; Exact mapped bytes 75 74: jne 0x5876d4a3
        __asm _emit 0x75
        __asm _emit 0x74
        push 58h
        ; Exact mapped bytes E8 CE 3B 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3A: je 0x5876d483
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 91 0A 41 00 00: movsx edx, word ptr [ecx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 32h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 122h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 82h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 92 93 D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x93
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5876d48a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 11c8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11c8h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 87 89 D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11c8h]
        mov dword ptr [ebp - 60h], edx
        push 101h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DE 80 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11c8h]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F8 89 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x89
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11c0h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11cch]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C6 75 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x75
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 47 97 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11c4h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11cch]
        mov dword ptr [ebp - 74h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 95 75 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x75
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 16 97 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x97
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11c8h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11cch]
        mov dword ptr [ebp - 80h], eax
        push 2
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 61 75 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x75
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D9 96 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x96
        __asm _emit 0xd1
        __asm _emit 0xff
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
        ret
    }
}
