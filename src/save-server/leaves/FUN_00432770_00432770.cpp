// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432770 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00432770_00432770() {
    __asm {
        push -1
        push 58ba38h
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
        xor edx, edx
        push edi
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], edx
        mov dword ptr [esi + 4], edx
        mov dword ptr [esi + 8], edx
        mov ebx, dword ptr [esp + 20h]
        xor ecx, ecx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 66 39 13: cmp word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x13
        ; Exact mapped bytes 74 0B: je 0x4327b3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, ebx
        add eax, 2
        inc ecx
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 75 F7: jne 0x4327aa
        __asm _emit 0x75
        __asm _emit 0xf7
        push ebp
        lea ebp, [ebx + ecx*2]
        mov edi, ebp
        mov dword ptr [esp + 24h], ebp
        sub edi, ebx
        mov eax, edi
        sar eax, 1
        inc eax
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 2F: ja 0x4327fa
        __asm _emit 0x77
        __asm _emit 0x2f
        cmp eax, edx
        ; Exact mapped bytes 76 2B: jbe 0x4327fa
        __asm _emit 0x76
        __asm _emit 0x2b
        lea ebp, [eax + eax]
        cmp ebp, 80h
        push ebp
        ; Exact mapped bytes 76 07: jbe 0x4327e2
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes E8 80 9C 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4327e7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 D9 17 00 00: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add ebp, eax
        mov dword ptr [esi + 8], ebp
        mov ebp, dword ptr [esp + 24h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 0D: jmp 0x432807
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 FC 37 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi]
        cmp ebp, ebx
        pop ebp
        ; Exact mapped bytes 74 0D: je 0x43281b
        __asm _emit 0x74
        __asm _emit 0x0d
        push edi
        push ebx
        push eax
        ; Exact mapped bytes E8 4A 34 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        add eax, edi
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
