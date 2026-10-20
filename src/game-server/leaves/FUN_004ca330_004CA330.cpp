// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA330 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_004ca330_004CA330() {
    __asm {
        ; Exact mapped bytes 83 3D E0 04 5E 00 00: cmp dword ptr [0x5e04e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 75 09: jne 0x4ca346
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
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 8B 3D C0 28 5E 00: mov edi, dword ptr [0x5e28c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D E8 25 5E 00: mov ebx, dword ptr [0x5e25e8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ecx + ecx*2]
        cmp dword ptr [edx*8 + 5e0f40h], eax
        ; Exact mapped bytes 75 25: jne 0x4ca392
        __asm _emit 0x75
        __asm _emit 0x25
        push ecx
        push esi
        ; Exact mapped bytes E8 5C F6 FF FF: call 0x4c99d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
        xor eax, eax
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
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
        ; Exact mapped bytes 7C C9: jl 0x4ca361
        __asm _emit 0x7c
        __asm _emit 0xc9
        ; Exact mapped bytes 75 6F: jne 0x4ca409
        __asm _emit 0x75
        __asm _emit 0x6f
        cmp eax, 4caf70h
        ; Exact mapped bytes 75 20: jne 0x4ca3c1
        __asm _emit 0x75
        __asm _emit 0x20
        push ecx
        push esi
        ; Exact mapped bytes E8 28 F6 FF FF: call 0x4c99d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
        xor eax, eax
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
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
        ; Exact mapped bytes EB 48: jmp 0x4ca409
        __asm _emit 0xeb
        __asm _emit 0x48
        xor eax, eax
        ; Exact mapped bytes 8B 3D E0 25 5E 00: mov edi, dword ptr [0x5e25e0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x4ca3f7
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes 66 A1 F2 04 5E 00: mov ax, word ptr [0x5e04f2]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x4ca3f7
        __asm _emit 0x75
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 A1 F0 04 5E 00: mov ax, word ptr [0x5e04f0]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4ca409
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        xor eax, eax
        ; Exact mapped bytes 66 A1 F4 04 5E 00: mov ax, word ptr [0x5e04f4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 D8 25 5E 00: call dword ptr [0x5e25d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5
        push esi
        ; Exact mapped bytes 8B 35 E4 26 5E 00: mov esi, dword ptr [0x5e26e4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 11: je 0x4ca42b
        __asm _emit 0x74
        __asm _emit 0x11
        push edi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x4ca330
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
        ; Exact mapped bytes 75 EF: jne 0x4ca41a
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
