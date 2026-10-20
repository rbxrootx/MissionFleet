// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5740 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_004b5740_004B5740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4b575d
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3B FE FF FF: call 0x4b5590
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x4b5926
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 13: jne 0x4b5776
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C4 01 00 00: call 0x4b5930
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x4b5926
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 0ch], -20h
        ; Exact mapped bytes 0F 87 72 01 00 00: ja 0x4b58f9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 62 FA FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 16 04 00 00: call 0x4b5bb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x4b58bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 05 90 1A 5D 00: cmp eax, dword ptr [0x5d1a90]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 77 7B: ja 0x4b5830
        __asm _emit 0x77
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 BA 12 00 00: call 0x4b6a80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4b57d5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 5B: jmp 0x4b5830
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 62 0A 00 00: call 0x4b6240
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 46: je 0x4b5830
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x4b5806
        __asm _emit 0x73
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x4b580c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 03 38 FF FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 43 04 00 00: call 0x4b5c70
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 7A: jne 0x4b58b0
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4b5843
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0fh
        and ecx, 0fffffff0h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 7C 22 5E 00: call dword ptr [0x5e227c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 46: je 0x4b58b0
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x4b5886
        __asm _emit 0x73
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 06: jmp 0x4b588c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 83 37 FF FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 C3 03 00 00: call 0x4b5c70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 9
        ; Exact mapped bytes E8 D9 F9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 3D: jmp 0x4b58f9
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 9
        ; Exact mapped bytes E8 CD F9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4b58d3
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0fh
        and edx, 0fffffff0h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 5C 02 5E 00: mov edx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 78 22 5E 00: call dword ptr [0x5e2278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x4b5908
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 08 EE 5D 00 00: cmp dword ptr [0x5dee08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4b590d
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 19: jmp 0x4b5926
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 4A FC FF FF: call 0x4b5560
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4b5921
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4b5926
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 50 FE FF FF: jmp 0x4b5776
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
