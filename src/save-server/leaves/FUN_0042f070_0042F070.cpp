// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F070 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0042f070_0042F070() {
    __asm {
        push -1
        push 58b943h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 18h]
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], ebp
        inc eax
        mov dword ptr [esi + 8], ebp
        cmp eax, 7fffffffh
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 77 6F: ja 0x42f117
        __asm _emit 0x77
        __asm _emit 0x6f
        cmp eax, ebp
        ; Exact mapped bytes 76 6B: jbe 0x42f117
        __asm _emit 0x76
        __asm _emit 0x6b
        push edi
        lea edi, [eax + eax]
        cmp edi, 80h
        ; Exact mapped bytes 76 16: jbe 0x42f0ce
        __asm _emit 0x76
        __asm _emit 0x16
        push edi
        ; Exact mapped bytes E8 A2 D3 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add edi, eax
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        pop edi
        ; Exact mapped bytes EB 56: jmp 0x42f124
        __asm _emit 0xeb
        __asm _emit 0x56
        lea ecx, [edi - 1]
        push ebx
        shr ecx, 3
        push 685094h
        lea ebx, [ecx*4 + 685054h]
        ; Exact mapped bytes E8 1A 35 00 00: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [esp + 1ch], 1
        mov eax, dword ptr [ebx]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x42f0fa
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [eax]
        mov dword ptr [ebx], edx
        ; Exact mapped bytes EB 09: jmp 0x42f103
        __asm _emit 0xeb
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 80 58 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 89 2D 94 50 68 00: mov dword ptr [0x685094], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add edi, eax
        pop ebx
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        pop edi
        ; Exact mapped bytes EB 0D: jmp 0x42f124
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 DF 6E 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 89 28: mov word ptr [eax], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x28
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
