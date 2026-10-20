// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F3E0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0042f3e0_0042F3E0() {
    __asm {
        push -1
        push 58b99bh
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
        mov ebx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], ebp
        lea eax, [ebx + 1]
        mov dword ptr [esi + 8], ebp
        cmp eax, 7fffffffh
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 77 38: ja 0x42f454
        __asm _emit 0x77
        __asm _emit 0x38
        cmp eax, ebp
        ; Exact mapped bytes 76 34: jbe 0x42f454
        __asm _emit 0x76
        __asm _emit 0x34
        lea edi, [eax + eax]
        cmp edi, 80h
        push edi
        ; Exact mapped bytes 76 14: jbe 0x42f440
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes E8 2F D0 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add edi, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes EB 21: jmp 0x42f461
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 7B 4B 00 00: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add edi, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes EB 0D: jmp 0x42f461
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 A2 6B 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi]
        cmp ebx, ebp
        ; Exact mapped bytes 76 21: jbe 0x42f488
        __asm _emit 0x76
        __asm _emit 0x21
        mov eax, dword ptr [esp + 28h]
        mov ecx, ebx
        ; Exact mapped bytes 66 8B E8: mov bp, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xe8
        mov edi, edx
        shl ebp, 10h
        ; Exact mapped bytes 66 8B E8: mov bp, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xe8
        lea edx, [edx + ebx*2]
        mov eax, ebp
        shr ecx, 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        adc ecx, ecx
        xor ebp, ebp
        ; Exact mapped bytes 66 F3 AB: rep stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 4], edx
        mov eax, esi
        pop edi
        ; Exact mapped bytes 66 89 2A: mov word ptr [edx], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x2a
        pop esi
        pop ebp
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
