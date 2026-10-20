// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571FC5 .. +0x2A1 bytes.
extern "C" __declspec(naked) void FUN_00571fc5_00571FC5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 18h], eax
        push 399h
        push 5d0930h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 5A 91 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0D E1 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 39ch
        push 5d0930h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 3C 91 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        push 58aaa8h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 90 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572049
        __asm _emit 0x75
        __asm _emit 0x14
        push 39dh
        push 5d0930h
        ; Exact mapped bytes E8 BC 29 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572049
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x572024
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x572069
        __asm _emit 0x75
        __asm _emit 0x14
        push 39eh
        push 5d0930h
        ; Exact mapped bytes E8 9C 29 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572069
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x57204f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 15: je 0x572099
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 2B: je 0x5720b5
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 28h], 3
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x5721a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x572247
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x572247
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 30h
        ; Exact mapped bytes E8 CC EE FB FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5720c9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x572247
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x5720e9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x572247
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 3
        ; Exact mapped bytes 0F 87 95 00 00 00: ja 0x5721a3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 24 95 66 22 57 00: jmp dword ptr [edx*4 + 0x572266]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0x22
        __asm _emit 0x57
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 30h
        ; Exact mapped bytes E8 87 EE FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x572135
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x57216b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6C 76 F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 58 EE F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        push 5d0aa0h
        ; Exact mapped bytes FF 15 40 2A 5E 00: call dword ptr [0x5e2a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x5721a3
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x57219d
        __asm _emit 0x74
        __asm _emit 0x14
        push 3c0h
        push 5d0930h
        ; Exact mapped bytes E8 68 28 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57219d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x572180
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x572247
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 24h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        lea ecx, [ebp - 20h]
        push ecx
        push 2
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x5721f4
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 14: je 0x5721f4
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 3C 2A 5E 00: call dword ptr [0x5e2a3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x572209
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x572209
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 13: je 0x572222
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 24h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x572209
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 13: je 0x572241
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 20h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x572228
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx]
        neg eax
        sbb eax, eax
        and eax, 7fffbffbh
        add eax, 80004005h
        lea esp, [ebp - 40h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
