// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C780 .. +0x3A6 bytes.
extern "C" __declspec(naked) void FUN_0041c780_0041C780() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1214h
        ; Exact mapped bytes E8 13 98 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1214h]
        mov ecx, 485h
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
        ; Exact mapped bytes E8 D6 4C FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CE 4C FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 11bch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 43 4B FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 11c4h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 1F 4B FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 11cch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 3E 52 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F4 50 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x41c867
        __asm _emit 0x75
        __asm _emit 0x2b
        lea eax, [ebp - 11d4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 13 52 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 C9 50 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x41c885
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 D8 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 8B 02 00 00: jmp 0x41cb10
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4A 48 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 11a8h], edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 39 48 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 11ach], eax
        cmp dword ptr [ebp - 11a8h], -1
        ; Exact mapped bytes 0F 84 43 02 00 00: je 0x41caf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        lea ecx, [ebp - 91ch]
        push ecx
        mov edx, dword ptr [ebp - 11a8h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 C9 49 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 01 00 00: je 0x41cadc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11b0h], 0
        mov dword ptr [ebp - 11b4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41c902
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 11b4h]
        add ecx, 1
        mov dword ptr [ebp - 11b4h], ecx
        mov edx, dword ptr [ebp - 11b4h]
        cmp edx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes 7D 7E: jge 0x41c98e
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 11b4h]
        mov ecx, dword ptr [ebp + eax*8 - 904h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 24: jne 0x41c946
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 11b4h]
        mov dword ptr [ebp + edx*8 - 904h], 0
        mov eax, dword ptr [ebp - 11b4h]
        mov dword ptr [ebp + eax*8 - 908h], 0
        ; Exact mapped bytes EB 43: jmp 0x41c989
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 11b0h]
        mov edx, dword ptr [ebp - 11b4h]
        mov eax, dword ptr [ebp + edx*8 - 904h]
        mov dword ptr [ebp + ecx*8 - 904h], eax
        mov ecx, dword ptr [ebp - 11b0h]
        mov edx, dword ptr [ebp - 11b4h]
        mov eax, dword ptr [ebp + edx*8 - 908h]
        mov dword ptr [ebp + ecx*8 - 908h], eax
        mov ecx, dword ptr [ebp - 11b0h]
        add ecx, 1
        mov dword ptr [ebp - 11b0h], ecx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x41c8f3
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 11b0h]
        mov dword ptr [ebp + edx*8 - 904h], 0
        mov eax, dword ptr [ebp - 11b0h]
        mov dword ptr [ebp + eax*8 - 908h], 0
        mov ecx, dword ptr [ebp - 90ch]
        sub ecx, 1
        mov dword ptr [ebp - 90ch], ecx
        push 900h
        lea edx, [ebp - 91ch]
        push edx
        mov eax, dword ptr [ebp - 11a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 29 4C FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 888h
        lea edx, [ebp - 11a4h]
        push edx
        mov eax, dword ptr [ebp - 11ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 9D 48 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x41cac1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 119ch], 0
        mov dword ptr [ebp - 115ch], 0
        push 888h
        lea edx, [ebp - 11a4h]
        push edx
        mov eax, dword ptr [ebp - 11ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 CB 4B FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 888h
        lea edx, [ebp - 11a4h]
        push edx
        mov eax, dword ptr [ebp - 11ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 3F 48 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 0
        lea eax, [ebp - 948h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c88h]
        ; Exact mapped bytes E8 A0 4E FE FF: call 0x40191f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 11ach]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 77 4D FE FF: call 0x401816
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 D6 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x41cb10
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A D6 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x41cb10
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F D6 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x41cb10
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 D6 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 1214h
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 82 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x82
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
