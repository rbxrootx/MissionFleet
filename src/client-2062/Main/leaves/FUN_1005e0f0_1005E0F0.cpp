// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005E0F0 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_1005e0f0_1005E0F0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        and eax, 0ffffh
        mov esi, ecx
        dec eax
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 9F 00 00 00: ja 0x1005e1a5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1005e1e0h]
        ; Exact mapped bytes FF 24 8D CC E1 05 10: jmp dword ptr [ecx*4 + 0x1005e1cc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x10
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2A: je 0x1005e148
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x1005e133
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 D3 00 00 00: call 0x1005e200
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        ; Exact mapped bytes EB 72: jmp 0x1005e1a5
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x1005e142
        __asm _emit 0x75
        __asm _emit 0x09
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 BE 00 00 00: call 0x1005e200
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        ; Exact mapped bytes EB 5D: jmp 0x1005e1a5
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 0d44h]
        ; Exact mapped bytes E8 8D D1 FD FF: call 0x1003b2e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x1005e1a5
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 7C 24 0C 00: cmp word ptr [esp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x1005e167
        __asm _emit 0x74
        __asm _emit 0x0a
        or byte ptr [esi + 24h], 2
        or byte ptr [esi + 24h], 2
        ; Exact mapped bytes EB 3E: jmp 0x1005e1a5
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 0d44h]
        push 0
        ; Exact mapped bytes E8 7C D1 FD FF: call 0x1003b2f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 5
        ; Exact mapped bytes E8 29 F9 FB FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        or byte ptr [esi + 24h], 2
        ; Exact mapped bytes EB 18: jmp 0x1005e1a5
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        push 1
        ; Exact mapped bytes EB 07: jmp 0x1005e19a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [esp + 0ch]
        push edx
        push 0
        mov ecx, dword ptr [esi + 0d5ch]
        ; Exact mapped bytes E8 7B EC 01 00: call 0x1007ce20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, 0aaaaaaaah
        push 1
        push eax
        ; Exact mapped bytes E8 84 EA 05 00: call 0x100bcc40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 00 59 1C 10 00 00 00 00: mov dword ptr [0x101c5900], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
