// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D337 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_0055d337_0055D337() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f6f2h
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 56dh
        push 5cebe0h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 F5 DD F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x55d385
        __asm _emit 0x75
        __asm _emit 0x14
        push 56eh
        push 5cebe0h
        ; Exact mapped bytes E8 80 76 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d385
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55d36b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x55d3ab
        __asm _emit 0x75
        __asm _emit 0x14
        push 56fh
        push 5cebe0h
        ; Exact mapped bytes E8 5A 76 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d3ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x55d38b
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0F 4A FE FF: call 0x541dc8
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B8 66 00 00: call 0x563a80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 84h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D5 66 00 00: call 0x563ab5
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E0 F7 FF FF: call 0x55cbc8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 74 08: je 0x55d406
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 34h], 3
        ; Exact mapped bytes 74 36: je 0x55d43a
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes EB 65: jmp 0x55d46b
        __asm _emit 0xeb
        __asm _emit 0x65
        push 0
        push 0
        push 1
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 6A FF FF: call 0x553f04
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55d435
        __asm _emit 0x75
        __asm _emit 0x19
        push 5cf3a4h
        push 5cf3cch
        ; Exact mapped bytes E8 EA 27 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x55d4ba
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 1
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 6C FF FF: call 0x55406c
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55d469
        __asm _emit 0x75
        __asm _emit 0x19
        push 5cf3d0h
        push 5cf3f8h
        ; Exact mapped bytes E8 B6 27 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 4F: jmp 0x55d4ba
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 14: je 0x55d485
        __asm _emit 0x74
        __asm _emit 0x14
        push 58bh
        push 5cebe0h
        ; Exact mapped bytes E8 80 75 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d485
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55d46b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 1
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 68 FF FF: call 0x553d9c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55d4ba
        __asm _emit 0x75
        __asm _emit 0x19
        push 5cf3fch
        push 5cf420h
        ; Exact mapped bytes E8 65 27 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 4B: je 0x55d50b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3D 02 00 00: call 0x55d705
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 3E: jne 0x55d50b
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 8C FF FF: call 0x5561d4
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x55d4fe
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5cf424h
        push 5cf44ch
        ; Exact mapped bytes E8 23 27 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 0D: jmp 0x55d50b
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B1 AA FF FF: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B6 48 FE FF: call 0x541de2
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
