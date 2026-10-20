// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9490 .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_587a9490_587A9490() {
    __asm {
        sub esp, 1ch
        push edi
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [edi + 2b0h]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x587a94ea
        __asm _emit 0x74
        __asm _emit 0x48
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x587a94bd
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push dword ptr [esp + 30h]
        push edi
        ; Exact mapped bytes E8 7D 04 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        pop edi
        add esp, 1ch
        ret
        dec eax
        mov dword ptr [edi + 2b0h], eax
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x587a94ea
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push dword ptr [esp + 30h]
        push edi
        ; Exact mapped bytes E8 5B 04 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9918h
        push edi
        ; Exact mapped bytes E8 A0 57 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        xor eax, eax
        pop edi
        add esp, 1ch
        ret
        push ebx
        mov ebx, dword ptr [esp + 30h]
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes E8 39 0C 00 00: call 0x587aa130
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 75 1F: jne 0x587a951f
        __asm _emit 0x75
        __asm _emit 0x1f
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 28 04 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9760h
        push edi
        ; Exact mapped bytes E8 6D 57 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop ebx
        xor eax, eax
        pop edi
        add esp, 1ch
        ret
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes E8 C9 DD FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes E8 81 60 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 F7 03 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x587a9516
        __asm _emit 0x75
        __asm _emit 0xd6
        push esi
        xor esi, esi
        test ebx, ebx
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x587a968b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + ebp], 0
        ; Exact mapped bytes 74 05: je 0x587a955b
        __asm _emit 0x74
        __asm _emit 0x05
        inc esi
        cmp esi, ebx
        ; Exact mapped bytes 72 F5: jb 0x587a9550
        __asm _emit 0x72
        __asm _emit 0xf5
        cmp esi, 4fh
        ; Exact mapped bytes 0F 87 27 01 00 00: ja 0x587a968b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 0F 82 1E 01 00 00: jb 0x587a968b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 3]
        cmp eax, ebx
        ; Exact mapped bytes 76 19: jbe 0x587a958d
        __asm _emit 0x76
        __asm _emit 0x19
        mov eax, 588b80a0h
        push eax
        push edi
        ; Exact mapped bytes E8 00 57 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
        cmp byte ptr [esi + ebp + 1], 0
        ; Exact mapped bytes 74 19: je 0x587a95ad
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, 588b9930h
        push eax
        push edi
        ; Exact mapped bytes E8 E0 56 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
        push 1
        lea eax, [esp + 34h]
        mov dword ptr [esp + 34h], 0ffffffffh
        push eax
        lea eax, [esi + 2]
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 D9 04 00 00: call 0x587a9aa0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x587a9671
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 2d0h]
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x587a95f6
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, 588b994ch
        push eax
        push edi
        ; Exact mapped bytes E8 97 56 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
        mov ecx, dword ptr [esp + 30h]
        push 1
        lea eax, [ecx + esi]
        mov byte ptr [eax + edx + 2], 0
        lea eax, [edx + 2]
        add eax, esi
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 1ch], eax
        lea eax, [esp + 14h]
        push eax
        push dword ptr [esp + 3ch]
        mov dword ptr [esp + 20h], edx
        push edi
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 30h], 0
        mov dword ptr [esp + 34h], 0
        mov dword ptr [esp + 38h], 0
        ; Exact mapped bytes E8 CC 85 FF FF: call 0x587a1c10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x587a9658
        __asm _emit 0x75
        __asm _emit 0x0d
        pop esi
        pop ebp
        pop ebx
        mov eax, 3
        pop edi
        add esp, 1ch
        ret
        mov eax, 588b9760h
        push eax
        push edi
        ; Exact mapped bytes E8 1C 56 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
        mov eax, dword ptr [edi + 9ch]
        push eax
        push edi
        ; Exact mapped bytes E8 02 56 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
        mov eax, 588b9788h
        push eax
        push edi
        ; Exact mapped bytes E8 E9 55 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 1ch
        ret
    }
}
