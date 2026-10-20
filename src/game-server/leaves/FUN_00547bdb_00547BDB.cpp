// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547BDB .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00547bdb_00547BDB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
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
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x547cd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 EB 5D 00: mov eax, dword ptr [0x5deb44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 44 EB 5D 00: mov dword ptr [0x5deb44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x547c16
        __asm _emit 0x74
        __asm _emit 0x11
        push 3fh
        push 5ca280h
        ; Exact mapped bytes E8 EF CD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547c16
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x547bef
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 83 3D 40 EB 5D 00 00: cmp dword ptr [0x5deb40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x547cd3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5de990h
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x547c46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 11h
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x547cd3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax*4 + 5de908h], 0
        ; Exact mapped bytes 74 11: je 0x547c6e
        __asm _emit 0x74
        __asm _emit 0x11
        push 4ah
        push 5ca280h
        ; Exact mapped bytes E8 97 CD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547c6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x547c50
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx*4 + 5de94ch], 0
        ; Exact mapped bytes 74 4D: je 0x547cce
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 18h
        add eax, 5de9a8h
        push eax
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 5de94ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 5de94ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx*4 + 5de94ch], 0
        ; Exact mapped bytes 74 11: je 0x547cc8
        __asm _emit 0x74
        __asm _emit 0x11
        push 4fh
        push 5ca280h
        ; Exact mapped bytes E8 3D CD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547cc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C5: jne 0x547c93
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x547c3d
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
