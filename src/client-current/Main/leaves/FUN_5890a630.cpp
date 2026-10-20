// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A630 .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_5890a630() {
    __asm {
        sub esp, 24h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x5890a83d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push edi
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 23: je 0x5890a672
        __asm _emit 0x74
        __asm _emit 0x23
        nop
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1B: jge 0x5890a672
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 DE: jne 0x5890a650
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x5890a818
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 3ch]
        add eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [esi + 10h]
        mov edx, dword ptr [esi + 14h]
        add ecx, dword ptr [esi + 8]
        push ebx
        mov ebx, dword ptr [esi + 18h]
        add ebx, ecx
        mov dword ptr [esp + 28h], ebx
        mov ebx, dword ptr [esi + 1ch]
        add edx, eax
        add ebx, eax
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 20h]
        add eax, ecx
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ecx]
        cmp edx, ecx
        mov dword ptr [esp + 24h], edx
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 7D 06: jge 0x5890a6ce
        __asm _emit 0x7d
        __asm _emit 0x06
        mov edx, ecx
        mov dword ptr [esp + 24h], edx
        mov ecx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ecx + 4]
        cmp dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 7D 04: jge 0x5890a6df
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 28h], ecx
        mov ecx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ecx + 8]
        cmp ebx, ecx
        ; Exact mapped bytes 7E 06: jle 0x5890a6f0
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebx, ecx
        mov dword ptr [esp + 2ch], ebx
        mov ecx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ecx + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 06: jle 0x5890a701
        __asm _emit 0x7e
        __asm _emit 0x06
        mov eax, ecx
        mov dword ptr [esp + 30h], eax
        cmp edx, ebx
        ; Exact mapped bytes 0F 8D 0E 01 00 00: jge 0x5890a817
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 8D 04 01 00 00: jge 0x5890a817
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp dword ptr [esi + 88h], ebx
        ; Exact mapped bytes 7E 40: jle 0x5890a75d
        __asm _emit 0x7e
        __asm _emit 0x40
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [edx + 8]
        lea eax, [esp + 28h]
        push eax
        mov eax, dword ptr [esi + 68h]
        push eax
        mov eax, dword ptr [esi + 64h]
        push eax
        mov eax, dword ptr [esi + 60h]
        push eax
        push 5898c978h
        lea eax, [esp + 2ch]
        push eax
        mov eax, dword ptr [ebp + 50h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 58h]
        add dword ptr [esp + 14h], eax
        inc ebx
        cmp ebx, dword ptr [esi + 88h]
        ; Exact mapped bytes 7C C3: jl 0x5890a720
        __asm _emit 0x7c
        __asm _emit 0xc3
        inc dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        test dl, 1
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x5890a817
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 2
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5890a817
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5890a78f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x5890a791
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 44h]
        lea ecx, [esp + 10h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esp + 10h]
        lea eax, [esp + 1ch]
        push eax
        push 0
        push 5898c978h
        push ecx
        ; Exact mapped bytes FF 15 48 C0 98 58: call dword ptr [0x5898c048]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5890a7c1
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x5890a7c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 68h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [ebp + 50h], 0
        ; Exact mapped bytes 74 41: je 0x5890a817
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [esi + 88h]
        imul eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ebp + 50h]
        mov ebx, dword ptr [ecx]
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [esi + 50h]
        mov esi, dword ptr [esp + 18h]
        push 0
        push 100h
        push ecx
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        lea ecx, [ecx + esi - 3]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        add edx, eax
        add edx, ecx
        add eax, ecx
        mov ecx, dword ptr [ebp + 50h]
        push edx
        push eax
        mov eax, dword ptr [ebx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebx
        test edi, edi
        ; Exact mapped bytes 74 1F: je 0x5890a83b
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E5: jne 0x5890a820
        __asm _emit 0x75
        __asm _emit 0xe5
        pop edi
        pop ebp
        pop esi
        add esp, 24h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
