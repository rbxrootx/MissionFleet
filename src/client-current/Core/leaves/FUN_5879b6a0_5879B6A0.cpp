// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B6A0 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_5879b6a0_5879B6A0() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 24h]
        mov esi, ecx
        mov ecx, edi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes E8 18 F5 FF FF: call 0x5879abd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esp + 1ch], ebp
        lea ecx, [ebp*2]
        add ecx, ebp
        cmp ecx, dword ptr [esi + 2ch]
        lea ecx, [esi + 8]
        mov esi, dword ptr [ecx]
        setae bl
        mov dword ptr [esp + 10h], ecx
        cmp esi, eax
        ; Exact mapped bytes 74 1E: je 0x5879b6fb
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, eax
        nop
        mov ecx, esi
        ; Exact mapped bytes E8 49 E6 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        add esi, 18h
        cmp esi, edi
        ; Exact mapped bytes 75 F2: jne 0x5879b6e0
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx + 4], eax
        xor esi, esi
        test ebp, ebp
        ; Exact mapped bytes 74 42: je 0x5879b743
        __asm _emit 0x74
        __asm _emit 0x42
        test bl, bl
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x5879b811
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DF DA FF FF: call 0x587991f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov ecx, edi
        ; Exact mapped bytes E8 A6 F0 FF FF: call 0x5879a7c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 0B: jne 0x5879b729
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 AB F0 FF FF: call 0x5879a7d0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 0F: je 0x5879b738
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, edi
        ; Exact mapped bytes E8 80 EB FF FF: call 0x5879a2b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 04: jne 0x5879b738
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 1
        ; Exact mapped bytes EB 02: jmp 0x5879b73a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor bl, bl
        mov edi, dword ptr [esp + 24h]
        inc esi
        cmp esi, ebp
        ; Exact mapped bytes 72 BE: jb 0x5879b701
        __asm _emit 0x72
        __asm _emit 0xbe
        test bl, bl
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x5879b811
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push ebp
        ; Exact mapped bytes E8 7B 05 F5 FF: call 0x586ebcd0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        lea ecx, [ebp*2 + 2]
        xor esi, esi
        mov dword ptr [esp + 18h], ecx
        mov al, byte ptr [edx + 94h]
        or al, 1
        mov byte ptr [edx + 94h], al
        test ebp, ebp
        ; Exact mapped bytes 74 71: je 0x5879b7e9
        __asm _emit 0x74
        __asm _emit 0x71
        xor ebp, ebp
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 68 DA FF FF: call 0x587991f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 0D F0 FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 1A: jne 0x5879b7b1
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 00 F0 FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 0D: jne 0x5879b7b1
        __asm _emit 0x75
        __asm _emit 0x0d
        push 2
        mov ecx, edi
        ; Exact mapped bytes E8 F3 EF FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 02: je 0x5879b7b3
        __asm _emit 0x74
        __asm _emit 0x02
        mov bl, 1
        mov edi, dword ptr [esp + 24h]
        mov ecx, edi
        push esi
        ; Exact mapped bytes E8 31 DA FF FF: call 0x587991f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        push eax
        ; Exact mapped bytes E8 E7 1F 00 00: call 0x5879d7b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        inc esi
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [esp + 18h]
        add ecx, dword ptr [eax + ebp + 10h]
        add ebp, 18h
        mov dword ptr [esp + 18h], ecx
        cmp esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 72 9B: jb 0x5879b780
        __asm _emit 0x72
        __asm _emit 0x9b
        mov edx, dword ptr [esp + 14h]
        and byte ptr [edx + 94h], 0feh
        test bl, bl
        ; Exact mapped bytes 75 11: jne 0x5879b805
        __asm _emit 0x75
        __asm _emit 0x11
        cmp ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes 73 0C: jae 0x5879b805
        __asm _emit 0x73
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
