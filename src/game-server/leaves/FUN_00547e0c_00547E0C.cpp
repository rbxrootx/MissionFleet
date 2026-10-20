// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547E0C .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_00547e0c_00547E0C() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x547e2c
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5ca280h
        ; Exact mapped bytes E8 D9 CB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547e2c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x547e12
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 72 11: jb 0x547e49
        __asm _emit 0x72
        __asm _emit 0x11
        push 7bh
        push 5ca280h
        ; Exact mapped bytes E8 BC CB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547e49
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x547e32
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 83 3D 40 EB 5D 00 00: cmp dword ptr [0x5deb40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 02: je 0x547e5a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 77: jmp 0x547ed1
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 5de94ch], 0
        ; Exact mapped bytes 75 14: jne 0x547e7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 5ca280h
        ; Exact mapped bytes E8 8A CB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547e7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x547e5a
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 5de908h]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax*4 + 5de908h], edx
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx*4 + 5de908h], 0
        ; Exact mapped bytes 7D 14: jge 0x547eb9
        __asm _emit 0x7d
        __asm _emit 0x14
        push 84h
        push 5ca280h
        ; Exact mapped bytes E8 4C CB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547eb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x547e81
        __asm _emit 0x75
        __asm _emit 0xc2
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 18h
        add eax, 5de9a8h
        push eax
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
