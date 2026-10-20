// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DC14 .. +0x1B6 bytes.
extern "C" __declspec(naked) void FUN_0051dc14_0051DC14() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x51dc31
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x51ddc3
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 A8 EE 01 00: call 0x53cae4
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 EE 01 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 68h], eax
        ; Exact mapped bytes 74 14: je 0x51dc5d
        __asm _emit 0x74
        __asm _emit 0x14
        push 24ah
        push 5cb704h
        ; Exact mapped bytes E8 A8 6D 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51dc5d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x51dc3c
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes E8 6B EE 01 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x51ddb9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 6C 25 5E 00: call dword ptr [0x5e256c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x51dc96
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 84 B6 05 00: call 0x579315
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x51ddb9
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 200h
        ; Exact mapped bytes 77 28: ja 0x51dccd
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 2ch], 200h
        ; Exact mapped bytes 74 62: je 0x51dd10
        __asm _emit 0x74
        __asm _emit 0x62
        cmp dword ptr [ebp - 2ch], 100h
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x51dd70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 101h
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x51dd54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x51ddaa
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 202h
        ; Exact mapped bytes 74 12: je 0x51dce8
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 2ch], 204h
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x51dd9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x51ddaa
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 0A: je 0x51dcfe
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BC EC FF FF: call 0x51c9b8
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x51dd06
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E1 F4 FF FF: call 0x51d1e7
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x51ddc3
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 1C: je 0x51dd38
        __asm _emit 0x74
        __asm _emit 0x1c
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5C 7C 01 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 35 EB FF FF: call 0x51c86b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x51dd52
        __asm _emit 0xeb
        __asm _emit 0x1a
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 40 7C 01 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E3 F1 FF FF: call 0x51cf35
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 60: jmp 0x51ddb4
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 0E: je 0x51dd6e
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 08 EC FF FF: call 0x51c976
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 44: jmp 0x51ddb4
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 0E: je 0x51dd8a
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EC EB FF FF: call 0x51c976
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 1bh
        ; Exact mapped bytes 75 0C: jne 0x51dd9c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9E F7 FF FF: call 0x51d536
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 27: jmp 0x51ddc3
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes EB 16: jmp 0x51ddb4
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 90 F7 FF FF: call 0x51d536
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x51ddc3
        __asm _emit 0xeb
        __asm _emit 0x19
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 AA FE FF FF: jmp 0x51dc63
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 75 F7 FF FF: call 0x51d536
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
