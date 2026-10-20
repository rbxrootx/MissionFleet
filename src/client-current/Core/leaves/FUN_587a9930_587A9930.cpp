// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9930 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_587a9930_587A9930() {
    __asm {
        sub esp, 408h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 404h], eax
        push ebp
        mov ebp, dword ptr [esp + 418h]
        push esi
        mov esi, dword ptr [esp + 414h]
        push edi
        mov edi, dword ptr [esp + 41ch]
        test edi, edi
        ; Exact mapped bytes 74 31: je 0x587a9991
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        mov ebx, 400h
        cmp edi, ebx
        cmovb ebx, edi
        sub edi, ebx
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x587a998c
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebx
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 73 D9 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes E8 27 5C FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test edi, edi
        ; Exact mapped bytes 75 D1: jne 0x587a9961
        __asm _emit 0x75
        __asm _emit 0xd1
        pop ebx
        test ebp, ebp
        ; Exact mapped bytes 74 11: je 0x587a99a6
        __asm _emit 0x74
        __asm _emit 0x11
        test dword ptr [esi + 78h], 800h
        ; Exact mapped bytes 74 04: je 0x587a99a2
        __asm _emit 0x74
        __asm _emit 0x04
        xor ebp, ebp
        ; Exact mapped bytes EB 04: jmp 0x587a99a6
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 49: jne 0x587a99ef
        __asm _emit 0x75
        __asm _emit 0x49
        test dword ptr [esi + 120h], 20000000h
        ; Exact mapped bytes 75 3D: jne 0x587a99ef
        __asm _emit 0x75
        __asm _emit 0x3d
        test dword ptr [esi + 78h], 800h
        ; Exact mapped bytes 74 43: je 0x587a99fe
        __asm _emit 0x74
        __asm _emit 0x43
        push 4
        lea eax, [esp + 10h]
        mov dword ptr [esi + 2dch], 81h
        push eax
        push esi
        ; Exact mapped bytes E8 1E D9 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov ecx, dword ptr [esp + 404h]
        xor ecx, esp
        ; Exact mapped bytes E8 68 76 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 408h
        ret
        mov eax, dword ptr [esi + 78h]
        and eax, 300h
        cmp eax, 300h
        ; Exact mapped bytes 74 BD: je 0x587a99bb
        __asm _emit 0x74
        __asm _emit 0xbd
        push 4
        lea eax, [esp + 10h]
        mov dword ptr [esi + 2dch], 81h
        push eax
        push esi
        ; Exact mapped bytes E8 DB D8 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [esp + 18h]
        add esp, 0ch
        movzx eax, byte ptr [esp + 0dh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0fh]
        shl ecx, 8
        add ecx, eax
        cmp ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes 74 92: je 0x587a99d5
        __asm _emit 0x74
        __asm _emit 0x92
        test ebp, ebp
        ; Exact mapped bytes 75 14: jne 0x587a9a5b
        __asm _emit 0x75
        __asm _emit 0x14
        test dword ptr [esi + 120h], 20000000h
        ; Exact mapped bytes 75 08: jne 0x587a9a5b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 78h]
        shr eax, 0ah
        ; Exact mapped bytes EB 08: jmp 0x587a9a63
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 78h]
        shr eax, 9
        not eax
        and eax, 1
        push 588b96bch
        push esi
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x587a9a95
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 1B 53 FF FF: call 0x5879ed90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 418h]
        add esp, 8
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        xor ecx, esp
        ; Exact mapped bytes E8 C2 75 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 408h
        ret
        ; Exact mapped bytes E8 16 52 FF FF: call 0x5879ecb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
