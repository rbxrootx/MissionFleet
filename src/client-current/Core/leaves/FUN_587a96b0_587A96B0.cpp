// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A96B0 .. +0x255 bytes.
extern "C" __declspec(naked) void FUN_587a96b0_587A96B0() {
    __asm {
        sub esp, 24h
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        mov eax, dword ptr [ebp + 2b0h]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x587a970a
        __asm _emit 0x74
        __asm _emit 0x48
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x587a96dd
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push dword ptr [esp + 38h]
        push ebp
        ; Exact mapped bytes E8 5D 02 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        pop ebp
        add esp, 24h
        ret
        dec eax
        mov dword ptr [ebp + 2b0h], eax
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x587a970a
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push dword ptr [esp + 38h]
        push ebp
        ; Exact mapped bytes E8 3B 02 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9918h
        push ebp
        ; Exact mapped bytes E8 80 55 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        xor eax, eax
        pop ebp
        add esp, 24h
        ret
        push ebx
        push edi
        mov edi, dword ptr [esp + 3ch]
        lea eax, [edi + 1]
        push eax
        push ebp
        ; Exact mapped bytes E8 16 0A 00 00: call 0x587aa130
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        ; Exact mapped bytes 75 1F: jne 0x587a9742
        __asm _emit 0x75
        __asm _emit 0x1f
        push eax
        push edi
        push ebp
        ; Exact mapped bytes E8 05 02 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9760h
        push ebp
        ; Exact mapped bytes E8 4A 55 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop ebx
        xor eax, eax
        pop ebp
        add esp, 24h
        ret
        push edi
        push ebx
        push ebp
        ; Exact mapped bytes E8 A6 DB FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push ebx
        push ebp
        ; Exact mapped bytes E8 5E 5E FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push ebp
        ; Exact mapped bytes E8 D4 01 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x587a9739
        __asm _emit 0x75
        __asm _emit 0xd6
        push esi
        xor esi, esi
        test edi, edi
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x587a98ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        cmp byte ptr [ebx + esi], 0
        ; Exact mapped bytes 74 05: je 0x587a977b
        __asm _emit 0x74
        __asm _emit 0x05
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 F5: jb 0x587a9770
        __asm _emit 0x72
        __asm _emit 0xf5
        cmp esi, 4fh
        ; Exact mapped bytes 0F 87 68 01 00 00: ja 0x587a98ec
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 0F 82 5F 01 00 00: jb 0x587a98ec
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 5]
        cmp eax, edi
        ; Exact mapped bytes 76 19: jbe 0x587a97ad
        __asm _emit 0x76
        __asm _emit 0x19
        mov eax, 588b80a0h
        push eax
        push ebp
        ; Exact mapped bytes E8 E0 54 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        pop ebp
        add esp, 24h
        ret
        mov al, byte ptr [esi + ebx + 1]
        test al, al
        ; Exact mapped bytes 74 24: je 0x587a97d9
        __asm _emit 0x74
        __asm _emit 0x24
        cmp al, 1
        ; Exact mapped bytes 75 07: jne 0x587a97c0
        __asm _emit 0x75
        __asm _emit 0x07
        cmp byte ptr [esi + ebx + 2], 0
        ; Exact mapped bytes 74 19: je 0x587a97d9
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, 588b996ch
        push eax
        push ebp
        ; Exact mapped bytes E8 B4 54 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        pop ebp
        add esp, 24h
        ret
        add esi, 3
        mov dword ptr [esp + 14h], esi
        cmp esi, edi
        ; Exact mapped bytes 73 0B: jae 0x587a97ef
        __asm _emit 0x73
        __asm _emit 0x0b
        cmp byte ptr [ebx + esi], 0
        ; Exact mapped bytes 74 05: je 0x587a97ef
        __asm _emit 0x74
        __asm _emit 0x05
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 F5: jb 0x587a97e4
        __asm _emit 0x72
        __asm _emit 0xf5
        inc esi
        mov ecx, esi
        mov dword ptr [esp + 10h], ecx
        cmp esi, edi
        ; Exact mapped bytes 73 11: jae 0x587a980b
        __asm _emit 0x73
        __asm _emit 0x11
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebx + esi], 0
        ; Exact mapped bytes 74 05: je 0x587a980b
        __asm _emit 0x74
        __asm _emit 0x05
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 F5: jb 0x587a9800
        __asm _emit 0x72
        __asm _emit 0xf5
        inc esi
        test al, al
        ; Exact mapped bytes 75 17: jne 0x587a9827
        __asm _emit 0x75
        __asm _emit 0x17
        cmp esi, edi
        ; Exact mapped bytes 77 80: ja 0x587a9794
        __asm _emit 0x77
        __asm _emit 0x80
        sub edi, esi
        lea eax, [ebx + esi]
        mov byte ptr [eax + edi], 0
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes EB 5F: jmp 0x587a9886
        __asm _emit 0xeb
        __asm _emit 0x5f
        cmp esi, edi
        ; Exact mapped bytes 0F 83 65 FF FF FF: jae 0x587a9794
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea eax, [esp + 3ch]
        mov dword ptr [esp + 3ch], 0ffffffffh
        push eax
        push esi
        push edi
        push ebp
        ; Exact mapped bytes E8 5A 02 00 00: call 0x587a9aa0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 13: jne 0x587a9861
        __asm _emit 0x75
        __asm _emit 0x13
        mov edi, dword ptr [esp + 38h]
        mov ebx, dword ptr [ebp + 2d0h]
        lea eax, [esi + edi]
        mov byte ptr [eax + ebx], 0
        ; Exact mapped bytes EB 19: jmp 0x587a987a
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 9ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x587a98f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        lea eax, [ebx + edi]
        mov byte ptr [eax + esi], 0
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esp + 18h], 2
        mov eax, dword ptr [esp + 14h]
        add eax, ebx
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 2ch], eax
        lea eax, [ecx + ebx]
        mov dword ptr [esp + 30h], eax
        lea eax, [esi + ebx]
        mov dword ptr [esp + 20h], eax
        lea eax, [esp + 18h]
        push 1
        push eax
        push dword ptr [esp + 44h]
        mov dword ptr [esp + 30h], 0
        push ebp
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes E8 51 83 FF FF: call 0x587a1c10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x587a98d3
        __asm _emit 0x75
        __asm _emit 0x0d
        pop esi
        pop edi
        pop ebx
        mov eax, 3
        pop ebp
        add esp, 24h
        ret
        mov eax, 588b9760h
        push eax
        push ebp
        ; Exact mapped bytes E8 A1 53 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        pop ebp
        add esp, 24h
        ret
        mov eax, 588b9788h
        push eax
        push ebp
        ; Exact mapped bytes E8 88 53 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        pop ebp
        add esp, 24h
        ret
    }
}
