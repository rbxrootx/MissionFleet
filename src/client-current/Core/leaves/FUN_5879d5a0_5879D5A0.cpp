// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879D5A0 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_5879d5a0_5879D5A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891f55h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b8h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [ebp - 74h]
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edi
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 0c4h], 588a40d4h
        ; Exact mapped bytes E8 8B 88 D6 FF: call 0x58505e80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0xff
        push 0
        push 0
        lea eax, [ebp - 0c0h]
        mov dword ptr [ebp - 4], 0
        push eax
        lea ecx, [ebp - 0c4h]
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes E8 27 FD D7 FF: call 0x5851d340
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push 8
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + eax - 0c4h], 588a40d0h
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax + 4]
        lea eax, [ecx - 50h]
        mov dword ptr [ebp + ecx - 0c8h], eax
        mov dword ptr [ebp - 0c0h], 588a3d04h
        ; Exact mapped bytes 0F 11 85 44 FF FF FF: movups xmmword ptr [ebp - 0xbc], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 11 85 54 FF FF FF: movups xmmword ptr [ebp - 0xac], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 11 85 64 FF FF FF: movups xmmword ptr [ebp - 0x9c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 94 39 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        test esi, esi
        ; Exact mapped bytes 74 13: je 0x5879d68c
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 97 2F 09 00: call 0x5883061b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 02: jmp 0x5879d68e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        lea ecx, [ebp - 0c0h]
        mov dword ptr [ebp - 8ch], esi
        ; Exact mapped bytes E8 61 BD D6 FF: call 0x58509400
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], 588a3d44h
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 84h], 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], 3
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 0c4h]
        push ecx
        push dword ptr [ebp - 18h]
        mov ecx, esi
        mov byte ptr [ebp - 4], 4
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 84h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, edx
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 11 07: movups xmmword ptr [edi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x07
        and al, 22h
        mov dword ptr [edi + 10h], 0
        mov dword ptr [edi + 14h], 0fh
        mov byte ptr [edi], 0
        mov dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 66 0F D6 45 D8: movq qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 20h], 0
        cmp al, 2
        ; Exact mapped bytes 74 25: je 0x5879d749
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x5879d749
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0b0h]
        cmp ecx, dword ptr [ebp - 88h]
        cmovb ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax]
        sub ecx, edx
        ; Exact mapped bytes EB 2B: jmp 0x5879d774
        __asm _emit 0xeb
        __asm _emit 0x2b
        test dl, 4
        ; Exact mapped bytes 75 20: jne 0x5879d76e
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5879d76e
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [eax]
        sub ecx, edx
        mov eax, dword ptr [ebp - 94h]
        add ecx, dword ptr [eax]
        ; Exact mapped bytes EB 06: jmp 0x5879d774
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 28h]
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5879d781
        __asm _emit 0x74
        __asm _emit 0x09
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 7F A9 D2 FF: call 0x584c8100
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x5879d78d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        mov ecx, esi
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 78 04 D8 FF: call 0x5851dc10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, edi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
