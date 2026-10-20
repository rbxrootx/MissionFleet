// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094BBA .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_10094bba_10094BBA() {
    __asm {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov ecx, 6
        xor eax, eax
        lea edi, [esp + 10h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esp + 10h]
        mov edx, dword ptr [esp + 2ch]
        mov al, byte ptr [ebx + edx]
        cmp al, 3bh
        ; Exact mapped bytes 74 0F: je 0x10094bea
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 30h]
        dec edx
        cmp ebx, edx
        ; Exact mapped bytes 74 06: je 0x10094bea
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ecx], al
        inc ebx
        inc ecx
        ; Exact mapped bytes EB E6: jmp 0x10094bd0
        __asm _emit 0xeb
        __asm _emit 0xe6
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + 10h]
        push eax
        push 101ad0e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x10094c42
        __asm _emit 0x74
        __asm _emit 0x42
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 84 01 00 00: call 0x10094d90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 6ch]
        test esi, esi
        ; Exact mapped bytes 74 2F: je 0x10094c42
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10094c2e
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 E7: jne 0x10094c13
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 14: jmp 0x10094c42
        __asm _emit 0xeb
        __asm _emit 0x14
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x10094c42
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [esp + 10h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EE 7F FB FF: call 0x1004cc30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esp + 30h]
        dec edx
        cmp ebx, edx
        ; Exact mapped bytes 74 06: je 0x10094c51
        __asm _emit 0x74
        __asm _emit 0x06
        inc ebx
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x10094bbf
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x10094c74
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 0F BF 85 DC 00 00 00: movsx eax, word ptr [ebp + 0xdc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 07: je 0x10094c74
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebp
        ; Exact mapped bytes E8 9C 03 00 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        push 1
        push 0ee49h
        push ebp
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop ebp
        add esp, 18h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
