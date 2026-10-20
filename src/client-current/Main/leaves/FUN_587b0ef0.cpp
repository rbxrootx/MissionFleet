// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0EF0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_587b0ef0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebx, ebx
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x587b0f0c
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x587b1024
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x587b1024
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 74 19: je 0x587b0f40
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [esi + 104h]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esi + 104h]
        push edx
        push eax
        ; Exact mapped bytes E8 00 07 FF FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 104h]
        xor eax, 0aaaaaaaah
        push ebp
        lea ebp, [esi + 104h]
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x587b1023
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 74 19: je 0x587b0f75
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 9ch]
        lea eax, [esi + 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 CB 06 FF FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        cmp eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 7D 0B: jge 0x587b0f8e
        __asm _emit 0x7d
        __asm _emit 0x0b
        inc eax
        pop ebp
        mov dword ptr [esi + 98h], eax
        pop esi
        pop ebx
        ret
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 74 73: je 0x587b1007
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [esi + 138h]
        mov ecx, dword ptr [esi + 88h]
        push edx
        add ecx, 34ch
        ; Exact mapped bytes E8 D4 50 F8 FF: call 0x58736080
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 55: jne 0x587b1007
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov edi, dword ptr [eax + 2e4h]
        test edi, edi
        ; Exact mapped bytes 74 44: je 0x587b1006
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 9fh
        push 0
        push 5898cde8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 BF 9B FC FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 2e4h]
        push 10101h
        push 1
        push 58999eb0h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 9A 9B FC FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        mov dword ptr [ebp], 0eaaaaaaah
        test ebx, ebx
        ; Exact mapped bytes 74 11: je 0x587b1023
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0eaaaaaaah
        push ebp
        ; Exact mapped bytes E8 BD 05 FF FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop esi
        pop ebx
        ret
    }
}
