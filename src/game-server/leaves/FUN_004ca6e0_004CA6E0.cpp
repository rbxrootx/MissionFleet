// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA6E0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004ca6e0_004CA6E0() {
    __asm {
        ; Exact mapped bytes 83 3D E0 04 5E 00 00: cmp dword ptr [0x5e04e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 74 72: je 0x4ca75c
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esp + 8]
        cmp eax, 134h
        ; Exact mapped bytes 72 67: jb 0x4ca75c
        __asm _emit 0x72
        __asm _emit 0x67
        cmp eax, 137h
        ; Exact mapped bytes 74 60: je 0x4ca75c
        __asm _emit 0x74
        __asm _emit 0x60
        cmp eax, 134h
        ; Exact mapped bytes 75 31: jne 0x4ca734
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 3D 00 05 5E 00 5F 03: cmp word ptr [0x5e0500], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 73 20: jae 0x4ca72e
        __asm _emit 0x73
        __asm _emit 0x20
        mov esi, dword ptr [esp + 10h]
        push 5
        push esi
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4ca72e
        __asm _emit 0x74
        __asm _emit 0x0f
        push -10h
        push esi
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 06: jne 0x4ca734
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes A1 10 05 5E 00: mov eax, dword ptr [0x5e0510]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 20 5E 00: call dword ptr [0x5e2058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 05 5E 00: mov ecx, dword ptr [0x5e0508]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        push esi
        ; Exact mapped bytes FF 15 5C 20 5E 00: call dword ptr [0x5e205c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 05 5E 00: mov eax, dword ptr [0x5e0528]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
