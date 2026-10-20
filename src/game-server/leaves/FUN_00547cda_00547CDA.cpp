// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547CDA .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00547cda_00547CDA() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 72 11: jb 0x547cf7
        __asm _emit 0x72
        __asm _emit 0x11
        push 58h
        push 5ca280h
        ; Exact mapped bytes E8 0E CD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547cf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x547ce0
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x547d2b
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes E8 35 FE FF FF: call 0x547b40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x547d25
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 5ca280h
        ; Exact mapped bytes E8 E0 CC FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547d25
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x547d0b
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D 40 EB 5D 00 00: cmp dword ptr [0x5deb40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x547d39
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x547e05
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 5de94ch], 0
        ; Exact mapped bytes 75 71: jne 0x547db7
        __asm _emit 0x75
        __asm _emit 0x71
        push 5de990h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax*4 + 5de94ch], 0
        ; Exact mapped bytes 75 4E: jne 0x547dac
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 18h
        add ecx, 5de9a8h
        push ecx
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 5de94ch]
        add eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 5de94ch], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 5de94ch], 0
        ; Exact mapped bytes 75 11: jne 0x547da6
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 5ca280h
        ; Exact mapped bytes E8 5F CC FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547da6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C5: jne 0x547d71
        __asm _emit 0x75
        __asm _emit 0xc5
        push 5de990h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 18h
        add ecx, 5de9a8h
        push ecx
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 5de908h]
        add eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 5de908h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 5de908h], 0
        ; Exact mapped bytes 7F 11: jg 0x547dff
        __asm _emit 0x7f
        __asm _emit 0x11
        push 74h
        push 5ca280h
        ; Exact mapped bytes E8 06 CC FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547dff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C5: jne 0x547dca
        __asm _emit 0x75
        __asm _emit 0xc5
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
