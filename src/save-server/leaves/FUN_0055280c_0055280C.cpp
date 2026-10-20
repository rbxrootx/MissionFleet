// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055280C .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_0055280c_0055280C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 22ah
        push 67c1e0h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 35 7A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x552848
        __asm _emit 0x74
        __asm _emit 0x14
        push 22bh
        push 67c1e0h
        ; Exact mapped bytes E8 FD 64 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552848
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55282b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x55286b
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ch
        push 67c1e0h
        ; Exact mapped bytes E8 DA 64 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55286b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55284e
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x55289c
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 E2 0B F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55289c
        __asm _emit 0x75
        __asm _emit 0x14
        push 22eh
        push 67c1e0h
        ; Exact mapped bytes E8 A9 64 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55289c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x552871
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 08 F2 FF FF: call 0x551ab2
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x5528db
        __asm _emit 0x75
        __asm _emit 0x14
        push 233h
        push 67c1e0h
        ; Exact mapped bytes E8 6A 64 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5528db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5528be
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 FB 9C FF FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 71 01 00: call 0x569a9b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 28h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 640d30h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 34 C2 68 00: call dword ptr [0x68c234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 240h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 F8 78 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
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
