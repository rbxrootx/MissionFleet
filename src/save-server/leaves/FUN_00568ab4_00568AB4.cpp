// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568AB4 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_00568ab4_00568AB4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58efe8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x568c52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x568b6f
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 1F: jne 0x568b2d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 14: je 0x568b2d
        __asm _emit 0x74
        __asm _emit 0x14
        push 163h
        push 67b070h
        ; Exact mapped bytes E8 18 02 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568b2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x568b06
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x568b4d
        __asm _emit 0x75
        __asm _emit 0x14
        push 164h
        push 67b070h
        ; Exact mapped bytes E8 F8 01 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568b4d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x568b33
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov eax, 1
        ; Exact mapped bytes E9 BE 01 00 00: jmp 0x568d2d
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1000h
        push 2002h
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 BF 6C FB FF: call 0x51f840
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 1
        ; Exact mapped bytes 75 34: jne 0x568bc4
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x568bad
        __asm _emit 0x75
        __asm _emit 0x14
        push 16eh
        push 67b070h
        ; Exact mapped bytes E8 98 01 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568bad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x568b90
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 3E 6D FB FF: call 0x51f902
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x568c33
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 1
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 08 6F FB FF: call 0x51faf4
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x568c0f
        __asm _emit 0x75
        __asm _emit 0x14
        push 175h
        push 67b070h
        ; Exact mapped bytes E8 36 01 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568c0f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x568bf2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 60h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 57 6C FB FF: call 0x51f882
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x568d2d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 1
        ; Exact mapped bytes 75 08: jne 0x568c43
        __asm _emit 0x75
        __asm _emit 0x08
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 B1 6E FB FF: call 0x51faf4
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 30 6C FB FF: call 0x51f882
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x568d2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 E3 53 FE FF: call 0x54e050
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 4
        ; Exact mapped bytes 75 34: jne 0x568cb0
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x568c99
        __asm _emit 0x75
        __asm _emit 0x14
        push 182h
        push 67b070h
        ; Exact mapped bytes E8 AC 00 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568c99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x568c7c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 D2 55 FE FF: call 0x54e280
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x568cc3
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 C8 5E FE FF: call 0x54eb82
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x568cc3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 19 A2 F3 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0xff
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x568d0c
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 4
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 72 55 FE FF: call 0x54e25d
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], eax
        mov dword ptr [ebp - 64h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BE 54 FE FF: call 0x54e1c5
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes EB 21: jmp 0x568d2d
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 4
        ; Exact mapped bytes 75 08: jne 0x568d1c
        __asm _emit 0x75
        __asm _emit 0x08
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 41 55 FE FF: call 0x54e25d
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 9A 54 FE FF: call 0x54e1c5
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
