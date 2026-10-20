// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A2B5 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_0057a2b5_0057A2B5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 288h
        push 67d108h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 8C FF F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 85 91 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a2f9
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 67d108h
        ; Exact mapped bytes E8 4C EA FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a2f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x57a2d4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B EF FF FF: call 0x5792a2
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x57a324
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ch
        push 67d108h
        ; Exact mapped bytes E8 21 EA FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a324
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57a30a
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 4]
        push ecx
        push 3
        push 4
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x57a360
        __asm _emit 0x74
        __asm _emit 0x19
        push 67d248h
        push 67d274h
        ; Exact mapped bytes E8 BF 62 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x62
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x57a484
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x57a37a
        __asm _emit 0x75
        __asm _emit 0x14
        push 297h
        push 67d108h
        ; Exact mapped bytes E8 CB E9 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a37a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x57a360
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 14h]
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 70 C2 68 00: call dword ptr [0x68c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x57a3a3
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E8 39 8B F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x57a3bd
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a0h
        push 67d108h
        ; Exact mapped bytes E8 88 E9 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a3bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x57a3a3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 24 C3 68 00: call dword ptr [0x68c324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x57a3fb
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 FF 1A FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C8 E6 FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x57a426
        __asm _emit 0x75
        __asm _emit 0x14
        push 2adh
        push 67d108h
        ; Exact mapped bytes E8 1F E9 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a426
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x57a406
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 85 0B FD FF: call 0x54afbf
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 60 C2 68 00: call dword ptr [0x68c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x57a463
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 97 1A FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], 0
        mov eax, 1
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
