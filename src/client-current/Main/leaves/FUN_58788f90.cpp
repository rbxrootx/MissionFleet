// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58788F90 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_58788f90() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 3B: je 0x58788fd6
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [esi + 54h]
        push edi
        mov edi, 1
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58788fd8
        __asm _emit 0x74
        __asm _emit 0x30
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        sub ecx, edi
        xor eax, eax
        cmp dword ptr [esi + 50h], ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58788fd8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        ; Exact mapped bytes E8 5B 9C 17 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A4 9C 17 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ret
        add dword ptr [esi + 58h], edi
        mov eax, dword ptr [esi + 58h]
        cdq
        idiv dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x58789007
        __asm _emit 0x74
        __asm _emit 0x21
        add dword ptr [esi + 50h], edi
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes E8 41 3C 1F 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        mov ecx, esi
        sub edi, edx
        push edi
        ; Exact mapped bytes E8 59 9E 17 00: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 8E 9E 17 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 BC: je 0x58788fd5
        __asm _emit 0x74
        __asm _emit 0xbc
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58789038
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58789020
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
