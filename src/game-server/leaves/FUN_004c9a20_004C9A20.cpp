// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9A20 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004c9a20_004C9A20() {
    __asm {
        sub esp, 10h
        xor eax, eax
        ; Exact mapped bytes 66 A1 E8 04 5E 00: mov ax, word ptr [0x5e04e8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        push eax
        ; Exact mapped bytes 8B 3D E0 25 5E 00: mov edi, dword ptr [0x5e25e0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x4c9aff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x4c9aff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x4c9aff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 EC 04 5E 00: mov ax, word ptr [0x5e04ec]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x4c9aff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 70: jne 0x4c9aff
        __asm _emit 0x75
        __asm _emit 0x70
        xor eax, eax
        ; Exact mapped bytes 66 A1 EA 04 5E 00: mov ax, word ptr [0x5e04ea]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x4c9aff
        __asm _emit 0x75
        __asm _emit 0x60
        push esi
        ; Exact mapped bytes E8 0B FF FF FF: call 0x4c99b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x4c9aff
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 80 3D E5 0F 5E 00 00: cmp byte ptr [0x5e0fe5], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x4c9ae0
        __asm _emit 0x74
        __asm _emit 0x2b
        push esi
        ; Exact mapped bytes FF 15 CC 28 5E 00: call dword ptr [0x5e28cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x4c9ae0
        __asm _emit 0x75
        __asm _emit 0x20
        lea eax, [esp + 8]
        push 10h
        push eax
        push esi
        ; Exact mapped bytes FF 15 C4 25 5E 00: call dword ptr [0x5e25c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [esp + 8]
        push 5d2de8h
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        mov eax, dword ptr [esp + 20h]
        push eax
        push -4
        push esi
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
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
        ; Exact mapped bytes FF 15 D8 25 5E 00: call dword ptr [0x5e25d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 10h
        ret
    }
}
