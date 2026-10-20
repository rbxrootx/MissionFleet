// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CEBC0 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_584cebc0_584CEBC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 06: je 0x584cebdf
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x584cebe7
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x584ced31
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 118h], eax
        lea ecx, [ebp - 118h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 CD 87 FB FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes E8 5D 0E 00 00: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 3D: jne 0x584cec57
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 110h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp + 18h]
        cmp eax, 10h
        ; Exact mapped bytes 72 20: jb 0x584cec57
        __asm _emit 0x72
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 51 FF FF FF: call 0x584ceba0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x584ced31
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 0E 01 00 00: call 0x584ced70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 37 0E 00 00: call 0x584cfab0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 59: je 0x584cecd9
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 108h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584ceca0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        sub eax, 1
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [ecx]
        push edx
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 3B 0E 00 00: call 0x584cfaf0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x584cecc7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 108h]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 6A: jmp 0x584ced31
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 108h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x584cecd7
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 5A: jmp 0x584ced31
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes EB B8: jmp 0x584cec91
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 10ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x584cecf9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        sub eax, 1
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 93 0F 00 00: call 0x584cfca0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x584ced1f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10ch]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 12: jmp 0x584ced31
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x584ced2f
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x584ced31
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B9: jmp 0x584cecea
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 15 23 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x23
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
