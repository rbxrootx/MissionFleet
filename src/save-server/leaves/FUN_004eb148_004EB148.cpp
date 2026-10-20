// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB148 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_004eb148_004EB148() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x4eb17c
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 18h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FF 82 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4eb17c
        __asm _emit 0x75
        __asm _emit 0x11
        push 74h
        push 6741e8h
        ; Exact mapped bytes E8 C9 DB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb17c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4eb154
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3B A5 03 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4eb19f
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 6741e8h
        ; Exact mapped bytes E8 A6 DB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb19f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4eb182
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb1ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4eb1a5
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4eb1b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4eb1b2
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4eb1c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4eb1bf
        __asm _emit 0x75
        __asm _emit 0xf3
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1F 04 00 00: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 69: jne 0x4eb252
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 C7 B1 03 00: call 0x5263bb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 76 13: jbe 0x4eb20c
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 A6 9B 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 1D 09 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 CB B1 03 00: call 0x5263e6
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 29: je 0x4eb24d
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x4eb24d
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A EF FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x4eb24d
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 65 9B 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 6
        ; Exact mapped bytes E8 DC 08 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x4eb2da
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F F1 FE FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 05: jne 0x4eb268
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 74 7C FB FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 FD FF FF: call 0x4eaff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 30h]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 E6 40 FD FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0ch], edx
        push 0a3h
        push 6741e8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 86 EF FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
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
