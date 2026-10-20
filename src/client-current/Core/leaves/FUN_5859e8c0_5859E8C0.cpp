// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E8C0 .. +0x4BFB bytes.
extern "C" __declspec(naked) void FUN_5859e8c0_5859E8C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884fc4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 834h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 5B 39 EE FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax], 588aba08h
        mov ecx, dword ptr [ebp - 100h]
        mov byte ptr [ecx + 103ch], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 1040h], 1388h
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 1044h], 0
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 8D F8 FE FF FF: mov word ptr [ebp - 0x108], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 198h
        ; Exact mapped bytes E8 99 26 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x26
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 324h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 324h], 0
        ; Exact mapped bytes 74 1C: je 0x5859e99d
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588ab7f0h
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 1B 1A 1E 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 3c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859e9a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c8h], 0
        mov edx, dword ptr [ebp - 3c8h]
        mov dword ptr [ebp - 668h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 668h]
        ; Exact mapped bytes A3 A8 06 96 58: mov dword ptr [0x589606a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 38 26 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x26
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3cch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 3cch], 0
        ; Exact mapped bytes 74 1C: je 0x5859e9fe
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588ab804h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 BA 19 1E 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 3e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ea08
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e0h], 0
        mov ecx, dword ptr [ebp - 3e0h]
        mov dword ptr [ebp - 81ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 81ch]
        ; Exact mapped bytes 89 15 AC 06 96 58: mov dword ptr [0x589606ac], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 D6 25 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3e4h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 3e4h], 0
        ; Exact mapped bytes 74 1C: je 0x5859ea60
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588ab818h
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 58 19 1E 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ea6a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e8h], 0
        mov eax, dword ptr [ebp - 3e8h]
        mov dword ptr [ebp - 820h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 820h]
        ; Exact mapped bytes 89 0D 74 07 96 58: mov dword ptr [0x58960774], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 140h
        ; Exact mapped bytes E8 74 25 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ech], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ech], 0
        ; Exact mapped bytes 74 27: je 0x5859eacd
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0fffffeach
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 6B 34 1D 00: call 0x58771f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x34
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ead7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3f0h], 0
        mov eax, dword ptr [ebp - 3f0h]
        mov dword ptr [ebp - 824h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 824h]
        mov dword ptr [ecx + 0dach], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0dach]
        mov dword ptr [ebp - 828h], ecx
        push 426h
        mov ecx, dword ptr [ebp - 828h]
        ; Exact mapped bytes E8 65 73 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dach]
        mov dword ptr [ebp - 82ch], eax
        push 0
        mov ecx, dword ptr [ebp - 82ch]
        ; Exact mapped bytes E8 56 74 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 4d0h
        ; Exact mapped bytes E8 BF 24 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x24
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3f4h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3f4h], 0
        ; Exact mapped bytes 74 24: je 0x5859eb7f
        __asm _emit 0x74
        __asm _emit 0x24
        push 225h
        push 320h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 39 93 1D 00: call 0x58777eb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859eb89
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 830h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 830h]
        mov dword ptr [eax + 0dbch], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 834h], eax
        push 5
        mov ecx, dword ptr [ebp - 834h]
        ; Exact mapped bytes E8 96 71 EE FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 838h], edx
        push 428h
        mov ecx, dword ptr [ebp - 838h]
        ; Exact mapped bytes E8 94 72 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 83ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes E8 85 73 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0a0h
        ; Exact mapped bytes E8 EE 23 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x23
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 5B: je 0x5859ec87
        __asm _emit 0x74
        __asm _emit 0x5b
        push 1
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 5E EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        push 12ch
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 159h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 208h
        push ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 51 6C F4 FF: call 0x584e58d0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ec91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 400h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 400h]
        mov dword ptr [edx + 1030h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 1030h]
        mov dword ptr [ebp - 404h], edx
        push 0
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 6E 71 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1030h]
        mov dword ptr [ebp - 408h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 BC 68 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 0a4h
        ; Exact mapped bytes E8 05 23 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x23
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 78: je 0x5859ed8d
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1030h]
        mov dword ptr [ebp - 40ch], eax
        push 48h
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 5D EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        push 0
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        push 64h
        push 12ch
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 44ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1b3h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15eh
        push ecx
        mov edx, dword ptr [ebp - 410h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 BB 74 F4 FF: call 0x584e6240
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x74
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ed97
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 414h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [edx + 1034h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 1034h]
        mov dword ptr [ebp - 418h], edx
        push 0
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 68 70 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1034h]
        mov dword ptr [ebp - 41ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 B6 67 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x67
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 0a4h
        ; Exact mapped bytes E8 FF 21 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 78: je 0x5859ee93
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1030h]
        mov dword ptr [ebp - 420h], eax
        push 49h
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 5C EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        push 0
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        push 64h
        push 12ch
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1b3h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15eh
        push ecx
        mov edx, dword ptr [ebp - 424h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 B5 73 F4 FF: call 0x584e6240
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ee9d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 428h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 428h]
        mov dword ptr [edx + 1038h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 1038h]
        mov dword ptr [ebp - 42ch], edx
        push 0
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 62 6F EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 430h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 B0 66 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1038h]
        mov dword ptr [ebp - 434h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 EE 5B F2 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 198h
        ; Exact mapped bytes E8 D7 20 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x20
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 1C: je 0x5859ef5f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588ab82ch
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 59 14 1E 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ef69
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 438h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 438h]
        mov dword ptr [edx + 0a4h], eax
        push 304h
        ; Exact mapped bytes E8 6F 20 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x20
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 2A: je 0x5859efd5
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 0
        push 0
        push 0fffffe70h
        push 0e3h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 63 CC F9 FF: call 0x5853bc30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859efdf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 43ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 43ch]
        mov dword ptr [eax + 0db0h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0db0h]
        mov dword ptr [ebp - 440h], eax
        push 2b38h
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 5D 6E EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0db0h]
        mov dword ptr [ebp - 444h], edx
        push 5
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 1E 6D EE FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0db0h]
        mov dword ptr [ebp - 448h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 A4 6E EE FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0db0h]
        mov dword ptr [ebp - 44ch], edx
        push 0
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 05 6F EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 1a0h
        ; Exact mapped bytes E8 6E 1F 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 2A: je 0x5859f0d6
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 0
        push 0
        push 225h
        push 400h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 22 A7 10 00: call 0x586a97f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f0e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 450h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 450h]
        mov dword ptr [edx + 0db4h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0db4h]
        mov dword ptr [ebp - 454h], edx
        push 428h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 5C 6D EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0db4h]
        mov dword ptr [ebp - 45ch], ecx
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 59 EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x59
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        mov edx, dword ptr [ebp - 458h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 B3 CC FC FF: call 0x5856be10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        push 0a8h
        ; Exact mapped bytes E8 9C 1E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 2A: je 0x5859f1a8
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 0
        push 0
        push 14ah
        push 384h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 20 4E 17 00: call 0x58713fc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f1b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov ecx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 460h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 460h]
        mov dword ptr [edx + 0db8h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0db8h]
        mov dword ptr [ebp - 464h], edx
        push 45ah
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 8A 6C EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0db8h]
        mov dword ptr [ebp - 46ch], ecx
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 58 EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        mov edx, dword ptr [ebp - 468h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 E1 CB FC FF: call 0x5856be10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0db8h]
        mov dword ptr [ebp - 470h], ecx
        push 0
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 42 6D EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0cch
        ; Exact mapped bytes E8 AB 1D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x1d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 26: je 0x5859f295
        __asm _emit 0x74
        __asm _emit 0x26
        push 45ah
        push 28h
        push 320h
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 93 5A 11 00: call 0x586b4d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f29f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 474h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 474h]
        mov dword ptr [ecx + 0dc0h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0dc0h]
        mov dword ptr [ebp - 478h], ecx
        push 13fah
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 9D 6B EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dc0h]
        mov dword ptr [ebp - 47ch], eax
        push 0
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 8E 6C EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 1bch
        ; Exact mapped bytes E8 F7 1C 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1c
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 29: je 0x5859f34c
        __asm _emit 0x74
        __asm _emit 0x29
        push 61ch
        push 86h
        push 0ach
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 4C BD 06 00: call 0x5860b090
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f356
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 480h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 480h]
        mov dword ptr [eax + 0dc8h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dc8h]
        mov dword ptr [ebp - 484h], eax
        push 2b38h
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 E6 6A EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0dc8h]
        mov dword ptr [ebp - 488h], edx
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 D7 6B EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 40 1C 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 2D: je 0x5859f407
        __asm _emit 0x74
        __asm _emit 0x2d
        push 40h
        push 0
        push 61ch
        push 300h
        push 400h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 41 1C 18 00: call 0x58721040
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1c
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f411
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 48ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 48ch]
        mov dword ptr [edx + 0da8h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0da8h]
        mov dword ptr [ebp - 490h], edx
        push 48ch
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 2B 6A EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0da8h]
        mov dword ptr [ebp - 494h], ecx
        push 0
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 1C 6B EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 684h
        ; Exact mapped bytes E8 85 1B 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 24: je 0x5859f4b9
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 EF 2E 0D 00: call 0x586723a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f4c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov eax, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 498h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 498h]
        mov dword ptr [ecx + 0dcch], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0dcch]
        mov dword ptr [ebp - 49ch], ecx
        push 2f20h
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 79 69 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0dd8h], 0
        push 58h
        ; Exact mapped bytes E8 E6 1A 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 43: je 0x5859f577
        __asm _emit 0x74
        __asm _emit 0x43
        push 0ah
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 55 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4a0h], eax
        push 428h
        push 130h
        push 0d8h
        mov eax, dword ptr [ebp - 4a0h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 A1 72 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x72
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f581
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 4a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 100h]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4a4h]
        mov dword ptr [eax + edx], ecx
        push 58h
        ; Exact mapped bytes E8 46 1A 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 43: je 0x5859f617
        __asm _emit 0x74
        __asm _emit 0x43
        push 0bh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 54 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        push 428h
        push 130h
        push 0d8h
        mov edx, dword ptr [ebp - 4a8h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 01 72 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x72
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f621
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 4ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 100h]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4ach]
        mov dword ptr [edx + eax], ecx
        push 58h
        ; Exact mapped bytes E8 A6 19 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 43: je 0x5859f6b7
        __asm _emit 0x74
        __asm _emit 0x43
        push 0ch
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 54 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4b0h], eax
        push 428h
        push 200h
        push 228h
        mov edx, dword ptr [ebp - 4b0h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 61 71 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f6c1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 4b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 100h]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4b4h]
        mov dword ptr [ecx + eax], edx
        push 58h
        ; Exact mapped bytes E8 06 19 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 43: je 0x5859f757
        __asm _emit 0x74
        __asm _emit 0x43
        push 0dh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 53 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4b8h], eax
        push 428h
        push 200h
        push 228h
        mov eax, dword ptr [ebp - 4b8h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 C1 70 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f761
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 4bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4bch]
        mov dword ptr [edx + eax], ecx
        push 58h
        ; Exact mapped bytes E8 66 18 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 40: je 0x5859f7f4
        __asm _emit 0x74
        __asm _emit 0x40
        push 0eh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 53 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        push 428h
        push 226h
        push 78h
        mov edx, dword ptr [ebp - 4c0h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 24 70 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f7fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov ecx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 4c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 100h]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4c4h]
        mov dword ptr [ecx + eax], edx
        push 58h
        ; Exact mapped bytes E8 CA 17 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x17
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 40: je 0x5859f890
        __asm _emit 0x74
        __asm _emit 0x40
        push 0fh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 52 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        push 428h
        push 226h
        push 78h
        mov eax, dword ptr [ebp - 4c8h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 88 6F EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f89a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 4cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 100h]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4cch]
        mov dword ptr [edx + eax], ecx
        push 58h
        ; Exact mapped bytes E8 2E 17 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 43: je 0x5859f92f
        __asm _emit 0x74
        __asm _emit 0x43
        push 10h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 51 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4d0h], eax
        push 428h
        push 2b8h
        push 218h
        mov edx, dword ptr [ebp - 4d0h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 E9 6E EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f939
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 4d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 100h]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4d4h]
        mov dword ptr [edx + ecx], eax
        push 58h
        ; Exact mapped bytes E8 8E 16 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 43: je 0x5859f9cf
        __asm _emit 0x74
        __asm _emit 0x43
        push 11h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 51 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4d8h], eax
        push 428h
        push 2b8h
        push 218h
        mov ecx, dword ptr [ebp - 4d8h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 49 6E EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859f9d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 4dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 100h]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4dch]
        mov dword ptr [ecx + edx], eax
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859fa2a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 1
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp - 104h], 4
        ; Exact mapped bytes 0F 8D C4 00 00 00: jge 0x5859fafb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859fa52
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 114h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp - 114h], 2
        ; Exact mapped bytes 7D 32: jge 0x5859fa8d
        __asm _emit 0x7d
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        lea edx, [ecx + eax*8 + 0ddch]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 4e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes E8 06 65 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x5859fa43
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        lea ecx, [eax + edx*8 + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 4e4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 EF 5A 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5a
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        lea ecx, [eax + edx*8 + 0ddch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 4e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 4e8h]
        ; Exact mapped bytes E8 BB 5A 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5a
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x5859fa1b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 02 15 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x15
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 2A: je 0x5859fb42
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 0
        push 0
        push 0f0h
        push 154h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 C6 99 16 00: call 0x58709500
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859fb4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 4ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 4ech]
        mov dword ptr [eax + 0dd0h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dd0h]
        mov dword ptr [ebp - 4f0h], eax
        push 3ad8h
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 F0 62 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0e8h
        ; Exact mapped bytes E8 69 14 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 27: je 0x5859fbd8
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0
        push 336h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 40 E5 0C 00: call 0x5866e110
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859fbe2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov edx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 4f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 4f4h]
        mov dword ptr [eax + 0dd4h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0dd4h]
        mov dword ptr [ebp - 4f8h], eax
        push 2ad4h
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 5A 62 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D3 13 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 70: je 0x5859fcb7
        __asm _emit 0x74
        __asm _emit 0x70
        push 0
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 4E EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4fch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 500h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 4E EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 504h], eax
        push 121h
        push 20ch
        push 13fh
        mov edx, dword ptr [ebp - 4fch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 500h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 31 C0 F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859fcc1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 508h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 508h]
        mov dword ptr [ecx + 594h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 594h]
        mov dword ptr [ebp - 510h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 4D EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 50ch], eax
        push 7
        mov edx, dword ptr [ebp - 50ch]
        push edx
        mov ecx, dword ptr [ebp - 510h]
        ; Exact mapped bytes E8 04 CB F2 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 DD 12 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x12
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 6F: je 0x5859fdac
        __asm _emit 0x74
        __asm _emit 0x6f
        push 2
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 4D EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 518h], eax
        push 17h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 4D EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 51ch], eax
        push 121h
        push 194h
        push 27dh
        mov ecx, dword ptr [ebp - 514h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 3C BF F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859fdb6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 520h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 520h]
        mov dword ptr [eax + 590h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 528h], eax
        push 3
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 4C EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 524h], eax
        push 7
        mov ecx, dword ptr [ebp - 524h]
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 0F CA F2 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xca
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 EB 11 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 43: je 0x5859fe72
        __asm _emit 0x74
        __asm _emit 0x43
        push 14ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 4C EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 52ch], eax
        push 61ch
        push 11h
        push 0d4h
        mov edx, dword ptr [ebp - 52ch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 B6 24 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x24
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859fe7c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 530h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 530h]
        mov dword ptr [edx + 4d8h], eax
        push 54h
        ; Exact mapped bytes E8 5F 11 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 43: je 0x5859fefe
        __asm _emit 0x74
        __asm _emit 0x43
        push 149h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 4C EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        push 61ch
        push 11h
        push 0d4h
        mov ecx, dword ptr [ebp - 534h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 2A 24 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x24
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ff08
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 538h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 538h]
        mov dword ptr [ecx + 4dch], edx
        push 0ach
        ; Exact mapped bytes E8 D0 10 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 65: je 0x5859ffaf
        __asm _emit 0x74
        __asm _emit 0x65
        push 3ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 4B EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 53ch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 540h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 544h], ecx
        push 61ch
        push 46h
        push 0f9h
        mov edx, dword ptr [ebp - 53ch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 540h]
        push ecx
        mov edx, dword ptr [ebp - 544h]
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 39 BD F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ffb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov eax, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 548h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 548h]
        mov dword ptr [ecx + 4e0h], edx
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859fff6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 104h]
        add eax, 1
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 5
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x585a00c8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 FA 0F 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 46: je 0x585a0066
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        push 0c8h
        push 1f4h
        imul ecx, dword ptr [ebp - 104h], 0ah
        add ecx, 22h
        push ecx
        push 0e6h
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 52 23 EE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0070
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov ecx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 54ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 54ch]
        mov dword ptr [eax + edx*4 + 4e4h], ecx
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 4e4h]
        mov dword ptr [ebp - 550h], ecx
        push 61ch
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 BE 5D EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1F FF FF FF: jmp 0x5859ffe7
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 4dch]
        mov dword ptr [ebp - 554h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 C6 54 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x54
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 4dch]
        mov dword ptr [ebp - 558h], edx
        push 1
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 D7 5D EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 4d8h]
        mov dword ptr [ebp - 55ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes E8 B8 5D EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 4e0h]
        mov dword ptr [ebp - 560h], eax
        push 0
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes E8 49 5E EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585a0163
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 1
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp - 104h], 5
        ; Exact mapped bytes 7D 29: jge 0x585a0195
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 4e4h]
        mov dword ptr [ebp - 564h], ecx
        push 1
        mov ecx, dword ptr [ebp - 564h]
        ; Exact mapped bytes E8 4E 5D EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x585a0154
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 504h], 1
        push 54h
        ; Exact mapped bytes E8 58 0E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 43: je 0x585a0205
        __asm _emit 0x74
        __asm _emit 0x43
        push 3fh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 49 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x49
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 568h], eax
        push 680h
        push 225h
        push 148h
        mov eax, dword ptr [ebp - 568h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 23 21 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a020f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 56ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 56ch]
        mov dword ptr [eax + 4f8h], ecx
        push 54h
        ; Exact mapped bytes E8 CC 0D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 43: je 0x585a0291
        __asm _emit 0x74
        __asm _emit 0x43
        push 40h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 48 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 570h], eax
        push 61ch
        push 225h
        push 148h
        mov edx, dword ptr [ebp - 570h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 97 20 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a029b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov ecx, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 574h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 574h]
        mov dword ptr [edx + 4fch], eax
        push 98h
        ; Exact mapped bytes E8 3D 0D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 74 40: je 0x585a031d
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        push 2d5h
        push 212h
        push 271h
        push 153h
        push 22h
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 6B 5B 1B 00: call 0x58755e80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0327
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [ebp - 578h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 578h]
        mov dword ptr [ecx + 500h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 57ch], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 6a4h
        push edx
        mov ecx, dword ptr [ebp - 57ch]
        ; Exact mapped bytes E8 0F 5B EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 580h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 1D 52 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 584h], eax
        push 1
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 2E 5B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 588h], edx
        push 1
        mov ecx, dword ptr [ebp - 588h]
        ; Exact mapped bytes E8 0F 5B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 58ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 58ch]
        ; Exact mapped bytes E8 F0 5A EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 09 0C 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 70: je 0x585a0481
        __asm _emit 0x74
        __asm _emit 0x70
        push 2bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 46 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 590h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 594h], edx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 46 EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 598h], eax
        push 121h
        push 1fbh
        push 23bh
        mov eax, dword ptr [ebp - 590h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 594h]
        push edx
        mov eax, dword ptr [ebp - 598h]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 67 B8 F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a048b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov ecx, dword ptr [ebp - 224h]
        mov dword ptr [ebp - 59ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 59ch]
        mov dword ptr [edx + 58ch], eax
        push 58h
        ; Exact mapped bytes E8 50 0B 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 228h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 228h], 0
        ; Exact mapped bytes 74 55: je 0x585a051f
        __asm _emit 0x74
        __asm _emit 0x55
        push 2ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 45 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5a0h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 58ch]
        mov dword ptr [ebp - 5a4h], edx
        push 121h
        push 1fbh
        push 23bh
        mov eax, dword ptr [ebp - 5a0h]
        push eax
        mov ecx, dword ptr [ebp - 5a4h]
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 F9 62 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0529
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov edx, dword ptr [ebp - 22ch]
        mov dword ptr [ebp - 5a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 5a8h]
        mov dword ptr [eax + 598h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 598h]
        mov dword ptr [ebp - 5ach], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5ach]
        ; Exact mapped bytes E8 43 50 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x50
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 598h]
        mov dword ptr [ebp - 5b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 5b0h]
        ; Exact mapped bytes E8 B4 58 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 598h]
        mov dword ptr [ebp - 5b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes E8 A5 EF EF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 51 0A 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 74 7B: je 0x585a0644
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 58ch]
        ; Exact mapped bytes E8 D6 BA EE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 3
        mov dword ptr [ebp - 5b8h], eax
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 58ch]
        ; Exact mapped bytes E8 CC 63 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x63
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5bch], eax
        push 115h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 45 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5c0h], eax
        push 126h
        mov ecx, dword ptr [ebp - 5b8h]
        push ecx
        mov edx, dword ptr [ebp - 5bch]
        push edx
        mov eax, dword ptr [ebp - 5c0h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 E4 1C EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a064e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 5c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 5c4h]
        mov dword ptr [eax + 5d0h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5d0h]
        mov dword ptr [ebp - 5c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 5c8h]
        ; Exact mapped bytes E8 51 58 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5d0h]
        mov dword ptr [ebp - 5cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 5cch]
        ; Exact mapped bytes E8 FF 4E 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 4B 09 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 238h], 0
        ; Exact mapped bytes 74 78: je 0x585a0747
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 590h]
        ; Exact mapped bytes E8 D0 B9 EE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb9
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 3
        mov dword ptr [ebp - 5d0h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 590h]
        ; Exact mapped bytes E8 C6 62 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5d4h], eax
        push 13h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 44 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5d8h], eax
        push 126h
        mov edx, dword ptr [ebp - 5d0h]
        push edx
        mov eax, dword ptr [ebp - 5d4h]
        push eax
        mov ecx, dword ptr [ebp - 5d8h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 E1 1B EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0751
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [ebp - 5dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 5dch]
        mov dword ptr [ecx + 5c8h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5c8h]
        mov dword ptr [ebp - 5e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5e0h]
        ; Exact mapped bytes E8 4E 57 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x57
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5c8h]
        mov dword ptr [ebp - 5e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 5e4h]
        ; Exact mapped bytes E8 FC 4D 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4d
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5c8h]
        mov dword ptr [ebp - 5e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 5e8h]
        ; Exact mapped bytes E8 6D 56 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x56
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 29 08 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 240h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 240h], 0
        ; Exact mapped bytes 74 7B: je 0x585a086c
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 594h]
        ; Exact mapped bytes E8 AE B8 EE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 5
        mov dword ptr [ebp - 5ech], eax
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 594h]
        ; Exact mapped bytes E8 A4 61 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x61
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 5f0h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 42 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5f4h], eax
        push 126h
        mov edx, dword ptr [ebp - 5ech]
        push edx
        mov eax, dword ptr [ebp - 5f0h]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 BC 1A EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0876
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov eax, dword ptr [ebp - 244h]
        mov dword ptr [ebp - 5f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [ecx + 5cch], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5cch]
        mov dword ptr [ebp - 5fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5fch]
        ; Exact mapped bytes E8 29 56 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x56
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5cch]
        mov dword ptr [ebp - 600h], eax
        push 101h
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes E8 D7 4C 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4c
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5cch]
        mov dword ptr [ebp - 604h], edx
        push 0
        mov ecx, dword ptr [ebp - 604h]
        ; Exact mapped bytes E8 48 55 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 01 07 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 248h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 248h], 0
        ; Exact mapped bytes 74 68: je 0x585a0981
        __asm _emit 0x74
        __asm _emit 0x68
        push 3
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 41 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 608h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 60ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 610h], ecx
        push 427h
        push 0a8h
        push 9dh
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 60ch]
        push ecx
        mov edx, dword ptr [ebp - 610h]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 67 B3 F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a098b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov eax, dword ptr [ebp - 24ch]
        mov dword ptr [ebp - 614h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 614h]
        mov dword ptr [ecx + 59ch], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 59ch]
        mov dword ptr [ebp - 618h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 618h]
        ; Exact mapped bytes E8 E1 4B 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 59ch]
        mov dword ptr [ebp - 61ch], eax
        push 0
        mov ecx, dword ptr [ebp - 61ch]
        ; Exact mapped bytes E8 A2 55 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 60h], ecx
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 80h], 0ffffffffh
        xor edx, edx
        mov dword ptr [ebp - 7ch], edx
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 2ch], 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 48h], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 64h], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 64h], 34h
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 64h], 35h
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 64h], 35h
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 64h], 36h
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 64h], 34h
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 64h], 36h
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 80h], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 80h], 37h
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 80h], 38h
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 80h], 38h
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 80h], 39h
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 80h], 37h
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 80h], 39h
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 2ch], 0ffffffffh
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 2ch], 34h
        mov eax, 4
        shl eax, 1
        mov dword ptr [ebp + eax - 2ch], 35h
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 2ch], 35h
        mov eax, 4
        shl eax, 2
        mov dword ptr [ebp + eax - 2ch], 36h
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 2ch], 34h
        mov eax, 4
        imul ecx, eax, 6
        mov dword ptr [ebp + ecx - 2ch], 36h
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 48h], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 48h], 37h
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 48h], 38h
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 48h], 38h
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 48h], 39h
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 48h], 37h
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 48h], 39h
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585a0c31
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 1
        mov dword ptr [ebp - 10ch], ecx
        cmp dword ptr [ebp - 10ch], 7
        ; Exact mapped bytes 7D 36: jge 0x585a0c70
        __asm _emit 0x7d
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp + edx*4 - 2ch]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp + ecx*4 - 0d4h], eax
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp + edx*4 - 48h]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp + ecx*4 - 0f0h], eax
        ; Exact mapped bytes EB B2: jmp 0x585a0c22
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 0b8h
        ; Exact mapped bytes E8 8A 03 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 250h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 250h], 0
        ; Exact mapped bytes 74 30: je 0x585a0cc0
        __asm _emit 0x74
        __asm _emit 0x30
        movzx edx, word ptr [ebp - 108h]
        push edx
        push 224h
        push 79h
        push 1c0h
        push 15h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 B8 41 F1 FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0cca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [ebp - 620h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 620h]
        mov dword ptr [edx + 5a0h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5a0h]
        mov dword ptr [ebp - 624h], edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 64h]
        push ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 624h]
        ; Exact mapped bytes E8 CB 4A F1 FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5a0h]
        mov dword ptr [ebp - 628h], eax
        push 1
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 5C 8C FE FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 B5 02 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 258h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 258h], 0
        ; Exact mapped bytes 74 36: je 0x585a0d9b
        __asm _emit 0x74
        __asm _emit 0x36
        movzx ecx, word ptr [ebp - 108h]
        push ecx
        push 2c8h
        push 112h
        push 264h
        push 0aeh
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 DD 40 F1 FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0da5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 25ch], 0
        mov eax, dword ptr [ebp - 25ch]
        mov dword ptr [ebp - 62ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 62ch]
        mov dword ptr [ecx + 5a4h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5a4h]
        mov dword ptr [ebp - 630h], ecx
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 98 06 96 58: mov eax, dword ptr [0x58960698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 630h]
        ; Exact mapped bytes E8 F0 49 F1 FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5a4h]
        mov dword ptr [ebp - 634h], edx
        push 1
        mov ecx, dword ptr [ebp - 634h]
        ; Exact mapped bytes E8 81 8B FE FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 DA 01 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 260h], 0
        ; Exact mapped bytes 74 36: je 0x585a0e76
        __asm _emit 0x74
        __asm _emit 0x36
        movzx eax, word ptr [ebp - 108h]
        push eax
        push 0fch
        push 364h
        push 98h
        push 300h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 02 40 F1 FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0e80
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 264h], 0
        mov edx, dword ptr [ebp - 264h]
        mov dword ptr [ebp - 638h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 638h]
        mov dword ptr [eax + 5a8h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5a8h]
        mov dword ptr [ebp - 63ch], eax
        push -22h
        mov ecx, dword ptr [ebp - 63ch]
        ; Exact mapped bytes E8 7F 43 21 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5a8h]
        mov dword ptr [ebp - 640h], edx
        push -28h
        mov ecx, dword ptr [ebp - 640h]
        ; Exact mapped bytes E8 60 43 21 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5a8h]
        mov dword ptr [ebp - 644h], ecx
        lea edx, [ebp - 0d4h]
        push edx
        lea eax, [ebp - 0d4h]
        push eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 98 06 96 58: mov eax, dword ptr [0x58960698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 644h]
        ; Exact mapped bytes E8 D1 48 F1 FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x48
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5a8h]
        mov dword ptr [ebp - 648h], edx
        push 1
        mov ecx, dword ptr [ebp - 648h]
        ; Exact mapped bytes E8 62 8A FE FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 BB 00 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 268h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 268h], 0
        ; Exact mapped bytes 74 36: je 0x585a0f95
        __asm _emit 0x74
        __asm _emit 0x36
        movzx eax, word ptr [ebp - 108h]
        push eax
        push 198h
        push 40eh
        push 134h
        push 3aah
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 E3 3E F1 FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a0f9f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 26ch], 0
        mov edx, dword ptr [ebp - 26ch]
        mov dword ptr [ebp - 64ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 64ch]
        mov dword ptr [eax + 5ach], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5ach]
        mov dword ptr [ebp - 650h], eax
        lea ecx, [ebp - 0f0h]
        push ecx
        lea edx, [ebp - 0f0h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 98 06 96 58: mov edx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 650h]
        ; Exact mapped bytes E8 F0 47 F1 FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5ach]
        mov dword ptr [ebp - 654h], ecx
        push 1
        mov ecx, dword ptr [ebp - 654h]
        ; Exact mapped bytes E8 81 89 FE FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DD FF 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 270h], 0
        ; Exact mapped bytes 74 43: je 0x585a1080
        __asm _emit 0x74
        __asm _emit 0x43
        push 181h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 3A EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 658h], eax
        push 3e9h
        push 79h
        push 297h
        mov edx, dword ptr [ebp - 658h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 A8 12 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a108a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 274h], 0
        mov ecx, dword ptr [ebp - 274h]
        mov dword ptr [ebp - 65ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 65ch]
        mov dword ptr [edx + 5b0h], eax
        push 54h
        ; Exact mapped bytes E8 51 FF 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 278h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 278h], 0
        ; Exact mapped bytes 74 46: je 0x585a110f
        __asm _emit 0x74
        __asm _emit 0x46
        push 181h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 3A EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 660h], eax
        push 3e9h
        push 17bh
        push 350h
        mov ecx, dword ptr [ebp - 660h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 19 12 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1119
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 27ch], 0
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [ebp - 664h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 664h]
        mov dword ptr [ecx + 5b4h], edx
        push 54h
        ; Exact mapped bytes E8 C2 FE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 280h], 0
        ; Exact mapped bytes 74 43: je 0x585a119b
        __asm _emit 0x74
        __asm _emit 0x43
        push 182h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 39 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 754h], eax
        push 3e8h
        push 79h
        push 297h
        mov eax, dword ptr [ebp - 754h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 8D 11 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a11a5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 284h], 0
        mov edx, dword ptr [ebp - 284h]
        mov dword ptr [ebp - 66ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 66ch]
        mov dword ptr [eax + 5b8h], ecx
        push 54h
        ; Exact mapped bytes E8 36 FE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 288h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 288h], 0
        ; Exact mapped bytes 74 46: je 0x585a122a
        __asm _emit 0x74
        __asm _emit 0x46
        push 182h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 39 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 670h], eax
        push 3e8h
        push 17bh
        push 350h
        mov edx, dword ptr [ebp - 670h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 FE 10 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1234
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 28ch], 0
        mov ecx, dword ptr [ebp - 28ch]
        mov dword ptr [ebp - 674h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 674h]
        mov dword ptr [edx + 5bch], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5b0h]
        mov dword ptr [ebp - 678h], edx
        push 101h
        mov ecx, dword ptr [ebp - 678h]
        ; Exact mapped bytes E8 38 43 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5b0h]
        mov dword ptr [ebp - 67ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 67ch]
        ; Exact mapped bytes E8 49 4C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5b4h]
        mov dword ptr [ebp - 680h], eax
        push 101h
        mov ecx, dword ptr [ebp - 680h]
        ; Exact mapped bytes E8 F7 42 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5b4h]
        mov dword ptr [ebp - 684h], edx
        push 0
        mov ecx, dword ptr [ebp - 684h]
        ; Exact mapped bytes E8 08 4C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5b8h]
        mov dword ptr [ebp - 688h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 688h]
        ; Exact mapped bytes E8 B6 42 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5b8h]
        mov dword ptr [ebp - 68ch], eax
        push 0
        mov ecx, dword ptr [ebp - 68ch]
        ; Exact mapped bytes E8 C7 4B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5bch]
        mov dword ptr [ebp - 690h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 690h]
        ; Exact mapped bytes E8 75 42 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5bch]
        mov dword ptr [ebp - 694h], ecx
        push 0
        mov ecx, dword ptr [ebp - 694h]
        ; Exact mapped bytes E8 86 4B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 3dch], 2a8h
        mov ecx, 8
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 3d8h], 82h
        mov eax, 8
        shl eax, 0
        mov dword ptr [ebp + eax - 3dch], 361h
        mov ecx, 8
        shl ecx, 0
        mov dword ptr [ebp + ecx - 3d8h], 184h
        push 70h
        ; Exact mapped bytes E8 57 FC 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 290h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 290h], 0
        ; Exact mapped bytes 74 75: je 0x585a1438
        __asm _emit 0x74
        __asm _emit 0x75
        push 0
        push 0
        push 0ffffffh
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + eax - 3d8h]
        add ecx, 32h
        push ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + eax - 3dch]
        add ecx, 96h
        push ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + eax - 3d8h]
        push ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + eax - 3dch]
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 80 0F EE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1442
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 294h], 0
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [ebp - 698h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 698h]
        mov dword ptr [edx + 5c0h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5c0h]
        mov dword ptr [ebp - 69ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 69ch]
        ; Exact mapped bytes E8 2A 41 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x41
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5c0h]
        mov dword ptr [ebp - 6a0h], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 6a0h]
        ; Exact mapped bytes E8 68 4A EE FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5c0h]
        mov dword ptr [ebp - 6a8h], eax
        push 588ab848h
        ; Exact mapped bytes E8 2C 0B F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6a4h], eax
        mov ecx, dword ptr [ebp - 6a4h]
        push ecx
        mov ecx, dword ptr [ebp - 6a8h]
        ; Exact mapped bytes E8 C1 4B EE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5c0h]
        mov dword ptr [ebp - 6ach], eax
        push 0
        mov ecx, dword ptr [ebp - 6ach]
        ; Exact mapped bytes E8 E2 49 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x49
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5c0h]
        mov dword ptr [ebp - 6b0h], edx
        push 3eah
        mov ecx, dword ptr [ebp - 6b0h]
        ; Exact mapped bytes E8 60 49 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x49
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 DC FA 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 298h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 298h], 0
        ; Exact mapped bytes 74 74: je 0x585a15b2
        __asm _emit 0x74
        __asm _emit 0x74
        push 0
        push 0
        push 0ffffffh
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp + eax - 3d8h]
        add ecx, 32h
        push ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp + edx - 3dch]
        add eax, 96h
        push eax
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp + ecx - 3d8h]
        push edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp + eax - 3dch]
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 06 0E EE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a15bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 29ch], 0
        mov ecx, dword ptr [ebp - 29ch]
        mov dword ptr [ebp - 6b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 6b4h]
        mov dword ptr [edx + 5c4h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5c4h]
        mov dword ptr [ebp - 6b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6b8h]
        ; Exact mapped bytes E8 B0 3F 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3f
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5c4h]
        mov dword ptr [ebp - 6bch], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 6bch]
        ; Exact mapped bytes E8 EE 48 EE FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5c4h]
        mov dword ptr [ebp - 6c4h], eax
        push 588ab868h
        ; Exact mapped bytes E8 B2 09 F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6c0h], eax
        mov ecx, dword ptr [ebp - 6c0h]
        push ecx
        mov ecx, dword ptr [ebp - 6c4h]
        ; Exact mapped bytes E8 47 4A EE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4a
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5c4h]
        mov dword ptr [ebp - 6c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 6c8h]
        ; Exact mapped bytes E8 68 48 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5c4h]
        mov dword ptr [ebp - 6cch], edx
        push 3eah
        mov ecx, dword ptr [ebp - 6cch]
        ; Exact mapped bytes E8 E6 47 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 0b4h], eax
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 0a8h], eax
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 9ch], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 98h], ecx
        mov dword ptr [ebp - 94h], ecx
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 8ch], ecx
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 84h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 0b8h], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 0b8h], 6
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 0b8h], 3ah
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 0b8h], 3ah
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 0b8h], 3bh
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 0b8h], 6
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 0b8h], 3bh
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 9ch], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 9ch], 6
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 9ch], 3ah
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 9ch], 3ah
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 9ch], 3bh
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 9ch], 6
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 9ch], 3bh
        push 0b8h
        ; Exact mapped bytes E8 F8 F7 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2a0h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 2a0h], 0
        ; Exact mapped bytes 74 30: je 0x585a1852
        __asm _emit 0x74
        __asm _emit 0x30
        push 108h
        push 2b2h
        push 0a6h
        push 24eh
        push 42h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 26 36 F1 FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a185c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a4h], 0
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [ebp - 6d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 6d0h]
        mov dword ptr [edx + 5d4h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 5d4h]
        mov dword ptr [ebp - 6d4h], edx
        lea eax, [ebp - 9ch]
        push eax
        lea ecx, [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 6d4h]
        ; Exact mapped bytes E8 33 3F F1 FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 5d4h]
        mov dword ptr [ebp - 6d8h], eax
        push 1
        mov ecx, dword ptr [ebp - 6d8h]
        ; Exact mapped bytes E8 C4 80 FE FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 1D F7 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2a8h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 2a8h], 0
        ; Exact mapped bytes 74 44: je 0x585a1941
        __asm _emit 0x74
        __asm _emit 0x44
        push 33h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 31 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 6dch], eax
        push 0feh
        push 21ah
        push 0dh
        mov ecx, dword ptr [ebp - 6dch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 A7 A3 F2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a194b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ach], 0
        mov eax, dword ptr [ebp - 2ach]
        mov dword ptr [ebp - 6e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 6e0h]
        mov dword ptr [ecx + 5fch], edx
        push 70h
        ; Exact mapped bytes E8 90 F6 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf6
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b0h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 2b0h], 0
        ; Exact mapped bytes 74 4A: je 0x585a19d4
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 24fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 23bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 38h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 E4 09 EE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a19de
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b4h], 0
        mov eax, dword ptr [ebp - 2b4h]
        mov dword ptr [ebp - 6e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 6e4h]
        mov dword ptr [ecx + 5f8h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 5f8h]
        mov dword ptr [ebp - 6e8h], ecx
        push 2750h
        mov ecx, dword ptr [ebp - 6e8h]
        ; Exact mapped bytes E8 5E 44 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 5ch
        ; Exact mapped bytes E8 DA F5 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b8h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 2b8h], 0
        ; Exact mapped bytes 74 43: je 0x585a1a83
        __asm _emit 0x74
        __asm _emit 0x43
        push 29h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 30 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 6ech], eax
        push 3c4h
        push 165h
        push 1bbh
        mov edx, dword ptr [ebp - 6ech]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 95 66 22 00: call 0x587c8110
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 2bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1a8d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2bch], 0
        mov ecx, dword ptr [ebp - 2bch]
        mov dword ptr [ebp - 6f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 6f0h]
        mov dword ptr [edx + 47ch], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 47ch]
        mov dword ptr [ebp - 6f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 6f4h]
        ; Exact mapped bytes E8 DF 3A 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3a
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 47ch]
        mov dword ptr [ebp - 6f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 6f8h]
        ; Exact mapped bytes E8 50 43 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 47ch]
        mov dword ptr [ebp - 6fch], eax
        push 0
        mov ecx, dword ptr [ebp - 6fch]
        ; Exact mapped bytes E8 81 44 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 90h
        ; Exact mapped bytes E8 EA F4 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2c0h], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 2c0h], 0
        ; Exact mapped bytes 74 2A: je 0x585a1b5a
        __asm _emit 0x74
        __asm _emit 0x2a
        push 4ah
        push 1bch
        push 200h
        push 0
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        push 10h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 BE 55 F4 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1b64
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c4h], 0
        mov edx, dword ptr [ebp - 2c4h]
        mov dword ptr [ebp - 700h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 700h]
        mov dword ptr [edx + ecx + 0b8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 704h], ecx
        push 0
        mov ecx, dword ptr [ebp - 704h]
        ; Exact mapped bytes E8 89 42 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 90h
        ; Exact mapped bytes E8 42 F4 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2c8h], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 2c8h], 0
        ; Exact mapped bytes 74 2A: je 0x585a1c02
        __asm _emit 0x74
        __asm _emit 0x2a
        push 4fh
        push 1bch
        push 200h
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 16 55 F4 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1c0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2cch], 0
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [ebp - 708h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 708h]
        mov dword ptr [edx + ecx + 0b8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 70ch], eax
        push 0
        mov ecx, dword ptr [ebp - 70ch]
        ; Exact mapped bytes E8 E1 41 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 9D F3 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf3
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2d0h], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 2d0h], 0
        ; Exact mapped bytes 74 70: je 0x585a1ced
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 79 3A EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3a
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 89 85 E6 FE FF FF: mov word ptr [ebp - 0x11a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 710h], eax
        movzx ecx, word ptr [ebp - 11ah]
        push ecx
        push 258h
        push 0fffffce0h
        push 0
        mov edx, dword ptr [ebp - 710h]
        push edx
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 2B 4B EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1cf7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d4h], 0
        mov eax, dword ptr [ebp - 2d4h]
        mov dword ptr [ebp - 714h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 714h]
        mov dword ptr [ecx + 344h], edx
        push 90h
        ; Exact mapped bytes E8 E1 F2 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2d8h], eax
        mov byte ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 2d8h], 0
        ; Exact mapped bytes 74 72: je 0x585a1dab
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 BD 39 EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 0ah
        ; Exact mapped bytes 66 89 95 E4 FE FF FF: mov word ptr [ebp - 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 718h], edx
        movzx eax, word ptr [ebp - 11ch]
        push eax
        push 258h
        push 320h
        push 0
        mov ecx, dword ptr [ebp - 718h]
        push ecx
        push 20h
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 6D 53 F4 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x53
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1db5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2dch], 0
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ebp - 71ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 71ch]
        mov dword ptr [eax + 348h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 348h]
        mov dword ptr [ebp - 720h], eax
        push 0
        mov ecx, dword ptr [ebp - 720h]
        ; Exact mapped bytes E8 AA 3F EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 724h], edx
        push 0
        mov ecx, dword ptr [ebp - 724h]
        ; Exact mapped bytes E8 2B 40 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 348h]
        mov dword ptr [ebp - 728h], ecx
        push 0
        mov ecx, dword ptr [ebp - 728h]
        ; Exact mapped bytes E8 0C 37 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 C8 F1 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf1
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2e0h], eax
        mov byte ptr [ebp - 4], 3ch
        cmp dword ptr [ebp - 2e0h], 0
        ; Exact mapped bytes 74 28: je 0x585a1e7a
        __asm _emit 0x74
        __asm _emit 0x28
        push 50h
        push 1bch
        push 200h
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 9E 49 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x49
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1e84
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e4h], 0
        mov eax, dword ptr [ebp - 2e4h]
        mov dword ptr [ebp - 72ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 72ch]
        mov dword ptr [ecx + 0c0h], edx
        push 90h
        ; Exact mapped bytes E8 54 F1 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 3dh
        cmp dword ptr [ebp - 2e8h], 0
        ; Exact mapped bytes 74 2A: je 0x585a1ef0
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 1bch
        push 200h
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        push 10h
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 28 52 F4 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1efa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ech], 0
        mov ecx, dword ptr [ebp - 2ech]
        mov dword ptr [ebp - 730h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 730h]
        mov dword ptr [ecx + eax + 354h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 734h], eax
        push 0
        mov ecx, dword ptr [ebp - 734h]
        ; Exact mapped bytes E8 F3 3E EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 738h], ecx
        push 0
        mov ecx, dword ptr [ebp - 738h]
        ; Exact mapped bytes E8 1B 40 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 90h
        ; Exact mapped bytes E8 84 F0 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2f0h], eax
        mov byte ptr [ebp - 4], 3eh
        cmp dword ptr [ebp - 2f0h], 0
        ; Exact mapped bytes 74 2A: je 0x585a1fc0
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        push 1bch
        push 200h
        push 0
        mov edx, dword ptr [ebp - 100h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 58 51 F4 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a1fca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f4h], 0
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [ebp - 73ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 73ch]
        mov dword ptr [edx + ecx + 354h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 740h], eax
        push 0
        mov ecx, dword ptr [ebp - 740h]
        ; Exact mapped bytes E8 23 3E EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 744h], eax
        push 0
        mov ecx, dword ptr [ebp - 744h]
        ; Exact mapped bytes E8 4B 3F EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 B7 EF 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xef
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2f8h], eax
        mov byte ptr [ebp - 4], 3fh
        cmp dword ptr [ebp - 2f8h], 0
        ; Exact mapped bytes 74 37: je 0x585a209a
        __asm _emit 0x74
        __asm _emit 0x37
        push 40h
        push 258h
        push 0fffffce0h
        push 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 7E 47 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a20a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2fch], 0
        mov ecx, dword ptr [ebp - 2fch]
        mov dword ptr [ebp - 748h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 748h]
        mov dword ptr [edx + 45ch], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 45ch]
        mov dword ptr [ebp - 74ch], edx
        push 0
        mov ecx, dword ptr [ebp - 74ch]
        ; Exact mapped bytes E8 AB 3E EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585a2101
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 104h]
        add eax, 1
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 20h
        ; Exact mapped bytes 0F 8D D1 06 00 00: jge 0x585a27df
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 97 4B 01 00: call 0x585b6cb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + ecx*4 + 508h], eax
        push 58h
        ; Exact mapped bytes E8 D1 EE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xee
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 300h], eax
        mov byte ptr [ebp - 4], 40h
        cmp dword ptr [ebp - 300h], 0
        ; Exact mapped bytes 74 70: je 0x585a21b9
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 AD 35 EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 9
        ; Exact mapped bytes 66 89 95 E2 FE FF FF: mov word ptr [ebp - 0x11e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 750h], edx
        movzx eax, word ptr [ebp - 11eh]
        push eax
        push 258h
        push 0fffffce0h
        push 0
        mov ecx, dword ptr [ebp - 750h]
        push ecx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 5F 46 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a21c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 304h], 0
        mov edx, dword ptr [ebp - 304h]
        mov dword ptr [ebp - 840h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 840h]
        mov dword ptr [ecx + eax*4 + 2c4h], edx
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 758h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 758h]
        ; Exact mapped bytes E8 9B 33 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x33
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 75ch], edx
        push 0
        mov ecx, dword ptr [ebp - 75ch]
        ; Exact mapped bytes E8 05 3C EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 C1 ED 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 308h], eax
        mov byte ptr [ebp - 4], 41h
        cmp dword ptr [ebp - 308h], 0
        ; Exact mapped bytes 74 6E: je 0x585a22c7
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 9D 34 EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x34
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 14h
        ; Exact mapped bytes 66 89 95 E0 FE FF FF: mov word ptr [ebp - 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 760h], edx
        movzx eax, word ptr [ebp - 120h]
        push eax
        push 258h
        push 0fffffce0h
        push 0
        mov ecx, dword ptr [ebp - 760h]
        push ecx
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 51 45 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a22d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 30ch], 0
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ebp - 764h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 764h]
        mov dword ptr [ecx + eax*4 + 244h], edx
        push 5ch
        ; Exact mapped bytes E8 03 ED 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 310h], eax
        mov byte ptr [ebp - 4], 42h
        cmp dword ptr [ebp - 310h], 0
        ; Exact mapped bytes 74 55: je 0x585a236c
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 DF 33 EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 3eh
        ; Exact mapped bytes 66 89 95 DE FE FF FF: mov word ptr [ebp - 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 122h]
        push eax
        push 258h
        push 0fffffce0h
        push 0
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 AC 5D 22 00: call 0x587c8110
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5d
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2376
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 314h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [ebp - 768h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 768h]
        mov dword ptr [ecx + eax*4 + 0c4h], edx
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 76ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 76ch]
        ; Exact mapped bytes E8 E8 31 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 770h], edx
        push 0
        mov ecx, dword ptr [ebp - 770h]
        ; Exact mapped bytes E8 52 3A EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 774h], edx
        push 0
        mov ecx, dword ptr [ebp - 774h]
        ; Exact mapped bytes E8 7C 3B EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E8 EB 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 318h], eax
        mov byte ptr [ebp - 4], 43h
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 74 35: je 0x585a2467
        __asm _emit 0x74
        __asm _emit 0x35
        push 40h
        push 230h
        push 0fffffcafh
        push 0
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 C1 FE ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2471
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 31ch], 0
        mov eax, dword ptr [ebp - 31ch]
        mov dword ptr [ebp - 778h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 778h]
        mov dword ptr [edx + ecx*4 + 1c4h], eax
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 77ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 77ch]
        ; Exact mapped bytes E8 ED 30 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 780h], eax
        push 0
        mov ecx, dword ptr [ebp - 780h]
        ; Exact mapped bytes E8 57 39 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 13 EB 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 320h], eax
        mov byte ptr [ebp - 4], 44h
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 74 35: je 0x585a253c
        __asm _emit 0x74
        __asm _emit 0x35
        push 40h
        push 230h
        push 0fffffcafh
        push 0
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 EC FD ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2546
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 388h], 0
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ebp - 784h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 784h]
        mov dword ptr [eax + edx*4 + 144h], ecx
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 144h]
        mov dword ptr [ebp - 788h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 788h]
        ; Exact mapped bytes E8 18 30 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 144h]
        mov dword ptr [ebp - 78ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 78ch]
        ; Exact mapped bytes E8 82 38 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 3E EA 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 328h], eax
        mov byte ptr [ebp - 4], 45h
        cmp dword ptr [ebp - 328h], 0
        ; Exact mapped bytes 74 70: je 0x585a264c
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 1A 31 EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x31
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 9
        ; Exact mapped bytes 66 89 8D DC FE FF FF: mov word ptr [ebp - 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 790h], ecx
        movzx edx, word ptr [ebp - 124h]
        push edx
        push 258h
        push 0fffffce0h
        push 0
        mov eax, dword ptr [ebp - 790h]
        push eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 CC 41 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2656
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 32ch], 0
        mov ecx, dword ptr [ebp - 32ch]
        mov dword ptr [ebp - 794h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 794h]
        mov dword ptr [eax + edx*4 + 3dch], ecx
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 798h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 798h]
        ; Exact mapped bytes E8 08 2F 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 79ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 79ch]
        ; Exact mapped bytes E8 72 37 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 7a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 7a0h]
        ; Exact mapped bytes E8 9C 38 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 08 E9 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 330h], eax
        mov byte ptr [ebp - 4], 46h
        cmp dword ptr [ebp - 330h], 0
        ; Exact mapped bytes 74 6E: je 0x585a2780
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 E4 2F EF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 14h
        ; Exact mapped bytes 66 89 8D DA FE FF FF: mov word ptr [ebp - 0x126], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 7a4h], ecx
        movzx edx, word ptr [ebp - 126h]
        push edx
        push 258h
        push 0fffffce0h
        push 0
        mov eax, dword ptr [ebp - 7a4h]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 98 40 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a278a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 334h], 0
        mov ecx, dword ptr [ebp - 334h]
        mov dword ptr [ebp - 7a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 7a8h]
        mov dword ptr [eax + edx*4 + 35ch], ecx
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 35ch]
        mov dword ptr [ebp - 7ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ach]
        ; Exact mapped bytes E8 B7 37 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 13 F9 FF FF: jmp 0x585a20f2
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 1E E8 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 338h], eax
        mov byte ptr [ebp - 4], 47h
        cmp dword ptr [ebp - 338h], 0
        ; Exact mapped bytes 74 1D: je 0x585a2819
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 FF 3F EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2823
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 33ch], 0
        mov edx, dword ptr [ebp - 33ch]
        mov dword ptr [ebp - 7b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 7b0h]
        mov dword ptr [eax + 460h], ecx
        push 58h
        ; Exact mapped bytes E8 B8 E7 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 340h], eax
        mov byte ptr [ebp - 4], 48h
        cmp dword ptr [ebp - 340h], 0
        ; Exact mapped bytes 74 1D: je 0x585a287f
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 99 3F EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2889
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 344h], 0
        mov edx, dword ptr [ebp - 344h]
        mov dword ptr [ebp - 7b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 7b4h]
        mov dword ptr [eax + 464h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 464h]
        mov dword ptr [ebp - 7b8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 7b8h]
        ; Exact mapped bytes E8 E3 2C 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2c
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 2F E7 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 348h], eax
        mov byte ptr [ebp - 4], 49h
        cmp dword ptr [ebp - 348h], 0
        ; Exact mapped bytes 74 1D: je 0x585a2908
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 10 3F EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2912
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 34ch], 0
        mov ecx, dword ptr [ebp - 34ch]
        mov dword ptr [ebp - 7bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7bch]
        mov dword ptr [edx + 468h], eax
        push 58h
        ; Exact mapped bytes E8 C9 E6 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe6
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 350h], eax
        mov byte ptr [ebp - 4], 4ah
        cmp dword ptr [ebp - 350h], 0
        ; Exact mapped bytes 74 1D: je 0x585a296e
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 AA 3E EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2978
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 354h], 0
        mov ecx, dword ptr [ebp - 354h]
        mov dword ptr [ebp - 7c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7c0h]
        mov dword ptr [edx + 46ch], eax
        mov dword ptr [ebp - 104h], 1ch
        ; Exact mapped bytes EB 0F: jmp 0x585a29b5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 1
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp - 104h], 20h
        ; Exact mapped bytes 0F 8D BC 01 00 00: jge 0x585a2b7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3B E6 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 358h], eax
        mov byte ptr [ebp - 4], 4bh
        cmp dword ptr [ebp - 358h], 0
        ; Exact mapped bytes 74 5F: je 0x585a2a3e
        __asm _emit 0x74
        __asm _emit 0x5f
        push 0f4h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 21 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 7c4h], eax
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        mov dword ptr [ebp - 7c8h], ecx
        push 41ah
        push 258h
        push 0fffffce0h
        mov edx, dword ptr [ebp - 7c4h]
        push edx
        mov eax, dword ptr [ebp - 7c8h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 EA F8 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2a48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 35ch], 0
        mov ecx, dword ptr [ebp - 35ch]
        mov dword ptr [ebp - 7cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 7cch]
        mov dword ptr [eax + edx*4 + 578h], ecx
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 578h]
        mov dword ptr [ebp - 7d0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 7d0h]
        ; Exact mapped bytes E8 16 2B 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + edx*4 + 578h]
        mov dword ptr [ebp - 7d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 7d4h]
        ; Exact mapped bytes E8 80 33 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3C E5 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 360h], eax
        mov byte ptr [ebp - 4], 4ch
        cmp dword ptr [ebp - 360h], 0
        ; Exact mapped bytes 74 68: je 0x585a2b46
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 104h]
        lea eax, [edx + edx + 0a4h]
        push eax
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 20 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 7d8h], eax
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 7dch], eax
        push 44ch
        push 258h
        push 0fffffce0h
        mov ecx, dword ptr [ebp - 7d8h]
        push ecx
        mov edx, dword ptr [ebp - 7dch]
        push edx
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 E2 F7 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 364h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2b50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 364h], 0
        mov eax, dword ptr [ebp - 364h]
        mov dword ptr [ebp - 7e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7e0h]
        mov dword ptr [edx + ecx*4 + 568h], eax
        ; Exact mapped bytes E9 28 FE FF FF: jmp 0x585a29a6
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 27 41 01 00: call 0x585b6cb0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 588h], eax
        push 8
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 1E EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0a0h], eax
        push 3c8h
        ; Exact mapped bytes E8 4C E4 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe4
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7e4h], eax
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 7e4h]
        mov dword ptr [eax + 1028h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0a8h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + ecx + 0b0h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + eax + 0b0h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 480h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 484h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0d88h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0d8ch], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 0d90h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0d94h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0d98h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 0d9ch], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0da4h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0da0h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 0d84h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0d18h], 0ffffffffh
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 608h], 0ffffffceh
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 610h], 32h
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 60ch], 0ffffffe2h
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 614h], 1eh
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0e10h], 0
        or edx, 0ffffffffh
        mov eax, dword ptr [ebp - 100h]
        ; Exact mapped bytes 66 89 90 22 0E 00 00: mov word ptr [eax + 0xe22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0e24h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 474h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 478h], 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 100h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 5ch], 0
        mov dword ptr [ebp - 0fch], 1
        mov dword ptr [ebp - 0f8h], 0
        mov dword ptr [ebp - 0f4h], 0
        lea ecx, [ebp - 0fch]
        push ecx
        ; Exact mapped bytes FF 15 C0 40 89 58: call dword ptr [0x588940c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 600h], eax
        push 0c0c0c0h
        push 1
        push 3
        ; Exact mapped bytes FF 15 B8 40 89 58: call dword ptr [0x588940b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 604h], eax
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0e0ch], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 0e14h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 0e18h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 0e1ch], 0
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 77: je 0x585a2eda
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 68h], 0
        push 30h
        ; Exact mapped bytes E8 8D E1 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 368h], eax
        mov byte ptr [ebp - 4], 4dh
        cmp dword ptr [ebp - 368h], 0
        ; Exact mapped bytes 74 22: je 0x585a2eaf
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 59 03 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 36ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2eb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 36ch], 0
        mov ecx, dword ptr [ebp - 36ch]
        mov dword ptr [ebp - 7e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7e8h]
        mov dword ptr [edx + 6ch], eax
        ; Exact mapped bytes EB 3B: jmp 0x585a2f15
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 83 3D 58 20 96 58 00: cmp dword ptr [0x58962058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x585a2f08
        __asm _emit 0x74
        __asm _emit 0x18
        push 2
        ; Exact mapped bytes 8B 0D 58 20 96 58: mov ecx, dword ptr [0x58962058]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 1B EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 6ch], eax
        ; Exact mapped bytes EB 0D: jmp 0x585a2f15
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [eax + 6ch], 0
        push 30h
        ; Exact mapped bytes E8 E8 E0 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 370h], eax
        mov byte ptr [ebp - 4], 4eh
        cmp dword ptr [ebp - 370h], 0
        ; Exact mapped bytes 74 22: je 0x585a2f54
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 0bh
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 B4 02 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 374h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2f5e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 374h], 0
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [ebp - 7ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7ech]
        mov dword ptr [edx + 70h], eax
        push 30h
        ; Exact mapped bytes E8 80 E0 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 378h], eax
        mov byte ptr [ebp - 4], 4fh
        cmp dword ptr [ebp - 378h], 0
        ; Exact mapped bytes 74 22: je 0x585a2fbc
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 0ch
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 4C 02 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a2fc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 37ch], 0
        mov ecx, dword ptr [ebp - 37ch]
        mov dword ptr [ebp - 7f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7f0h]
        mov dword ptr [edx + 74h], eax
        push 30h
        ; Exact mapped bytes E8 18 E0 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 380h], eax
        mov byte ptr [ebp - 4], 50h
        cmp dword ptr [ebp - 380h], 0
        ; Exact mapped bytes 74 22: je 0x585a3024
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 0dh
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 E4 01 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a302e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 384h], 0
        mov ecx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 7f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7f4h]
        mov dword ptr [edx + 78h], eax
        push 30h
        ; Exact mapped bytes E8 B0 DF 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3f8h], eax
        mov byte ptr [ebp - 4], 51h
        cmp dword ptr [ebp - 3f8h], 0
        ; Exact mapped bytes 74 22: je 0x585a308c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 0eh
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 7C 01 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3096
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 38ch], 0
        mov ecx, dword ptr [ebp - 38ch]
        mov dword ptr [ebp - 7f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 7f8h]
        mov dword ptr [edx + 7ch], eax
        push 30h
        ; Exact mapped bytes E8 48 DF 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 390h], eax
        mov byte ptr [ebp - 4], 52h
        cmp dword ptr [ebp - 390h], 0
        ; Exact mapped bytes 74 22: je 0x585a30f4
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        shl ecx, 4
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 14 01 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a30fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 394h], 0
        mov eax, dword ptr [ebp - 394h]
        mov dword ptr [ebp - 7fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 7fch]
        mov dword ptr [ecx + 80h], edx
        push 30h
        ; Exact mapped bytes E8 DD DE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 398h], eax
        mov byte ptr [ebp - 4], 53h
        cmp dword ptr [ebp - 398h], 0
        ; Exact mapped bytes 74 22: je 0x585a315f
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 4
        imul ecx, eax, 11h
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 A9 00 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3169
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 39ch], 0
        mov eax, dword ptr [ebp - 39ch]
        mov dword ptr [ebp - 800h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 800h]
        mov dword ptr [ecx + 84h], edx
        push 30h
        ; Exact mapped bytes E8 72 DE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3a0h], eax
        mov byte ptr [ebp - 4], 54h
        cmp dword ptr [ebp - 3a0h], 0
        ; Exact mapped bytes 74 22: je 0x585a31ca
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 4
        imul ecx, eax, 12h
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 3E 00 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 3a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a31d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a4h], 0
        mov eax, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 804h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 804h]
        mov dword ptr [ecx + 88h], edx
        push 30h
        ; Exact mapped bytes E8 07 DE 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3a8h], eax
        mov byte ptr [ebp - 4], 55h
        cmp dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes 74 22: je 0x585a3235
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 4
        imul ecx, eax, 13h
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 D3 FF 21 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [ebp - 3ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a323f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3ach], 0
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [ebp - 808h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 808h]
        mov dword ptr [ecx + 8ch], edx
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585a327c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 104h]
        add eax, 1
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 4
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x585a3310
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 74 DD 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdd
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3b0h], eax
        mov byte ptr [ebp - 4], 56h
        cmp dword ptr [ebp - 3b0h], 0
        ; Exact mapped bytes 74 32: je 0x585a32d8
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 17 EE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 80ch], eax
        mov edx, dword ptr [ebp - 80ch]
        push edx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 50 A7 FC FF: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a32e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b4h], 0
        mov eax, dword ptr [ebp - 3b4h]
        mov dword ptr [ebp - 810h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp - 810h]
        mov dword ptr [edx + ecx*4 + 90h], eax
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x585a326d
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 814h], 80h
        mov dword ptr [ebp - 3bch], 0a9h
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 118h], 588ab888h
        lea ecx, [ebp - 110h]
        push ecx
        push 0f003fh
        push 0
        mov edx, dword ptr [ebp - 118h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x585a338d
        __asm _emit 0x74
        __asm _emit 0x31
        lea eax, [ebp - 3b8h]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588ab1b3h
        push 0
        mov edx, dword ptr [ebp - 118h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea eax, [ebp - 814h]
        push eax
        lea ecx, [ebp - 3bch]
        push ecx
        lea edx, [ebp - 3b8h]
        push edx
        push 0
        push 588ab8b0h
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x585a340a
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp - 3b8h]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588ab8b8h
        push 0
        mov eax, dword ptr [ebp - 118h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea ecx, [ebp - 3bch]
        push ecx
        push 4
        push 0
        push 588ab8c0h
        mov edx, dword ptr [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 1048h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [edx + 102ch], 0
        push 6ch
        ; Exact mapped bytes E8 C6 DB 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdb
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3c0h], eax
        mov byte ptr [ebp - 4], 57h
        cmp dword ptr [ebp - 3c0h], 0
        ; Exact mapped bytes 74 13: je 0x585a3467
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 F1 11 F4 FF: call 0x584e4650
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 3c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3471
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c4h], 0
        mov eax, dword ptr [ebp - 3c4h]
        mov dword ptr [ebp - 818h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp - 818h]
        mov dword ptr [ecx + 0ach], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 100h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 9B DB 28 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdb
        __asm _emit 0x28
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
