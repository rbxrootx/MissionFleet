// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429AB0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00429ab0_00429AB0() {
    __asm {
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 74 72: je 0x429b2c
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esp + 8]
        cmp eax, 134h
        ; Exact mapped bytes 72 67: jb 0x429b2c
        __asm _emit 0x72
        __asm _emit 0x67
        cmp eax, 137h
        ; Exact mapped bytes 74 60: je 0x429b2c
        __asm _emit 0x74
        __asm _emit 0x60
        cmp eax, 134h
        ; Exact mapped bytes 75 31: jne 0x429b04
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 73 20: jae 0x429afe
        __asm _emit 0x73
        __asm _emit 0x20
        mov esi, dword ptr [esp + 10h]
        push 5
        push esi
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x429afe
        __asm _emit 0x74
        __asm _emit 0x0f
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 06: jne 0x429b04
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes A1 30 14 45 00: mov eax, dword ptr [0x451430]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 54 C0 43 00: call dword ptr [0x43c054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 28 14 45 00: mov ecx, dword ptr [0x451428]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push ecx
        push esi
        ; Exact mapped bytes FF 15 50 C0 43 00: call dword ptr [0x43c050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A1 48 14 45 00: mov eax, dword ptr [0x451448]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x45
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
