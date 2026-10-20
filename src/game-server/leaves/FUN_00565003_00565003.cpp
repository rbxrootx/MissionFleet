// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565003 .. +0x171 bytes.
extern "C" __declspec(naked) void FUN_00565003_00565003() {
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
        ; Exact mapped bytes 75 07: jne 0x56502d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x56516b
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58aaa8h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 60 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x565052
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 5d0bb4h
        ; Exact mapped bytes E8 B3 F9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565052
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56502d
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 F1 0C FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 F4 0F FD FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C5 7F FD FF: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 13bh
        push 5d0bb4h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 D6 60 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 57 D9 F9 FF: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CB D8 F9 FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0e900h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 32 98 F8 FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x5650cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 5d0bb4h
        ; Exact mapped bytes E8 39 F9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5650cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5650b2
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
        ; Exact mapped bytes E8 10 0E FD FF: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0xfd
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
