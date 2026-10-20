// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793F20 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_58793f20() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x58793fea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], 2
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58793fcc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 7E 3C: jle 0x58793f7c
        __asm _emit 0x7e
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58793f4d
        __asm _emit 0x74
        __asm _emit 0x06
        movzx edx, word ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x58793f4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov eax, dword ptr [esi + 50h]
        dec edx
        cmp eax, edx
        ; Exact mapped bytes 75 70: jne 0x58793fc7
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 5ch], 1
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58793f6c
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 68h]
        test ecx, ecx
        ; Exact mapped bytes 74 59: je 0x58793fcc
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 28: jmp 0x58793fa4
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 7D 4E: jge 0x58793fcc
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x58793fc7
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 5ch], eax
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58793f96
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 68h]
        test ecx, ecx
        ; Exact mapped bytes 74 2F: je 0x58793fcc
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub ecx, dword ptr [esi + 8]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 68h]
        sub eax, 190h
        push eax
        ; Exact mapped bytes E8 3B 34 02 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x58793fcc
        __asm _emit 0xeb
        __asm _emit 0x05
        add eax, ecx
        mov dword ptr [esi + 50h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58793fea
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58793fec
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58793fd4
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
