// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EEB5E .. +0x222 bytes.
extern "C" __declspec(naked) void FUN_004eeb5e_004EEB5E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 14: jne 0x4eeb87
        __asm _emit 0x75
        __asm _emit 0x14
        push 18ah
        push 677c28h
        ; Exact mapped bytes E8 BE A1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eeb87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4eeb6a
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 32 36 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 25 38 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 69 CF 03 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 FA 37 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4ch]
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, eax
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 48h]
        sub edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 48h]
        add eax, edx
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, eax
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 48h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 4ch]
        neg eax
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 52 39 04 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 06: jne 0x4eec2c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 14: je 0x4eec40
        __asm _emit 0x74
        __asm _emit 0x14
        push 196h
        push 677c28h
        ; Exact mapped bytes E8 05 A1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eec40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4eec20
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 75 35 04 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x4eec88
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes 7F 06: jg 0x4eec77
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 7F 06: jg 0x4eec88
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        push 1
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 30 37 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 38h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 C0 38 04 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 06: jne 0x4eecbe
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 14: je 0x4eecd2
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a3h
        push 677c28h
        ; Exact mapped bytes E8 73 A0 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eecd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4eecb2
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x4eed00
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes 7F 06: jg 0x4eecef
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 7F 06: jg 0x4eed00
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 BF 34 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 62 3D FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 1afh
        push 677c28h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 3A B5 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 94 36 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D8 CD 03 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 9A 35 04 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        sub edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        push 16h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A9 79 FE FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
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
