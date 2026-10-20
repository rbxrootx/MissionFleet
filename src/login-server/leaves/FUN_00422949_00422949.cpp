// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422949 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00422949_00422949() {
    __asm {
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 88 11 45 00: cmp dword ptr [0x451188], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 75 05: jne 0x42295b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 60 DE FF FF: call 0x4207bb
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 64 FC 44 00: mov esi, dword ptr [0x44fc64]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        xor edi, edi
        mov al, byte ptr [esi]
        cmp al, bl
        ; Exact mapped bytes 74 12: je 0x42297b
        __asm _emit 0x74
        __asm _emit 0x12
        cmp al, 3dh
        ; Exact mapped bytes 74 01: je 0x42296e
        __asm _emit 0x74
        __asm _emit 0x01
        inc edi
        push esi
        ; Exact mapped bytes E8 CC C1 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea esi, [esi + eax + 1]
        ; Exact mapped bytes EB E8: jmp 0x422963
        __asm _emit 0xeb
        __asm _emit 0xe8
        lea eax, [edi*4 + 4]
        push eax
        ; Exact mapped bytes E8 5C CA FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        cmp esi, ebx
        ; Exact mapped bytes 89 35 D8 FC 44 00: mov dword ptr [0x44fcd8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x42299d
        __asm _emit 0x75
        __asm _emit 0x08
        push 9
        ; Exact mapped bytes E8 9B C6 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 8B 3D 64 FC 44 00: mov edi, dword ptr [0x44fc64]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 74 39: je 0x4229e0
        __asm _emit 0x74
        __asm _emit 0x39
        push ebp
        push edi
        ; Exact mapped bytes E8 92 C1 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        pop ecx
        inc ebp
        cmp byte ptr [edi], 3dh
        ; Exact mapped bytes 74 22: je 0x4229d9
        __asm _emit 0x74
        __asm _emit 0x22
        push ebp
        ; Exact mapped bytes E8 27 CA FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        pop ecx
        mov dword ptr [esi], eax
        ; Exact mapped bytes 75 08: jne 0x4229cc
        __asm _emit 0x75
        __asm _emit 0x08
        push 9
        ; Exact mapped bytes E8 6C C6 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push edi
        push dword ptr [esi]
        ; Exact mapped bytes E8 AC 37 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        add esi, 4
        pop ecx
        add edi, ebp
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 75 C9: jne 0x4229a8
        __asm _emit 0x75
        __asm _emit 0xc9
        pop ebp
        ; Exact mapped bytes FF 35 64 FC 44 00: push dword ptr [0x44fc64]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 CB FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 89 1D 64 FC 44 00: mov dword ptr [0x44fc64], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi], ebx
        pop edi
        pop esi
        ; Exact mapped bytes C7 05 84 11 45 00 01 00 00 00: mov dword ptr [0x451184], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        ret
    }
}
