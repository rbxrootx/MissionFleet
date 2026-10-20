// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429770 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00429770_00429770() {
    __asm {
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 75 09: jne 0x429786
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esp + 14h]
        push -4
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 8B 3D DC C4 43 00: mov edi, dword ptr [0x43c4dc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 64 C4 43 00: mov ebx, dword ptr [0x43c464]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea edx, [ecx + ecx*2]
        cmp dword ptr [edx*8 + 451e60h], eax
        ; Exact mapped bytes 75 25: jne 0x4297d2
        __asm _emit 0x75
        __asm _emit 0x25
        push ecx
        push esi
        ; Exact mapped bytes E8 8C F6 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
        xor eax, eax
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push ebp
        push -4
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        xor eax, eax
        mov ecx, 10h
        inc ecx
        cmp ecx, 6
        ; Exact mapped bytes 7C C9: jl 0x4297a1
        __asm _emit 0x7c
        __asm _emit 0xc9
        ; Exact mapped bytes 75 6F: jne 0x429849
        __asm _emit 0x75
        __asm _emit 0x6f
        cmp eax, 42a320h
        ; Exact mapped bytes 75 20: jne 0x429801
        __asm _emit 0x75
        __asm _emit 0x20
        push ecx
        push esi
        ; Exact mapped bytes E8 58 F6 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
        xor eax, eax
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push ebp
        push -4
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 48: jmp 0x429849
        __asm _emit 0xeb
        __asm _emit 0x48
        xor eax, eax
        ; Exact mapped bytes 8B 3D 5C C4 43 00: mov edi, dword ptr [0x43c45c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x429837
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes 66 A1 12 14 45 00: mov ax, word ptr [0x451412]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x429837
        __asm _emit 0x75
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 A1 10 14 45 00: mov ax, word ptr [0x451410]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x429849
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        xor eax, eax
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 C4 43 00: call dword ptr [0x43c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 5
        push esi
        ; Exact mapped bytes 8B 35 78 C4 43 00: mov esi, dword ptr [0x43c478]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 11: je 0x42986b
        __asm _emit 0x74
        __asm _emit 0x11
        push edi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x429770
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 EF: jne 0x42985a
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
