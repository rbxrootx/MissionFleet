// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CC10 .. +0x3B9 bytes.
extern "C" __declspec(naked) void FUN_0041cc10_0041CC10() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 123ch
        ; Exact mapped bytes E8 83 93 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 123ch]
        mov ecx, 48fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 46 48 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3E 48 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 11e4h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 B3 46 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 11ech]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 8F 46 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 11f4h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 AE 4D FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 64 4C FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x41ccf7
        __asm _emit 0x75
        __asm _emit 0x2b
        lea eax, [ebp - 11fch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 83 4D FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 39 4C FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x41cd15
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 D4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9E 02 00 00: jmp 0x41cfb3
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA 43 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 11a8h], edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A9 43 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 11ach], eax
        push 28h
        push 0
        lea ecx, [ebp - 11d4h]
        push ecx
        ; Exact mapped bytes E8 79 8B 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 11a8h], -1
        ; Exact mapped bytes 0F 84 43 02 00 00: je 0x41cf9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        lea edx, [ebp - 91ch]
        push edx
        mov eax, dword ptr [ebp - 11a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 26 45 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 01 00 00: je 0x41cf7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11d8h], 0
        mov dword ptr [ebp - 11dch], 0
        ; Exact mapped bytes EB 0F: jmp 0x41cda5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 11dch]
        add edx, 1
        mov dword ptr [ebp - 11dch], edx
        mov eax, dword ptr [ebp - 11dch]
        cmp eax, dword ptr [ebp - 90ch]
        ; Exact mapped bytes 7D 7E: jge 0x41ce31
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 11dch]
        mov edx, dword ptr [ebp + ecx*8 - 904h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 24: jne 0x41cde9
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 11dch]
        mov dword ptr [ebp + eax*8 - 904h], 0
        mov ecx, dword ptr [ebp - 11dch]
        mov dword ptr [ebp + ecx*8 - 908h], 0
        ; Exact mapped bytes EB 48: jmp 0x41ce31
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 11d8h]
        mov eax, dword ptr [ebp - 11dch]
        mov ecx, dword ptr [ebp + eax*8 - 904h]
        mov dword ptr [ebp + edx*8 - 904h], ecx
        mov edx, dword ptr [ebp - 11d8h]
        mov eax, dword ptr [ebp - 11dch]
        mov ecx, dword ptr [ebp + eax*8 - 908h]
        mov dword ptr [ebp + edx*8 - 908h], ecx
        mov edx, dword ptr [ebp - 11d8h]
        add edx, 1
        mov dword ptr [ebp - 11d8h], edx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x41cd96
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11d8h]
        mov dword ptr [ebp + eax*8 - 904h], 0
        mov ecx, dword ptr [ebp - 11d8h]
        mov dword ptr [ebp + ecx*8 - 908h], 0
        mov edx, dword ptr [ebp - 90ch]
        sub edx, 1
        mov dword ptr [ebp - 90ch], edx
        push 900h
        lea eax, [ebp - 91ch]
        push eax
        mov ecx, dword ptr [ebp - 11a8h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 86 47 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push 888h
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 11ach]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 FA 43 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x41cf64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 119ch], 0
        mov dword ptr [ebp - 115ch], 0
        push 888h
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 11ach]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 28 47 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push 888h
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 11ach]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 9C 43 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 0
        lea ecx, [ebp - 948h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 FD 49 FE FF: call 0x40191f
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 11ach]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c88h]
        ; Exact mapped bytes E8 D4 48 FE FF: call 0x401816
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 80020f0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 D1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x41cfb3
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 D1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x41cfb3
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C D1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x41cfb3
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 D1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 123ch
        cmp ebp, esp
        ; Exact mapped bytes E8 2D 7E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7e
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
