// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879FBA0 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_5879fba0_5879FBA0() {
    __asm {
        push ebp
        lea ebp, [esp - 348h]
        sub esp, 3c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp + 344h], eax
        mov eax, dword ptr [ebp + 350h]
        push ebx
        mov ebx, dword ptr [ebp + 360h]
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp + 354h]
        push esi
        mov esi, dword ptr [ebp + 368h]
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp + 358h]
        push edi
        mov edi, dword ptr [ebp + 364h]
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp + 35ch]
        push 2f4h
        mov dword ptr [ebp - 78h], eax
        lea eax, [ebp - 70h]
        push 0
        push eax
        ; Exact mapped bytes E8 0C D2 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        push esi
        push edi
        lea eax, [ebp - 70h]
        mov dword ptr [ebp + 238h], 0f4240h
        push ebx
        push eax
        mov dword ptr [ebp + 23ch], 0f4240h
        mov dword ptr [ebp + 240h], 3e8h
        mov dword ptr [ebp + 244h], 7a1200h
        ; Exact mapped bytes E8 A8 6F 00 00: call 0x587a6be0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 78h]
        lea eax, [ebp - 70h]
        push dword ptr [ebp - 7ch]
        push dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 06 F7 FF FF: call 0x5879f350
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 284h]
        push 0
        push eax
        ; Exact mapped bytes E8 58 F0 0A 00: call 0x5884ecb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 34h
        test eax, eax
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x5879fda4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 74h]
        lea eax, [ebp + 284h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 30h], 5884ec9bh
        test ebx, ebx
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x5879fd44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 588b7678h
        lea ecx, [ebx - 1]
        xor esi, esi
        sub edi, ebx
        mov bl, byte ptr [ecx + edi + 1]
        lea ecx, [ecx + 1]
        cmp byte ptr [ecx], bl
        ; Exact mapped bytes 74 09: je 0x5879fca8
        __asm _emit 0x74
        __asm _emit 0x09
        or edx, 20000h
        mov dword ptr [ebp + 8], edx
        mov bh, byte ptr [ecx]
        lea eax, [esi + 1]
        cmp bh, 2eh
        cmovne eax, esi
        mov esi, eax
        cmp esi, 2
        ; Exact mapped bytes 7D 08: jge 0x5879fcc2
        __asm _emit 0x7d
        __asm _emit 0x08
        test bh, bh
        ; Exact mapped bytes 74 04: je 0x5879fcc2
        __asm _emit 0x74
        __asm _emit 0x04
        test bl, bl
        ; Exact mapped bytes 75 D2: jne 0x5879fc94
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ebx, dword ptr [ebp - 74h]
        test edx, 20000h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5879fd52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b7fb0h
        push 0
        lea eax, [ebp + 2c4h]
        push 80h
        push eax
        ; Exact mapped bytes E8 27 F6 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push eax
        lea eax, [ebp + 2c4h]
        push 80h
        push eax
        ; Exact mapped bytes E8 14 F6 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7fd0h
        push eax
        lea eax, [ebp + 2c4h]
        push 80h
        push eax
        ; Exact mapped bytes E8 FD F5 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7678h
        push eax
        lea eax, [ebp + 2c4h]
        push 80h
        push eax
        ; Exact mapped bytes E8 E6 F5 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 40h
        lea eax, [ebp + 2c4h]
        push eax
        lea eax, [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 F3 F6 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x5879fd57
        __asm _emit 0xeb
        __asm _emit 0x13
        or edx, 20000h
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5879fcc5
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5879fda4
        __asm _emit 0x74
        __asm _emit 0x49
        lea eax, [ebp - 70h]
        push 2f4h
        push eax
        ; Exact mapped bytes E8 67 6D 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5879fda4
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, 0bdh
        mov dword ptr [ebp + 34h], 587a0a20h
        lea esi, [ebp - 70h]
        mov dword ptr [ebp + 38h], 587a0a70h
        mov edi, eax
        mov dword ptr [ebp + 3ch], eax
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 02: jmp 0x5879fda6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 344h]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 9A 12 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        lea esp, [ebp + 348h]
        pop ebp
        ret
    }
}
