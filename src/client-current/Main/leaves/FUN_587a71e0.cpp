// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A71E0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_587a71e0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        lea esi, [ecx + 0ch]
        mov dword ptr [esp + 10h], 8
        lea edi, [ebx + 1]
        mov ecx, dword ptr [esi - 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 31: je 0x587a722d
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx + 14ch]
        add eax, edi
        cdq
        mov ebp, 3
        idiv ebp
        mov dword ptr [ecx + 14ch], edx
        cmp edx, ebx
        ; Exact mapped bytes 74 17: je 0x587a722d
        __asm _emit 0x74
        __asm _emit 0x17
        cmp edx, edi
        ; Exact mapped bytes 75 08: jne 0x587a7222
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ecx + 148h], edi
        ; Exact mapped bytes EB 0B: jmp 0x587a722d
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edx, 2
        ; Exact mapped bytes 75 06: jne 0x587a722d
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 148h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 31: je 0x587a7264
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx + 14ch]
        add eax, edi
        cdq
        mov ebp, 3
        idiv ebp
        mov dword ptr [ecx + 14ch], edx
        cmp edx, ebx
        ; Exact mapped bytes 74 17: je 0x587a7264
        __asm _emit 0x74
        __asm _emit 0x17
        cmp edx, edi
        ; Exact mapped bytes 75 08: jne 0x587a7259
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ecx + 148h], edi
        ; Exact mapped bytes EB 0B: jmp 0x587a7264
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edx, 2
        ; Exact mapped bytes 75 06: jne 0x587a7264
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 148h], ebx
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 31: je 0x587a729c
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx + 14ch]
        add eax, edi
        cdq
        mov ebp, 3
        idiv ebp
        mov dword ptr [ecx + 14ch], edx
        cmp edx, ebx
        ; Exact mapped bytes 74 17: je 0x587a729c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp edx, edi
        ; Exact mapped bytes 75 08: jne 0x587a7291
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ecx + 148h], edi
        ; Exact mapped bytes EB 0B: jmp 0x587a729c
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edx, 2
        ; Exact mapped bytes 75 06: jne 0x587a729c
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 148h], ebx
        mov ecx, dword ptr [esi + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 31: je 0x587a72d4
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx + 14ch]
        add eax, edi
        cdq
        mov ebp, 3
        idiv ebp
        mov dword ptr [ecx + 14ch], edx
        cmp edx, ebx
        ; Exact mapped bytes 74 17: je 0x587a72d4
        __asm _emit 0x74
        __asm _emit 0x17
        cmp edx, edi
        ; Exact mapped bytes 75 08: jne 0x587a72c9
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ecx + 148h], edi
        ; Exact mapped bytes EB 0B: jmp 0x587a72d4
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edx, 2
        ; Exact mapped bytes 75 06: jne 0x587a72d4
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 148h], ebx
        add esi, 10h
        sub dword ptr [esp + 10h], edi
        ; Exact mapped bytes 0F 85 14 FF FF FF: jne 0x587a71f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58999940h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push ebx
        push 800h
        ; Exact mapped bytes E8 FF 18 04 00: call 0x587e8c00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
