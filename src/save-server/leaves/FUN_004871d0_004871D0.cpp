// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004871D0 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_004871d0_004871D0() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        push edi
        push ebp
        mov edi, dword ptr [esp + 1ch]
        cmp edi, 82h
        ; Exact mapped bytes 75 25: jne 0x487208
        __asm _emit 0x75
        __asm _emit 0x25
        mov ebx, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        push ebx
        mov esi, dword ptr [esp + 1ch]
        push ebp
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 43 D4 FF FF: call 0x484640
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        xor eax, eax
        mov esi, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 24h]
        test eax, eax
        mov eax, dword ptr [esp + 20h]
        push ebp
        mov ebx, dword ptr [esp + 2ch]
        push eax
        push edi
        push esi
        push ebx
        push esi
        ; Exact mapped bytes 74 19: je 0x48724b
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 D9 D1 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 2D 40 BF 68 00: mov ebp, dword ptr [0x68bf40]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        ; Exact mapped bytes E8 C0 D1 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cmp ebx, 3
        ; Exact mapped bytes 75 1F: jne 0x487282
        __asm _emit 0x75
        __asm _emit 0x1f
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, eax
        and cl, 3
        cmp cl, 2
        ; Exact mapped bytes 75 10: jne 0x487286
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        mov eax, dword ptr [esp + 10h]
        cmp edi, 18h
        ; Exact mapped bytes 77 13: ja 0x48729e
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes 74 48: je 0x4872d5
        __asm _emit 0x74
        __asm _emit 0x48
        cmp edi, 0fh
        ; Exact mapped bytes 74 23: je 0x4872b5
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esp + 10h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        cmp edi, 46h
        ; Exact mapped bytes 74 51: je 0x4872f4
        __asm _emit 0x74
        __asm _emit 0x51
        cmp edi, 1943h
        ; Exact mapped bytes 72 E7: jb 0x487292
        __asm _emit 0x72
        __asm _emit 0xe7
        cmp edi, 1944h
        ; Exact mapped bytes 76 58: jbe 0x48730b
        __asm _emit 0x76
        __asm _emit 0x58
        ; Exact mapped bytes EB DD: jmp 0x487292
        __asm _emit 0xeb
        __asm _emit 0xdd
        cmp ebx, 3
        ; Exact mapped bytes 75 0D: jne 0x4872c7
        __asm _emit 0x75
        __asm _emit 0x0d
        and eax, 3
        cmp eax, 2
        ; Exact mapped bytes 74 05: je 0x4872c7
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 3
        ; Exact mapped bytes 75 CB: jne 0x487292
        __asm _emit 0x75
        __asm _emit 0xcb
        push ebx
        push 1
        push esi
        ; Exact mapped bytes E8 C0 FB FF FF: call 0x486e90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB BD: jmp 0x487292
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 73 B2: jae 0x487292
        __asm _emit 0x73
        __asm _emit 0xb2
        cmp dword ptr [esp + 20h], 0
        ; Exact mapped bytes 75 AB: jne 0x487292
        __asm _emit 0x75
        __asm _emit 0xab
        push 0
        push esi
        ; Exact mapped bytes E8 01 EF FF FF: call 0x4861f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 9E: jmp 0x487292
        __asm _emit 0xeb
        __asm _emit 0x9e
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 72 93: jb 0x487292
        __asm _emit 0x72
        __asm _emit 0x93
        push ebp
        push esi
        ; Exact mapped bytes E8 EA EE FF FF: call 0x4861f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 87: jmp 0x487292
        __asm _emit 0xeb
        __asm _emit 0x87
        mov eax, 3eah
        mov dword ptr [ebp], 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    }
}
