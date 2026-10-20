// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AF03 .. +0x171 bytes.
extern "C" __declspec(naked) void FUN_0056af03_0056AF03() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 07: jne 0x56af2d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x56b06b
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 63d0d0h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 F2 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56af52
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 67d38ch
        ; Exact mapped bytes E8 F3 DD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56af52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56af2d
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 67 72 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 4C 75 FC FF: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 25 1B FC FF: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 13bh
        push 67d38ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 D6 F2 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 37 CA F7 FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AB C9 F7 FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0e900h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C2 AD F6 FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x56afcc
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 67d38ch
        ; Exact mapped bytes E8 79 DD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56afcc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x56afb2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 30h]
        add eax, 104h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], edx
        push 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 104h]
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 108h]
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 28h]
        add edx, ecx
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 10ch]
        mov edx, dword ptr [ebp - 24h]
        sub edx, ecx
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax + 110h]
        mov edx, dword ptr [ebp - 20h]
        sub edx, ecx
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 68 73 FC FF: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 92 18 01 00 00: call dword ptr [edx + 0x118]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
