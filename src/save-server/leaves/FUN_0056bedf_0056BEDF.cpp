// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056BEDF .. +0x351 bytes.
extern "C" __declspec(naked) void FUN_0056bedf_0056BEDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        push 4eh
        push 67d450h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 49 E3 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x56bf3f
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        push 48h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3C 75 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56bf3f
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 67d450h
        ; Exact mapped bytes E8 06 CE FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bf3f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x56bf17
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x56bf6b
        __asm _emit 0x74
        __asm _emit 0x20
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 EC 74 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56bf6b
        __asm _emit 0x75
        __asm _emit 0x11
        push 51h
        push 67d450h
        ; Exact mapped bytes E8 DA CD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bf6b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x56bf45
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 74 11: je 0x56bf8e
        __asm _emit 0x74
        __asm _emit 0x11
        push 52h
        push 67d450h
        ; Exact mapped bytes E8 B7 CD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bf8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56bf71
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 1F: je 0x56bfbf
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 88h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x56bfbf
        __asm _emit 0x74
        __asm _emit 0x11
        push 55h
        push 67d450h
        ; Exact mapped bytes E8 86 CD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bfbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x56bf94
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 88h], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 25: je 0x56c009
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 98h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x56bfd8
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 9ch
        ; Exact mapped bytes E8 35 07 F6 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 69: je 0x56c08c
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x56c038
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x56c06e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 49 9F EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 85 15 EE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 2ch]
        add eax, 98h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 64 C2 68 00: call dword ptr [0x68c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x56c08c
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x56c1ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 20h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 A0 C2 68 00: call dword ptr [0x68c2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x56c0c4
        __asm _emit 0x74
        __asm _emit 0x11
        push 68h
        push 67d450h
        ; Exact mapped bytes E8 81 CC FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c0c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x56c0a3
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 11: jne 0x56c0e1
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 67d450h
        ; Exact mapped bytes E8 64 CC FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c0e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x56c0ca
        __asm _emit 0x75
        __asm _emit 0xe3
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x56c14f
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 25: je 0x56c142
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 98h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 98h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x56c111
        __asm _emit 0x75
        __asm _emit 0xc9
        xor eax, eax
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x56c224
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 640d30h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 35 E9 FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 9ch
        ; Exact mapped bytes E8 FE 09 F6 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 07: je 0x56c1ac
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B2 37 FE FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x56c221
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 41h]
        test edx, edx
        ; Exact mapped bytes 74 41: je 0x56c21f
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x56c1fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 67d450h
        ; Exact mapped bytes E8 4A CB FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c1fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x56c1de
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes EB 9C: jmp 0x56c1bd
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 40h]
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
