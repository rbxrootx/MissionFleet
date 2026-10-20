// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFB40 .. +0x249 bytes.
extern "C" __declspec(naked) void FUN_584efb40_584EFB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 174h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 130h], ecx
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 40000h
        ; Exact mapped bytes 74 02: je 0x584efb82
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3D: jmp 0x584efbbf
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx + 0ch]
        and eax, 80000h
        ; Exact mapped bytes 74 2D: je 0x584efbbf
        __asm _emit 0x74
        __asm _emit 0x2d
        lea ecx, [ebp - 13ch]
        push ecx
        push 2
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 5A FD FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E7 F8 FF FF: call 0x584ef4a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 39: je 0x584efc01
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 25: je 0x584efbf6
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        ; Exact mapped bytes E8 62 14 34 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 138h]
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x584efd79
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 09: je 0x584efc13
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 75 72: jne 0x584efc85
        __asm _emit 0x75
        __asm _emit 0x72
        mov dword ptr [ebp - 138h], 8
        mov dword ptr [ebp - 170h], 1
        mov dword ptr [ebp - 168h], 8
        push 2
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 C2 FC FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 148h], ecx
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 174h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 3ch
        ; Exact mapped bytes E8 5D 84 F9 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x584efd45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 3ch
        ; Exact mapped bytes E8 71 17 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax, 128h
        cmp edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 0F 83 84 00 00 00: jae 0x584efd45
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 128h
        push 0
        lea eax, [ebp - 12ch]
        push eax
        ; Exact mapped bytes E8 3C D1 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 14ch], ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 3ch
        ; Exact mapped bytes E8 2F 17 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax, 128h
        mov dword ptr [ebp - 150h], edx
        push 128h
        mov eax, dword ptr [ebp - 14ch]
        add eax, dword ptr [ebp - 150h]
        push eax
        lea ecx, [ebp - 12ch]
        push ecx
        ; Exact mapped bytes E8 75 CB 35 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcb
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 130h]
        add edx, 3ch
        mov dword ptr [ebp - 154h], edx
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 91 16 00 00: call 0x584f13d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x584efca1
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 25: je 0x584efd73
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        ; Exact mapped bytes E8 E5 12 34 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 138h]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CB 12 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
