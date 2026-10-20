// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571905 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_00571905_00571905() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 288h
        push 5d0930h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 3C 98 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 25 E5 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571949
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 5d0930h
        ; Exact mapped bytes E8 BC 30 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571949
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x571924
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B EF FF FF: call 0x5708f2
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x571974
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ch
        push 5d0930h
        ; Exact mapped bytes E8 91 30 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571974
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57195a
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
        ; Exact mapped bytes 74 19: je 0x5719b0
        __asm _emit 0x74
        __asm _emit 0x19
        push 5d0a70h
        push 5d0a9ch
        ; Exact mapped bytes E8 6F E2 F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x571ad4
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5719ca
        __asm _emit 0x75
        __asm _emit 0x14
        push 297h
        push 5d0930h
        ; Exact mapped bytes E8 3B 30 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5719ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5719b0
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 14h]
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 30 2A 5E 00: call dword ptr [0x5e2a30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5719f3
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
        ; Exact mapped bytes E8 B9 E3 F5 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x571a0d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a0h
        push 5d0930h
        ; Exact mapped bytes E8 F8 2F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571a0d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5719f3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 CC 29 5E 00: call dword ptr [0x5e29cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x29
        __asm _emit 0x5e
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
        ; Exact mapped bytes 74 15: je 0x571a4b
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
        ; Exact mapped bytes E8 3F BA FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C8 E6 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x571a76
        __asm _emit 0x75
        __asm _emit 0x14
        push 2adh
        push 5d0930h
        ; Exact mapped bytes E8 8F 2F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571a76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x571a56
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 C5 AA FD FF: call 0x54c54f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 C8 29 5E 00: call dword ptr [0x5e29c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x571ab3
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
        ; Exact mapped bytes E8 D7 B9 FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb9
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
