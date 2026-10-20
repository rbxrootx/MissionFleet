// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6C10 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_587d6c10() {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, 0a9h
        ; Exact mapped bytes 66 39 43 60: cmp word ptr [ebx + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x60
        ; Exact mapped bytes 75 08: jne 0x587d6c26
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esp + 0ch]
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        movzx eax, word ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 7E 70: jle 0x587d6ca4
        __asm _emit 0x7e
        __asm _emit 0x70
        push esi
        push edi
        mov esi, ebp
        mov edi, eax
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 60h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 FB FA FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 F8 FA FF: call 0x58786490
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov cl, byte ptr [esi]
        cmp cl, 1
        ; Exact mapped bytes 74 14: je 0x587d6c76
        __asm _emit 0x74
        __asm _emit 0x14
        cmp cl, 5
        ; Exact mapped bytes 74 0F: je 0x587d6c76
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp cl, 3
        ; Exact mapped bytes 74 0A: je 0x587d6c76
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 2
        ; Exact mapped bytes 74 05: je 0x587d6c76
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 6
        ; Exact mapped bytes 75 24: jne 0x587d6c9a
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 3B 05 A0 B4 A0 58: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 1C: jne 0x587d6c9a
        __asm _emit 0x75
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 76 18: jbe 0x587d6c9a
        __asm _emit 0x76
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 10h]
        imul edx, ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        sub ecx, edx
        mov dword ptr [esi + 8], ecx
        add esi, 14h
        sub edi, 1
        ; Exact mapped bytes 75 9E: jne 0x587d6c40
        __asm _emit 0x75
        __asm _emit 0x9e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
