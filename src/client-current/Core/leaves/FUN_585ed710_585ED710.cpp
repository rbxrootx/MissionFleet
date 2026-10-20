// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585ED710 .. +0x8D0 bytes.
extern "C" __declspec(naked) void FUN_585ed710_585ED710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c4h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 09 05 00 00: je 0x585edc2f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ed73f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x585ed762
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 10da4h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 87 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ed736
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ed774
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 1D: jge 0x585ed797
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10dach]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4C 87 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ed76b
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ed7a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1D: jge 0x585ed7cc
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10dc0h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 17 87 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ed7a0
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10dd0h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FE 86 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 74 69: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 5A: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 4B: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 5
        ; Exact mapped bytes 74 3C: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 2D: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 10h
        ; Exact mapped bytes 74 1E: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 74 0F: je 0x585ed85b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 2
        ; Exact mapped bytes 75 62: jne 0x585ed8bd
        __asm _emit 0x75
        __asm _emit 0x62
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ed86d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x585ed890
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21e30h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 53 86 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ed864
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e38h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3A 86 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e3ch]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 24 86 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 21ea4h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x585ed954
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 3
        ; Exact mapped bytes 74 6B: je 0x585ed94f
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 8
        ; Exact mapped bytes 74 57: je 0x585ed94f
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 9
        ; Exact mapped bytes 74 43: je 0x585ed94f
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e84h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BE 85 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e98h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A8 85 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e9ch]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 92 85 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D6 02 00 00: jmp 0x585edc2a
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 21ea4h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x585eda9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 3
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x585eda95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x585eda95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 98 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 9
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x585eda95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1B 85 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585ed9d8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1D: jge 0x585ed9fb
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21e88h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E8 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ed9cf
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585eda0d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1D: jge 0x585eda30
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21e90h]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B3 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585eda04
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9A 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e9ch]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 84 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21each]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6E 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21eb0h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 58 84 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21ea0h], 1
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x585edc2a
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 21ea4h]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x585edb65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 96 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 3
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x585edb60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 96 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x585edb60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 96 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 9
        ; Exact mapped bytes 74 6F: je 0x585edb60
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D9 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e98h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C3 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e9ch]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AD 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21each]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 97 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb0h]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 81 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x585edc2a
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 21ea4h]
        test edx, edx
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x585edc2a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 96 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 3
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x585edc2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 96 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x585edc2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 95 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x95
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 9
        ; Exact mapped bytes 74 6F: je 0x585edc2a
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0F 83 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e98h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F9 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e9ch]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 E3 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21each]
        mov dword ptr [ebp - 78h], ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CD 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb0h]
        mov dword ptr [ebp - 7ch], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 B7 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AB 03 00 00: jmp 0x585edfda
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585edc48
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x585edc6b
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10da4h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 78 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585edc3f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585edc7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 23: jge 0x585edca6
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10dach]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3D 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585edc74
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585edcb8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 23: jge 0x585edce1
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 10dc0h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 02 82 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585edcaf
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10dd0h]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E3 81 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 21ea4h]
        cmp eax, 2
        ; Exact mapped bytes 75 38: jne 0x585edd45
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 3
        ; Exact mapped bytes 74 1F: je 0x585edd40
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 8
        ; Exact mapped bytes 74 0B: je 0x585edd40
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 02 00 00: jmp 0x585edfda
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 21ea4h]
        cmp edx, 1
        ; Exact mapped bytes 75 7A: jne 0x585eddce
        __asm _emit 0x75
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 3
        ; Exact mapped bytes 74 61: je 0x585eddc9
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 8
        ; Exact mapped bytes 74 4D: je 0x585eddc9
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 94 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 9
        ; Exact mapped bytes 74 39: je 0x585eddc9
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21each]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 34 81 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb0h]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 18 81 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0C 02 00 00: jmp 0x585edfda
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 21ea4h]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x585eded7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 93 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 3
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x585eded2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 93 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x585eded2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 93 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 9
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585eded2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 9B 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e84h]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 7F 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 63 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e9ch]
        mov dword ptr [ebp - 0a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 47 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21each]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 2B 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21eb0h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 0F 80 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x585edfda
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 21ea4h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x585edfda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 92 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 36h]
        cmp edx, 3
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x585edfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 92 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 36h]
        cmp eax, 8
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x585edfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 92 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 36h]
        cmp ecx, 9
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585edfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e84h]
        mov dword ptr [ebp - 0b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 93 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e84h]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 77 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e98h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 5B 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e9ch]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 3F 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21each]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 23 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21eb0h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 07 7F E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
