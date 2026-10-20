// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5BB0 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_587a5bb0_587A5BB0() {
    __asm {
        sub esp, 58h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 54h], eax
        mov eax, dword ptr [esp + 60h]
        lea ecx, [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 68h]
        push ebp
        push edi
        mov edi, dword ptr [esp + 68h]
        push ecx
        push eax
        push edi
        ; Exact mapped bytes E8 67 AF FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x587a5cb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        test ebx, ebx
        ; Exact mapped bytes 74 15: je 0x587a5c00
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 74 10: je 0x587a5c00
        __asm _emit 0x74
        __asm _emit 0x10
        mov esi, ebx
        lea ecx, [esi + 1]
        mov al, byte ptr [esi]
        inc esi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a5bf5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub esi, ecx
        ; Exact mapped bytes EB 02: jmp 0x587a5c02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, 7ffffffeh
        sub eax, ebp
        cmp esi, eax
        ; Exact mapped bytes 0F 87 B0 00 00 00: ja 0x587a5cc1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1]
        add eax, esi
        push eax
        push 74455874h
        push edi
        ; Exact mapped bytes E8 3E E1 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        inc ebp
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x587a5ca3
        __asm _emit 0x74
        __asm _emit 0x79
        test ebp, ebp
        ; Exact mapped bytes 74 1B: je 0x587a5c49
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebp
        lea eax, [esp + 18h]
        push eax
        push edi
        ; Exact mapped bytes E8 86 0C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea eax, [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 6A 99 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test esi, esi
        ; Exact mapped bytes 74 17: je 0x587a5c64
        __asm _emit 0x74
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x587a5c64
        __asm _emit 0x74
        __asm _emit 0x13
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 67 0C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 4F 99 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [edi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 4
        push eax
        push edi
        mov dword ptr [edi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 20 0C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [esp + 64h]
        pop esi
        pop edi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 9E B3 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 58h
        ret
        push 588b8ed0h
        push edi
        ; Exact mapped bytes E8 BF 91 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8ee8h
        push edi
        ; Exact mapped bytes E8 B4 91 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
