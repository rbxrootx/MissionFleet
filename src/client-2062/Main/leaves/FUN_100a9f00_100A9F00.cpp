// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9F00 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_100a9f00_100A9F00() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 480h]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x100a9f43
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [esp + 4]
        push 101abcc4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esp + 4]
        push 4
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 C0 37 FA FF: call 0x1004d700
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
        mov eax, dword ptr [esi + 484h]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x100a9f82
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [esp + 4]
        push 101abcc4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esp + 4]
        push 4
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 81 37 FA FF: call 0x1004d700
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
        mov eax, dword ptr [esi + 0fch]
        mov eax, dword ptr [eax + 80h]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x100a9fc5
        __asm _emit 0x74
        __asm _emit 0x33
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        cmp eax, 2
        ; Exact mapped bytes 7E 26: jle 0x100a9fc5
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [esi + 100h]
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 3B 37 FA FF: call 0x1004d700
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
    }
}
