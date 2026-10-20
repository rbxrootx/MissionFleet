// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094870 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_10094870_10094870() {
    __asm {
        sub esp, 24h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push esi
        push edi
        lea eax, [esp + 14h]
        mov edi, ecx
        push ebp
        push eax
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D A0 50 17 10: mov ebx, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 14h]
        push 101ad0e8h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x10094932
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 64h]
        test esi, esi
        ; Exact mapped bytes 74 24: je 0x100948d2
        __asm _emit 0x74
        __asm _emit 0x24
        lea edi, [ebp + 18h]
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100948c8
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x100948b1
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 06: jmp 0x100948ce
        __asm _emit 0xeb
        __asm _emit 0x06
        test esi, esi
        mov eax, esi
        ; Exact mapped bytes 75 3B: jne 0x10094909
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 6ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x10094a11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 18h]
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 6ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100948ff
        __asm _emit 0x74
        __asm _emit 0x11
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x100948e0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test esi, esi
        mov eax, esi
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x10094a11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0a4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x10094a11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        lea edx, [esp + 14h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C8 D7 FE FF: call 0x100820f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [edi + 64h]
        mov ebp, 1
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x1009495d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 70h]
        lea ecx, [esp + 14h]
        mov eax, dword ptr [eax + 6ch]
        push eax
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10094959
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 E7: jne 0x1009493e
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x1009495d
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 28: jne 0x10094985
        __asm _emit 0x75
        __asm _emit 0x28
        mov esi, dword ptr [edi + 6ch]
        test esi, esi
        ; Exact mapped bytes 74 19: je 0x1009497d
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1009497f
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 E7: jne 0x10094964
        __asm _emit 0x75
        __asm _emit 0xe7
        xor esi, esi
        xor ebp, ebp
        test esi, esi
        ; Exact mapped bytes 74 75: je 0x100949fa
        __asm _emit 0x74
        __asm _emit 0x75
        mov ecx, dword ptr [esi + 0a4h]
        test ecx, ecx
        ; Exact mapped bytes 75 5A: jne 0x100949e9
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ebx, dword ptr [esp + 3ch]
        push ecx
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 10101h
        push ebx
        ; Exact mapped bytes E8 BA DA F7 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 91 0A 00 00: call 0x10095440
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x100949cc
        __asm _emit 0x74
        __asm _emit 0x17
        push 1
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 61 D3 FE FF: call 0x10081d20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [esp + 14h]
        push ebx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 24 D7 FE FF: call 0x100820f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 500h
        ; Exact mapped bytes 75 31: jne 0x10094a11
        __asm _emit 0x75
        __asm _emit 0x31
        push ebp
        lea ecx, [esp + 18h]
        push ebx
        push ecx
        ; Exact mapped bytes EB 1D: jmp 0x10094a06
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ebx, dword ptr [esp + 3ch]
        lea edx, [esp + 14h]
        push ebx
        push edx
        ; Exact mapped bytes E8 F8 D6 FE FF: call 0x100820f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB D6: jmp 0x100949d0
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 3ch]
        push 0
        lea eax, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EF BE FE FF: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
