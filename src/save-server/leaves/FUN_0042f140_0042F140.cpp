// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F140 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_0042f140_0042F140() {
    __asm {
        push -1
        push 58b960h
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
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 14h], ebx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        sub eax, ecx
        sar eax, 1
        cmp edx, eax
        ; Exact mapped bytes 76 22: jbe 0x42f1a3
        __asm _emit 0x76
        __asm _emit 0x22
        push 670a18h
        ; Exact mapped bytes E8 15 6C 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push ebp
        push edi
        mov edi, dword ptr [esp + 2ch]
        sub eax, edx
        mov dword ptr [esp + 24h], eax
        cmp eax, edi
        lea eax, [esp + 24h]
        ; Exact mapped bytes 72 04: jb 0x42f1bb
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 2ch]
        mov eax, dword ptr [eax]
        lea edi, [ecx + edx*2]
        add eax, edx
        mov dword ptr [esp + 24h], edi
        lea eax, [ecx + eax*2]
        sub eax, edi
        mov ebp, eax
        sar ebp, 1
        lea eax, [ebp + 1]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 0F 87 88 00 00 00: ja 0x42f265
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x42f265
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + eax]
        cmp ebx, 80h
        ; Exact mapped bytes 76 17: jbe 0x42f207
        __asm _emit 0x76
        __asm _emit 0x17
        push ebx
        ; Exact mapped bytes E8 6A D2 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        add ebx, eax
        add esp, 4
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        xor ebx, ebx
        ; Exact mapped bytes EB 6B: jmp 0x42f272
        __asm _emit 0xeb
        __asm _emit 0x6b
        lea ecx, [ebx - 1]
        shr ecx, 3
        lea edi, [ecx*4 + 685054h]
        mov ecx, 685094h
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes E8 FE 0D 00 00: call 0x430020
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 1ch], 1
        mov edi, dword ptr [edi]
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x42f237
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [edi]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0B: jmp 0x42f242
        __asm _emit 0xeb
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 43 57 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        mov ecx, 685094h
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes E8 BF 0E 00 00: call 0x430110
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        mov edi, dword ptr [esp + 24h]
        add ebx, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 4], eax
        xor ebx, ebx
        ; Exact mapped bytes EB 0D: jmp 0x42f272
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 91 6D 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi]
        cmp ebp, ebx
        mov ecx, edi
        ; Exact mapped bytes 7E 0F: jle 0x42f289
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        add ecx, 2
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, 2
        dec ebp
        ; Exact mapped bytes 75 F1: jne 0x42f27a
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 66 89 18: mov word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x18
        pop edi
        mov eax, esi
        pop ebp
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
