// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754360 .. +0x2B5 bytes.
extern "C" __declspec(naked) void FUN_58754360() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5897e7f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 81ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 14h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5875439e
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 16: jmp 0x587543b4
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebx + 14h]
        sub edx, eax
        mov eax, 7f807f81h
        imul edx
        sar edx, 0ah
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x58754612
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 10h]
        mov edx, ecx
        sub edx, dword ptr [ebx + 0ch]
        mov eax, 7f807f81h
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, 1fe01fh
        sub edx, eax
        mov dword ptr [ebp - 820h], ecx
        cmp edx, edi
        ; Exact mapped bytes 73 05: jae 0x587543ee
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 72 22 1A 00: call 0x588f6660
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x00
        add eax, edi
        cmp esi, eax
        ; Exact mapped bytes 0F 83 39 01 00 00: jae 0x58754531
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        shr ecx, 1
        mov edx, 1fe01fh
        sub edx, ecx
        cmp edx, esi
        ; Exact mapped bytes 73 04: jae 0x5875440b
        __asm _emit 0x73
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 02: jmp 0x5875440d
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        cmp esi, eax
        ; Exact mapped bytes 73 02: jae 0x58754413
        __asm _emit 0x73
        __asm _emit 0x02
        mov esi, eax
        push 0
        push esi
        ; Exact mapped bytes E8 A5 EF FF FF: call 0x587533c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebx + 0ch]
        mov ecx, eax
        mov eax, 7f807f81h
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 824h], eax
        imul eax, eax, 808h
        add esp, 8
        push edx
        add eax, ecx
        push edi
        mov dword ptr [ebp - 820h], ecx
        push eax
        mov ecx, ebx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 E1 F2 FF FF: call 0x58753740
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0ch]
        mov byte ptr [ebp - 828h], 0
        mov edx, dword ptr [ebp - 828h]
        push edx
        mov edx, dword ptr [ebp - 824h]
        push edx
        mov edx, dword ptr [ebp + 0ch]
        lea ecx, [ebx + 8]
        push ecx
        mov ecx, dword ptr [ebp - 820h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes E8 34 F1 FF FF: call 0x587535c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 824h]
        mov ecx, dword ptr [ebx + 10h]
        add eax, edi
        imul eax, eax, 808h
        add eax, dword ptr [ebp - 820h]
        add esp, 18h
        mov byte ptr [ebp - 824h], 0
        mov edx, dword ptr [ebp - 824h]
        push edx
        mov edx, dword ptr [ebp - 824h]
        push edx
        lea edx, [ebx + 8]
        push edx
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 F6 F0 FF FF: call 0x587535c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0ch]
        mov edx, dword ptr [ebx + 10h]
        sub edx, ecx
        mov eax, 7f807f81h
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add esp, 18h
        add edi, eax
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x587544f5
        __asm _emit 0x74
        __asm _emit 0x09
        push ecx
        ; Exact mapped bytes E8 50 87 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 820h]
        imul esi, esi, 808h
        imul edi, edi, 808h
        add esi, eax
        add edi, eax
        mov dword ptr [ebx + 14h], esi
        mov dword ptr [ebx + 10h], edi
        mov dword ptr [ebx + 0ch], eax
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x58754612
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 820h]
        push ecx
        ; Exact mapped bytes E8 1D 87 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        push 0
        push 0
        ; Exact mapped bytes E8 47 87 22 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x00
        sub ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 14h]
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, edi
        mov ecx, 202h
        lea edi, [ebp - 81ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 73 72: jae 0x587545cb
        __asm _emit 0x73
        __asm _emit 0x72
        mov edi, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 820h]
        mov esi, edi
        imul esi, esi, 808h
        lea ecx, [esi + eax]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 96 F8 FF FF: call 0x58753e10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 10h]
        sub ecx, dword ptr [ebp + 0ch]
        lea eax, [ebp - 81ch]
        push eax
        mov eax, 7f807f81h
        imul ecx
        mov eax, dword ptr [ebx + 10h]
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        sub edi, ecx
        push edi
        push eax
        mov ecx, ebx
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 93 F1 FF FF: call 0x58753740
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebx + 10h], esi
        mov ebx, dword ptr [ebx + 10h]
        mov eax, dword ptr [ebp + 0ch]
        lea edx, [ebp - 81ch]
        push edx
        sub ebx, esi
        push ebx
        push eax
        ; Exact mapped bytes E8 9A EF FF FF: call 0x58753560
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 47: jmp 0x58754612
        __asm _emit 0xeb
        __asm _emit 0x47
        mov esi, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 820h]
        imul esi, esi, 808h
        push eax
        mov edi, eax
        push eax
        sub edi, esi
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 28 F8 FF FF: call 0x58753e10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 820h]
        mov edx, dword ptr [ebp + 0ch]
        push ecx
        push edi
        push edx
        mov dword ptr [ebx + 10h], eax
        ; Exact mapped bytes E8 34 F0 FF FF: call 0x58753630
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 81ch]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        add esi, eax
        push esi
        push eax
        ; Exact mapped bytes E8 51 EF FF FF: call 0x58753560
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp - 0ch]
    }
}
