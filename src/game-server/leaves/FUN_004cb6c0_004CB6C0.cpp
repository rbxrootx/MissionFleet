// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CB6C0 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_004cb6c0_004CB6C0() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 DF E2 FF FF: call 0x4c99b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4cb6e2
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
        mov ebx, 58ed8ch
        ; Exact mapped bytes FF 15 C4 25 5E 00: call dword ptr [0x5e25c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x25
        __asm _emit 0x5e
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
        ; Exact mapped bytes 74 13: je 0x4cb714
        __asm _emit 0x74
        __asm _emit 0x13
        lea eax, [esp + 10h]
        lea ecx, [ebx - 1ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4cb72a
        __asm _emit 0x74
        __asm _emit 0x16
        add ebx, 20h
        inc ebp
        cmp ebx, 58ee4ch
        ; Exact mapped bytes 72 DC: jb 0x4cb6fc
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
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
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
        ; Exact mapped bytes FF 90 88 ED 58 00: call dword ptr [eax + 0x58ed88]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0x58
        __asm _emit 0x00
        add esp, 14h
        mov edi, eax
        cmp edi, 1
        ; Exact mapped bytes 75 4B: jne 0x4cb7a1
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 2D: jne 0x4cb789
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 83 3D 02 05 5E 00 10: cmp word ptr [0x5e0502], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 75 23: jne 0x4cb789
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp + ebp*2]
        mov ecx, dword ptr [eax*8 + 5e0f40h]
        push ecx
        push esi
        ; Exact mapped bytes E8 48 E4 FF FF: call 0x4c9bc0
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
        mov ecx, dword ptr [eax*8 + 5e0f40h]
        push ecx
        push esi
        ; Exact mapped bytes E8 85 E2 FF FF: call 0x4c9a20
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
