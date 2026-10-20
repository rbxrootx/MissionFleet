// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C310 .. +0x38B bytes.
extern "C" __declspec(naked) void FUN_0041c310_0041C310() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1324h
        ; Exact mapped bytes E8 83 9C 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1324h]
        mov ecx, 4c9h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 58 51 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 50 51 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea eax, [ebp - 11c0h]
        push eax
        ; Exact mapped bytes E8 69 95 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        push 0
        lea ecx, [ebp - 914h]
        push ecx
        ; Exact mapped bytes E8 53 95 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0ech
        push 0
        lea edx, [ebp - 12ach]
        push edx
        ; Exact mapped bytes E8 3D 95 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 12b0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 12b4h], eax
        mov ecx, dword ptr [ebp - 12b0h]
        mov dword ptr [ebp - 12c0h], ecx
        lea edx, [ebp - 12c0h]
        push edx
        lea eax, [ebp - 12c8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 5F 4F FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 12b4h]
        mov dword ptr [ebp - 12cch], eax
        lea ecx, [ebp - 12cch]
        push ecx
        lea edx, [ebp - 12d4h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 2C 4F FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 12dch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 4B 56 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 01 55 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x41c45a
        __asm _emit 0x75
        __asm _emit 0x2b
        lea edx, [ebp - 12e4h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 20 56 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D6 54 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x41c478
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 DC 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 0D 02 00 00: jmp 0x41c685
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 57 4C FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 12b8h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 46 4C FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 12bch], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 914h]
        push ecx
        mov edx, dword ptr [ebp - 12b8h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 F1 51 FE FF: call 0x4016ae
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x41c66c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 904h]
        mov eax, dword ptr [ebp - 910h]
        mov dword ptr [ebp + edx*8 - 900h], eax
        mov ecx, dword ptr [ebp - 904h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp + ecx*8 - 8fch], eax
        mov ecx, dword ptr [ebp - 904h]
        add ecx, 1
        mov dword ptr [ebp - 904h], ecx
        sub esp, 900h
        mov ecx, 240h
        lea esi, [ebp - 914h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [ebp - 12ach]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 8E 4F FE FF: call 0x4014b5
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 900h
        lea edx, [ebp - 914h]
        push edx
        mov eax, dword ptr [ebp - 12b8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 C1 50 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x41c651
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        lea edx, [ebp - 119ch]
        push edx
        mov eax, dword ptr [ebp - 12bch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 2D 4D FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x41c5e1
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 12b0h]
        mov dword ptr [ebp - 1194h], edx
        mov eax, dword ptr [ebp - 854h]
        mov dword ptr [ebp - 1154h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 854h]
        push edx
        mov eax, dword ptr [ebp - 12b0h]
        push eax
        lea ecx, [ebp - 940h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 68 53 FE FF: call 0x40191f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 854h]
        push edx
        mov eax, dword ptr [ebp - 12b0h]
        push eax
        mov ecx, dword ptr [ebp - 12bch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 35 52 FE FF: call 0x401816
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        push 888h
        lea ecx, [ebp - 119ch]
        push ecx
        mov edx, dword ptr [ebp - 12bch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 07 50 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x41c636
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0ech
        lea ecx, [ebp - 12ach]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 DA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x41c685
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 DA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x41c685
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA DA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x41c685
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F DA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 1324h
        cmp ebp, esp
        ; Exact mapped bytes E8 5B 87 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
