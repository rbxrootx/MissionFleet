// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AD5C0 .. +0x345 bytes.
extern "C" __declspec(naked) void FUN_587ad5c0_587AD5C0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov ebp, dword ptr [esp + 18h]
        lea edi, [esi + 6ch]
        nop
        mov eax, dword ptr [esi + 74h]
        cmp eax, 102h
        ; Exact mapped bytes 77 28: ja 0x587ad602
        __asm _emit 0x77
        __asm _emit 0x28
        push esi
        ; Exact mapped bytes E8 30 03 00 00: call 0x587ad910
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        add esp, 4
        mov ebx, edi
        cmp eax, 102h
        ; Exact mapped bytes 77 0B: ja 0x587ad5fa
        __asm _emit 0x77
        __asm _emit 0x0b
        test ebp, ebp
        ; Exact mapped bytes 0F 84 FD 01 00 00: je 0x587ad7f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x587ad7fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esi + 60h], 0
        cmp eax, 3
        ; Exact mapped bytes 72 69: jb 0x587ad679
        __asm _emit 0x72
        __asm _emit 0x69
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 63: je 0x587ad679
        __asm _emit 0x74
        __asm _emit 0x63
        mov edi, dword ptr [esi + 38h]
        add edi, ecx
        mov eax, edi
        mov cl, byte ptr [edi - 1]
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 55: jne 0x587ad679
        __asm _emit 0x75
        __asm _emit 0x55
        cmp cl, byte ptr [eax + 1]
        ; Exact mapped bytes 75 50: jne 0x587ad679
        __asm _emit 0x75
        __asm _emit 0x50
        add eax, 2
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 49: jne 0x587ad679
        __asm _emit 0x75
        __asm _emit 0x49
        lea edx, [edi + 102h]
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 27: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x27
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 22: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x22
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 1D: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x1d
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 18: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x18
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 13: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x13
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 0E: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x0e
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 09: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x09
        inc eax
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 75 04: jne 0x587ad662
        __asm _emit 0x75
        __asm _emit 0x04
        cmp eax, edx
        ; Exact mapped bytes 72 D4: jb 0x587ad636
        __asm _emit 0x72
        __asm _emit 0xd4
        sub eax, edx
        lea edx, [eax + 102h]
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [esi + 60h], edx
        cmp edx, eax
        ; Exact mapped bytes 76 05: jbe 0x587ad679
        __asm _emit 0x76
        __asm _emit 0x05
        mov dword ptr [esi + 60h], eax
        mov edx, eax
        xor ebx, ebx
        lea edi, [esi + 6ch]
        cmp edx, 3
        ; Exact mapped bytes 0F 82 8A 00 00 00: jb 0x587ad711
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16a0h]
        sub dl, 3
        mov ecx, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 1
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        inc ecx
        mov dword ptr [esi + 16a0h], ecx
        mov byte ptr [ecx + eax], bl
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        inc ecx
        mov dword ptr [esi + 16a0h], ecx
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        movzx eax, byte ptr [eax + 588bc578h]
        ; Exact mapped bytes 66 FF 84 86 98 04 00 00: inc word ptr [esi + eax*4 + 0x498]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 78 C6 8B 58: movzx eax, byte ptr [0x588bc678]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 FF 84 86 88 09 00 00: inc word ptr [esi + eax*4 + 0x988]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16a0h]
        cmp eax, dword ptr [esi + 16a4h]
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [edi]
        sete bl
        sub dword ptr [esi + 74h], ecx
        add edx, ecx
        mov dword ptr [edi], edx
        mov dword ptr [esi + 60h], 0
        ; Exact mapped bytes EB 6C: jmp 0x587ad77d
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi + 38h]
        mov dl, byte ptr [ecx + eax]
        mov eax, dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        inc ecx
        mov dword ptr [esi + 16a0h], ecx
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        inc ecx
        mov dword ptr [esi + 16a0h], ecx
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        ; Exact mapped bytes 66 FF 84 86 94 00 00 00: inc word ptr [esi + eax*4 + 0x94]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16a0h]
        cmp eax, dword ptr [esi + 16a4h]
        sete bl
        dec dword ptr [esi + 74h]
        inc dword ptr [edi]
        mov edx, dword ptr [edi]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 4B FE FF FF: je 0x587ad5d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 78 07: js 0x587ad793
        __asm _emit 0x78
        __asm _emit 0x07
        mov eax, dword ptr [esi + 38h]
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x587ad795
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        sub edx, ecx
        push edx
        push eax
        push esi
        ; Exact mapped bytes E8 9F 2B 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 7F 2B 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ad7e8
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C2 F0 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ad7e8
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 85 D4 FD FF FF: jne 0x587ad5c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov dword ptr [esi + 16b4h], 0
        cmp ebp, 4
        ; Exact mapped bytes 75 77: jne 0x587ad881
        __asm _emit 0x75
        __asm _emit 0x77
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ad818
        __asm _emit 0x78
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 38h]
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587ad81a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ebx]
        push 1
        sub eax, edx
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 18 2B 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 F8 2A 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ad86f
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B F0 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ad86f
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [esi]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        cmp dword ptr [ecx + 10h], eax
        pop ebx
        setne al
        add eax, 2
        ret
        cmp dword ptr [esi + 16a0h], 0
        ; Exact mapped bytes 74 71: je 0x587ad8fb
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ad898
        __asm _emit 0x78
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 38h]
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587ad89a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ebx]
        push 0
        sub eax, edx
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 98 2A 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 78 2A 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ad8ef
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BB EF 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ad8ef
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 F9 FE FF FF: je 0x587ad7f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    }
}
