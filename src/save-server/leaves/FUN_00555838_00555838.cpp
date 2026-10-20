// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555838 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_00555838_00555838() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 703h
        push 67c1e0h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 09 4A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 02 DC F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdc
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55587c
        __asm _emit 0x75
        __asm _emit 0x14
        push 704h
        push 67c1e0h
        ; Exact mapped bytes E8 C9 34 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55587c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x555857
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 4], 0
        push 641278h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 5C 50 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x555930
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
        ; Exact mapped bytes 75 14: jne 0x5558d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 70ch
        push 67c1e0h
        ; Exact mapped bytes E8 73 34 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5558d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5558b8
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
        ; Exact mapped bytes 74 19: je 0x55590e
        __asm _emit 0x74
        __asm _emit 0x19
        push 67c3c8h
        push 67c3fch
        ; Exact mapped bytes E8 11 AD F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xad
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x555a8a
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x555928
        __asm _emit 0x75
        __asm _emit 0x14
        push 714h
        push 67c1e0h
        ; Exact mapped bytes E8 1D 34 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555928
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55590e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 5E: jmp 0x55598e
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
        ; Exact mapped bytes 74 19: je 0x55596e
        __asm _emit 0x74
        __asm _emit 0x19
        push 67c400h
        push 67c434h
        ; Exact mapped bytes E8 B1 AC F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x555a8a
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x555988
        __asm _emit 0x75
        __asm _emit 0x14
        push 720h
        push 67c1e0h
        ; Exact mapped bytes E8 BD 33 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555988
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55596e
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 20h]
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
        ; Exact mapped bytes 74 11: je 0x5559b1
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
        ; Exact mapped bytes E8 2B D5 F4 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5559cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 72ah
        push 67c1e0h
        ; Exact mapped bytes E8 7A 33 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5559cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5559b1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 74 15: je 0x555a09
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
        ; Exact mapped bytes E8 F1 64 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xf1
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
        ; Exact mapped bytes 74 15: je 0x555a3d
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
        ; Exact mapped bytes E8 BD 64 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 74 15: je 0x555a69
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
        ; Exact mapped bytes E8 91 64 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x91
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
