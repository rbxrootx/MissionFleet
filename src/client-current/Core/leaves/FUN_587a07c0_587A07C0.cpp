// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A07C0 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_587a07c0_587A07C0() {
    __asm {
        sub esp, 0ech
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0e8h], eax
        push ebx
        mov ebx, dword ptr [esp + 0fch]
        lea eax, [esp + 28h]
        push ebp
        mov ebp, dword ptr [esp + 104h]
        push esi
        mov esi, dword ptr [esp + 100h]
        push edi
        mov edi, dword ptr [esp + 100h]
        push 588b80e0h
        push 0
        push 0c4h
        push eax
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes E8 02 EB FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push eax
        add eax, 4fh
        push eax
        lea eax, [esp + 50h]
        push eax
        ; Exact mapped bytes E8 F2 EA FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b80ech
        push eax
        lea eax, [esp + 5ch]
        push 0c4h
        push eax
        ; Exact mapped bytes E8 DD EA FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, ebx
        add esp, 30h
        shr ecx, 18h
        mov esi, eax
        mov dword ptr [esp + 14h], ecx
        cmp ecx, 20h
        ; Exact mapped bytes 74 26: je 0x587a086c
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ecx, 30h
        ; Exact mapped bytes 72 05: jb 0x587a0850
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ecx, 39h
        ; Exact mapped bytes 76 1C: jbe 0x587a086c
        __asm _emit 0x76
        __asm _emit 0x1c
        cmp ecx, 41h
        ; Exact mapped bytes 72 05: jb 0x587a085a
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ecx, 5ah
        ; Exact mapped bytes 76 12: jbe 0x587a086c
        __asm _emit 0x76
        __asm _emit 0x12
        cmp ecx, 61h
        ; Exact mapped bytes 0F 82 04 01 00 00: jb 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 7ah
        ; Exact mapped bytes 0F 87 FB 00 00 00: ja 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        shr eax, 10h
        mov dword ptr [esp + 18h], eax
        movzx eax, al
        cmp eax, 20h
        ; Exact mapped bytes 74 26: je 0x587a08a3
        __asm _emit 0x74
        __asm _emit 0x26
        cmp eax, 30h
        ; Exact mapped bytes 72 05: jb 0x587a0887
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 39h
        ; Exact mapped bytes 76 1C: jbe 0x587a08a3
        __asm _emit 0x76
        __asm _emit 0x1c
        cmp eax, 41h
        ; Exact mapped bytes 72 05: jb 0x587a0891
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 5ah
        ; Exact mapped bytes 76 12: jbe 0x587a08a3
        __asm _emit 0x76
        __asm _emit 0x12
        cmp eax, 61h
        ; Exact mapped bytes 0F 82 CD 00 00 00: jb 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7ah
        ; Exact mapped bytes 0F 87 C4 00 00 00: ja 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        and eax, 0ff00h
        cmp eax, 2000h
        ; Exact mapped bytes 74 32: je 0x587a08e3
        __asm _emit 0x74
        __asm _emit 0x32
        cmp eax, 3000h
        ; Exact mapped bytes 72 07: jb 0x587a08bf
        __asm _emit 0x72
        __asm _emit 0x07
        cmp eax, 3900h
        ; Exact mapped bytes 76 24: jbe 0x587a08e3
        __asm _emit 0x76
        __asm _emit 0x24
        cmp eax, 4100h
        ; Exact mapped bytes 72 07: jb 0x587a08cd
        __asm _emit 0x72
        __asm _emit 0x07
        cmp eax, 5a00h
        ; Exact mapped bytes 76 16: jbe 0x587a08e3
        __asm _emit 0x76
        __asm _emit 0x16
        cmp eax, 6100h
        ; Exact mapped bytes 0F 82 8F 00 00 00: jb 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7a00h
        ; Exact mapped bytes 0F 87 84 00 00 00: ja 0x587a0967
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, bl
        push eax
        ; Exact mapped bytes E8 94 EC FF FF: call 0x5879f580
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x587a0967
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esp + 14h]
        add ecx, -20h
        cmp ecx, 5eh
        movzx eax, al
        mov ebx, 3fh
        mov byte ptr [esp + esi + 34h], 27h
        mov edx, ebx
        ; Exact mapped bytes 66 C7 44 34 39 27 3A: mov word ptr [esp + esi + 0x39], 0x3a27
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x3a
        cmovbe edx, eax
        mov eax, dword ptr [esp + 18h]
        movzx eax, al
        mov byte ptr [esp + esi + 35h], dl
        mov edx, ebx
        lea ecx, [eax - 20h]
        cmp ecx, 5eh
        cmovbe edx, eax
        mov eax, dword ptr [esp + 10h]
        shr eax, 8
        movzx eax, al
        mov byte ptr [esp + esi + 36h], dl
        mov edx, ebx
        lea ecx, [eax - 20h]
        cmp ecx, 5eh
        cmovbe edx, eax
        mov eax, dword ptr [esp + 10h]
        movzx eax, al
        mov byte ptr [esp + esi + 37h], dl
        lea ecx, [eax - 20h]
        cmp ecx, 5eh
        cmovbe ebx, eax
        mov byte ptr [esp + esi + 38h], bl
        mov byte ptr [esp + esi + 3bh], 20h
        add esi, 8
        ; Exact mapped bytes EB 3D: jmp 0x587a09a4
        __asm _emit 0xeb
        __asm _emit 0x3d
        push ebx
        push 3
        lea eax, [esp + 3ch]
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes E8 47 E6 FF FF: call 0x5879efc0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push esi
        lea eax, [esp + 4ch]
        push 0c4h
        push eax
        ; Exact mapped bytes E8 86 E9 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b80f0h
        push eax
        lea eax, [esp + 5ch]
        push 0c4h
        push eax
        ; Exact mapped bytes E8 71 E9 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        mov esi, eax
        push ebp
        push esi
        lea eax, [esp + 3ch]
        push 0c4h
        push eax
        ; Exact mapped bytes E8 5B E9 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 44h]
        push eax
        push edi
        ; Exact mapped bytes E8 C0 E2 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 110h]
        add esp, 18h
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 79 06 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ech
        ret
    }
}
