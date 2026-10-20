// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588044D0 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_588044d0() {
    __asm {
        movzx eax, word ptr [esp + 4]
        mov eax, dword ptr [eax*4 + 58a24860h]
        sub esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x588045a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 78 02 00: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x588045a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ecx + 204h]
        ; Exact mapped bytes 66 83 F9 08: cmp cx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 74 0A: je 0x58804509
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F9 09: cmp cx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x588045a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp]
        push ecx
        add eax, 4
        push eax
        ; Exact mapped bytes E8 7A 0D F9 FF: call 0x58795290
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 66 83 7C 24 0A 1E: cmp word ptr [esp + 0xa], 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 87 84 00 00 00: ja 0x588045a9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 08 00: cmp word ptr [esp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 7C: jne 0x588045a9
        __asm _emit 0x75
        __asm _emit 0x7c
        ; Exact mapped bytes 66 83 7C 24 06 00: cmp word ptr [esp + 6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 74: jne 0x588045a9
        __asm _emit 0x75
        __asm _emit 0x74
        push esi
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ffffffh
        push 5899d3ach
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F9 8C 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffh
        push 58990490h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 DE 8C 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffh
        push 5899045ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 C3 8C 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffffh
        push 5899d390h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A8 8C 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
