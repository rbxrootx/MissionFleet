// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460BDF .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_00460bdf_00460BDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 08 0D 00: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 63c7d0h
        ; Exact mapped bytes E8 FE 95 07 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x460c18
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x460d4f
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x460cc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C ED 0E 00: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 B3 95 07 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 02: jne 0x460c5e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x460c29
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1C: jne 0x460c80
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 11: je 0x460c7e
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 02: je 0x460c80
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB A9: jmp 0x460c29
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2C FB FF FF: call 0x4607b4
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x460cb3
        __asm _emit 0x74
        __asm _emit 0x27
        lea ecx, [ebp - 1ch]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 FB FF FF: call 0x460843
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x460ca7
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], 1
        ; Exact mapped bytes EB 09: jmp 0x460cbc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 02: jne 0x460cc4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x460cc9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x460c29
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 3B: jle 0x460d0a
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CD 77 0C 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0ffffh
        ; Exact mapped bytes 75 0E: jne 0x460cf1
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7F 77 0C 00: call 0x52846e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x460d00
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6E 77 0C 00: call 0x52846e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 37: je 0x460d4a
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        or al, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 14h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x460d4a
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        or edx, 8
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 14h], edx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
