// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556DDE .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_00556dde_00556DDE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 703h
        push 5cfa08h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 63 43 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4C 90 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x556e22
        __asm _emit 0x75
        __asm _emit 0x14
        push 704h
        push 5cfa08h
        ; Exact mapped bytes E8 E3 DB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556e22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x556dfd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 4], 0
        push 58ea88h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 46 50 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x556ed6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x556e78
        __asm _emit 0x75
        __asm _emit 0x14
        push 70ch
        push 5cfa08h
        ; Exact mapped bytes E8 8D DB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556e78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556e5e
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 4]
        push edx
        push 3
        push 4
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 19: je 0x556eb4
        __asm _emit 0x74
        __asm _emit 0x19
        push 5cfbf0h
        push 5cfc24h
        ; Exact mapped bytes E8 6B 8D F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x557030
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x556ece
        __asm _emit 0x75
        __asm _emit 0x14
        push 714h
        push 5cfa08h
        ; Exact mapped bytes E8 37 DB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556ece
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x556eb4
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 5E: jmp 0x556f34
        __asm _emit 0xeb
        __asm _emit 0x5e
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 19: je 0x556f14
        __asm _emit 0x74
        __asm _emit 0x19
        push 5cfc28h
        push 5cfc5ch
        ; Exact mapped bytes E8 0B 8D F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x557030
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x556f2e
        __asm _emit 0x75
        __asm _emit 0x14
        push 720h
        push 5cfa08h
        ; Exact mapped bytes E8 D7 DA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556f2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x556f14
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 20h]
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
        ; Exact mapped bytes 74 11: je 0x556f57
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
        ; Exact mapped bytes E8 55 8E F7 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556f71
        __asm _emit 0x75
        __asm _emit 0x14
        push 72ah
        push 5cfa08h
        ; Exact mapped bytes E8 94 DA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556f71
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556f57
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 74 15: je 0x556faf
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DB 64 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x556fe3
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A7 64 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 74 15: je 0x55700f
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7B 64 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 20h]
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
