// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425B30 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_00425b30_00425B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9ch]
        mov ecx, 27h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 60 FD 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 06 BC FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 75 07: jne 0x425b85
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x425c71
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 02 BF FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x425c6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 A4 BA FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x425bcf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x425c6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 6F BA FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 24h
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 FC BC FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x425c6a
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 56: jne 0x425c6a
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 4D BD FD FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, esp
        push 9
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 F1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 7B BA FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x425bc6
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 9ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6F F1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
