// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F3B9 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_0042f3b9_0042F3B9() {
    __asm {
        mov eax, 43a884h
        ; Exact mapped bytes E8 45 02 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, 43dc08h
        mov dword ptr [ebp - 10h], esp
        push esi
        push edi
        ; Exact mapped bytes FF 15 5C C4 43 00: call dword ptr [0x43c45c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [ebp - 14h], 0
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 0ch]
        push 1
        sub eax, 6
        pop ebx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x42f4a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1ah
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x42f482
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 62h
        ; Exact mapped bytes 74 5A: je 0x42f45e
        __asm _emit 0x74
        __asm _emit 0x5a
        sub eax, 8eh
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x42f4c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 C3 FE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 30h]
        push eax
        push esi
        ; Exact mapped bytes E8 7F FB FF FF: call 0x42efa4
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push 110h
        push edi
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 30h]
        push eax
        push esi
        ; Exact mapped bytes E8 7D FB FF FF: call 0x42efc7
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push dword ptr [ebp - 18h]
        push -4
        push edi
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes FF 15 64 C4 43 00: call dword ptr [0x43c464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 F0 C1 43 00: call dword ptr [0x43c1f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 00 C2 43 00: call dword ptr [0x43c200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 3F: jmp 0x42f4c1
        __asm _emit 0xeb
        __asm _emit 0x3f
        push edi
        ; Exact mapped bytes E8 50 FE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        shr ecx, 10h
        push ecx
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        push ecx
        push eax
        ; Exact mapped bytes E8 07 FC FF FF: call 0x42f0a1
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        test eax, eax
        sete bl
        ; Exact mapped bytes EB 1A: jmp 0x42f4bd
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 2D FE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov esi, eax
        ; Exact mapped bytes E8 25 FE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 83 FB FF FF: call 0x42f040
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 89: je 0x42f44a
        __asm _emit 0x74
        __asm _emit 0x89
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push edi
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x42f44a
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
