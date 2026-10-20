// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587933A0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_587933a0_587933A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x5879351f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587933e4
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587933e4
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5879344d
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58793407
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587933ed
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 22 D0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5879342b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5879344d
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5879344b
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 21 D0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x21
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587933ed
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB F9 FF FF: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5879346a
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 0C 75 FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5879351f
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 12: je 0x58793488
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5879351f
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 15 CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 FC FF FF: call 0x587930e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 0F: jne 0x587934b4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        ; Exact mapped bytes EB 6B: jmp 0x5879351f
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 39: jne 0x587934fb
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0ah
        ; Exact mapped bytes 75 16: jne 0x587934f9
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 38 81 FF FF: call 0x5878b630
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x5879351f
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 6A 74 FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 88h], edx
        mov esp, ebp
    }
}
