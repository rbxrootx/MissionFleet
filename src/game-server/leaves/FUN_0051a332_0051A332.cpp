// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A332 .. +0x2B1 bytes.
extern "C" __declspec(naked) void FUN_0051a332_0051A332() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 50h], 1
        ; Exact mapped bytes 74 0C: je 0x51a353
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4B FF FF FF: call 0x51a29a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51a358
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 84 02 00 00: jmp 0x51a5dc
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        push 367h
        push 367h
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51a37e
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 5E 02 00 00: jmp 0x51a5dc
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 1D: je 0x51a3ad
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 50h], 2
        ; Exact mapped bytes 74 14: je 0x51a3ad
        __asm _emit 0x74
        __asm _emit 0x14
        push 87h
        push 5ca2b4h
        ; Exact mapped bytes E8 58 A6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a3ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x51a387
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 50h], 1
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 54: je 0x51a417
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 4B: je 0x51a417
        __asm _emit 0x74
        __asm _emit 0x4b
        push 1
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x51a417
        __asm _emit 0x75
        __asm _emit 0x34
        push 5ca2c0h
        push 5ca300h
        ; Exact mapped bytes E8 23 58 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x51a5dc
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 23: jne 0x51a440
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0e145h
        push 111h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FC 17 02 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 50h], 2
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x51a5dc
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 50h], 1
        ; Exact mapped bytes 74 14: je 0x51a45d
        __asm _emit 0x74
        __asm _emit 0x14
        push 9eh
        push 5ca2b4h
        ; Exact mapped bytes E8 A8 A5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a45d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x51a440
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 0e002h
        push 362h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 62 17 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 07: jne 0x51a487
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0e001h
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 39 01 00 00: call 0x51a5e3
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes E8 4A B0 01 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x51a548
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x51a514
        __asm _emit 0x74
        __asm _emit 0x38
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 68 03 00 00: call 0x51a854
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x51a4f2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 56: jmp 0x51a548
        __asm _emit 0xeb
        __asm _emit 0x56
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x51a50c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b4h
        push 5ca2b4h
        ; Exact mapped bytes E8 F9 A4 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a50c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51a4f2
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 2F: jmp 0x51a543
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x51a543
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes FF 15 38 25 5E 00: call dword ptr [0x5e2538]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x51a4b9
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 84 25 02 00: call 0x53cae4
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        push 362h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 60 16 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 13: je 0x51a595
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 30: je 0x51a5cb
        __asm _emit 0x74
        __asm _emit 0x30
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 16: jne 0x51a5b7
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 24 16 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x51a5cb
        __asm _emit 0xeb
        __asm _emit 0x14
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 51 16 02 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
