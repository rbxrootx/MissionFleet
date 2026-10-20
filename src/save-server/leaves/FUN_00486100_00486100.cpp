// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486100 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_00486100_00486100() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 DF E2 FF FF: call 0x4843f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x486122
        __asm _emit 0x74
        __asm _emit 0x0a
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
        lea eax, [esp + 10h]
        push 10h
        push eax
        xor ebp, ebp
        push esi
        mov ebx, 641524h
        ; Exact mapped bytes FF 15 04 BF 68 00: call dword ptr [0x68bf04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 7C 24 28: mov di, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 66 85 3B: test word ptr [ebx], di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x3b
        ; Exact mapped bytes 74 13: je 0x486154
        __asm _emit 0x74
        __asm _emit 0x13
        lea eax, [esp + 10h]
        lea ecx, [ebx - 1ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x48616a
        __asm _emit 0x74
        __asm _emit 0x16
        add ebx, 20h
        inc ebp
        cmp ebx, 6415e4h
        ; Exact mapped bytes 72 DC: jb 0x48613c
        __asm _emit 0x72
        __asm _emit 0xdc
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 5C 24 2C: mov bx, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        mov ecx, dword ptr [esp + 30h]
        push ecx
        push ebx
        push edi
        push eax
        push esi
        mov eax, ebp
        shl eax, 5
        ; Exact mapped bytes FF 90 20 15 64 00: call dword ptr [eax + 0x641520]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x00
        add esp, 14h
        mov edi, eax
        cmp edi, 1
        ; Exact mapped bytes 75 4B: jne 0x4861e1
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 2D: jne 0x4861c9
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 83 3D 62 90 68 00 10: cmp word ptr [0x689062], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 75 23: jne 0x4861c9
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp + ebp*2]
        mov ecx, dword ptr [eax*8 + 689aa0h]
        push ecx
        push esi
        ; Exact mapped bytes E8 48 E4 FF FF: call 0x484600
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp edi, 1
        sbb eax, eax
        pop ebp
        inc eax
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
        lea eax, [ebp + ebp*2]
        mov ecx, dword ptr [eax*8 + 689aa0h]
        push ecx
        push esi
        ; Exact mapped bytes E8 85 E2 FF FF: call 0x484460
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp edi, 1
        sbb eax, eax
        pop ebp
        inc eax
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
