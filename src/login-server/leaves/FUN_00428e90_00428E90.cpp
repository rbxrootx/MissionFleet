// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428E90 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00428e90_00428E90() {
    __asm {
        sub esp, 10h
        xor eax, eax
        ; Exact mapped bytes 66 A1 08 14 45 00: mov ax, word ptr [0x451408]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        push eax
        ; Exact mapped bytes 8B 3D 5C C4 43 00: mov edi, dword ptr [0x43c45c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x428f6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x428f6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x428f6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 0C 14 45 00: mov ax, word ptr [0x45140c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x428f6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 70: jne 0x428f6f
        __asm _emit 0x75
        __asm _emit 0x70
        xor eax, eax
        ; Exact mapped bytes 66 A1 0A 14 45 00: mov ax, word ptr [0x45140a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x428f6f
        __asm _emit 0x75
        __asm _emit 0x60
        push esi
        ; Exact mapped bytes E8 0B FF FF FF: call 0x428e20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x428f6f
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 80 3D 05 1F 45 00 00: cmp byte ptr [0x451f05], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x428f50
        __asm _emit 0x74
        __asm _emit 0x2b
        push esi
        ; Exact mapped bytes FF 15 70 C5 43 00: call dword ptr [0x43c570]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x428f50
        __asm _emit 0x75
        __asm _emit 0x20
        lea eax, [esp + 8]
        push 10h
        push eax
        push esi
        ; Exact mapped bytes FF 15 94 C3 43 00: call dword ptr [0x43c394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 8]
        push 44d974h
        push ecx
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov eax, dword ptr [esp + 20h]
        push eax
        push -4
        push esi
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
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
        ; Exact mapped bytes FF 15 58 C4 43 00: call dword ptr [0x43c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 10h
        ret
    }
}
