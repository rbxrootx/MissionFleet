// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849800 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58849800() {
    __asm {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 9ch]
        sub eax, dword ptr [ebp + 98h]
        test eax, 0fffffffch
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x588498d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebp + 98h]
        cmp edi, dword ptr [ebp + 9ch]
        ; Exact mapped bytes 76 05: jbe 0x5884982e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 44 34 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 8ch]
        push ebx
        ; Exact mapped bytes EB 08: jmp 0x58849840
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ebx, dword ptr [ebp + 9ch]
        cmp dword ptr [ebp + 98h], ebx
        ; Exact mapped bytes 76 05: jbe 0x58849853
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F 34 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8ch]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58849861
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x58849866
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 0C 34 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 74 60: je 0x588498ca
        __asm _emit 0x74
        __asm _emit 0x60
        test esi, esi
        ; Exact mapped bytes 75 36: jne 0x588498a4
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes E8 FF 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5884987f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 F3 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 22: jne 0x588498ac
        __asm _emit 0x75
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x588498a8
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 DF 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5884989f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 D3 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        add edi, 4
        ; Exact mapped bytes EB 9C: jmp 0x58849840
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CD: jmp 0x58849875
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x58849895
        __asm _emit 0xeb
        __asm _emit 0xe9
        test esi, esi
        ; Exact mapped bytes 75 16: jne 0x588498c6
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 BD 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 72 05: jb 0x588498bf
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B3 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        pop ebx
        pop esi
        pop edi
        pop ebp
        ret
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB EB: jmp 0x588498b5
        __asm _emit 0xeb
        __asm _emit 0xeb
        pop ebx
        pop esi
        pop edi
    }
}
