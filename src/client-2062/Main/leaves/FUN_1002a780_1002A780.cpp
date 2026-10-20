// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A780 .. +0x170 bytes.
extern "C" __declspec(naked) void FUN_1002a780_1002A780() {
    __asm {
        push -1
        push 1016db73h
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes E8 EB 41 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        xor ebp, ebp
        mov dword ptr [ebx], 1017571ch
        mov dword ptr [esp + 1ch], ebp
        lea esi, [ebx + 50h]
        mov dword ptr [esp + 38h], 4
        push 58h
        ; Exact mapped bytes E8 BD 1F 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1f
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7B: je 0x1002a870
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 3dh
        ; Exact mapped bytes 7E 10: jle 0x1002a813
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x1002a813
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebp, [eax + 0f40h]
        ; Exact mapped bytes 66 8B 43 26: mov ax, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push 0
        push 0
        push eax
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 82 41 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x1002a86c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x1002a872
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi], edi
        ; Exact mapped bytes E8 DB 48 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 93 48 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi - 4]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esi + 2ch], ebp
        dec eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x1002a7dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [ebx + 98h], ebp
        mov dword ptr [ebx + 90h], ebp
        mov dword ptr [ebx + 0a4h], ebp
        pop esi
        mov dword ptr [ebx + 94h], 1
        mov dword ptr [ebx + 9ch], 4
        mov eax, ebx
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
