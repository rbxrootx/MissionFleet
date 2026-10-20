// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796D90 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_58796d90() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 83 BF 84 00 00 00 03: cmp word ptr [edi + 0x84], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        mov esi, ecx
        ; Exact mapped bytes 75 26: jne 0x58796dc8
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [edi + 40h]
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 8F 80 01 00: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58796dc8
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [eax + 138h]
        cmp eax, 2710h
        ; Exact mapped bytes 72 06: jb 0x58796dc8
        __asm _emit 0x72
        __asm _emit 0x06
        mov dword ptr [edi + 80h], eax
        push 100h
        add esi, 38h
        push 0
        push esi
        ; Exact mapped bytes E8 70 5E 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        movzx eax, word ptr [edi + 84h]
        add esp, 0ch
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 75 0C: jne 0x58796df4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi + 80h]
        push ecx
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58796ee1
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 75 16: jne 0x58796e10
        __asm _emit 0x75
        __asm _emit 0x16
        push 58998050h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 75 3A: jne 0x58796e50
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx eax, word ptr [edi + 38h]
        sub eax, 3
        ; Exact mapped bytes 74 1B: je 0x58796e3a
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, 1
        ; Exact mapped bytes 75 16: jne 0x58796e3a
        __asm _emit 0x75
        __asm _emit 0x16
        push 58998040h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 58998030h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 80h]
        cmp edi, 2710h
        ; Exact mapped bytes 72 1F: jb 0x58796e7d
        __asm _emit 0x72
        __asm _emit 0x1f
        cmp edi, 3a97h
        ; Exact mapped bytes 77 17: ja 0x58796e7d
        __asm _emit 0x77
        __asm _emit 0x17
        push edi
        push 5899801ch
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 1388h
        ; Exact mapped bytes 72 1F: jb 0x58796ea4
        __asm _emit 0x72
        __asm _emit 0x1f
        cmp edi, 270fh
        ; Exact mapped bytes 77 17: ja 0x58796ea4
        __asm _emit 0x77
        __asm _emit 0x17
        push edi
        push 58998008h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 0fa2h
        ; Exact mapped bytes 75 16: jne 0x58796ec2
        __asm _emit 0x75
        __asm _emit 0x16
        push 58998040h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 0bb8h
        ; Exact mapped bytes 75 16: jne 0x58796ee0
        __asm _emit 0x75
        __asm _emit 0x16
        push 58997ff8h
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push 58997fech
        push esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
