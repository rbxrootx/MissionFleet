// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414A80 .. +0x52A bytes.
extern "C" __declspec(naked) void FUN_00414a80_00414A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 0F 84 AF 04 00 00: je 0x414f5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10ch], 0
        ; Exact mapped bytes 0F 84 9F 04 00 00: je 0x414f5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 110h], 0
        ; Exact mapped bytes 0F 84 8F 04 00 00: je 0x414f5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 0F 84 7F 04 00 00: je 0x414f5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8000h
        ; Exact mapped bytes 75 05: jne 0x414af3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 67 04 00 00: jmp 0x414f5a
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8001h
        ; Exact mapped bytes 0F 85 D4 03 00 00: jne 0x414edc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80010f0fh
        ; Exact mapped bytes 0F 87 B1 00 00 00: ja 0x414bcf
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f0fh
        ; Exact mapped bytes 0F 84 07 03 00 00: je 0x414e32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f07h
        ; Exact mapped bytes 77 7B: ja 0x414baf
        __asm _emit 0x77
        __asm _emit 0x7b
        cmp dword ptr [ebp - 8], 80010f07h
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x414d9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f00h
        ; Exact mapped bytes 77 39: ja 0x414b83
        __asm _emit 0x77
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 80010f00h
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x414cf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 800100f0h
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x414c8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 8001040ah
        ; Exact mapped bytes 0F 84 DA 01 00 00: je 0x414d4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 8001040dh
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x414d60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 57 03 00 00: jmp 0x414eda
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f04h
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x414d0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f05h
        ; Exact mapped bytes 0F 84 84 01 00 00: je 0x414d21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010f06h
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x414d8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2B 03 00 00: jmp 0x414eda
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ffef0f7h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 15 03 00 00: ja 0x414eda
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 AA 4F 41 00: jmp dword ptr [edx*4 + 0x414faa]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80010fa1h
        ; Exact mapped bytes 77 2C: ja 0x414c04
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 8], 80010fa1h
        ; Exact mapped bytes 0F 84 CB 02 00 00: je 0x414eb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 7ffef0f0h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 87 E0 02 00 00: ja 0x414eda
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D C2 4F 41 00: jmp dword ptr [ecx*4 + 0x414fc2]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 8001a001h
        ; Exact mapped bytes 77 4C: ja 0x414c59
        __asm _emit 0x77
        __asm _emit 0x4c
        cmp dword ptr [ebp - 8], 8001a001h
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x414d75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80011034h
        ; Exact mapped bytes 77 24: ja 0x414c47
        __asm _emit 0x77
        __asm _emit 0x24
        cmp dword ptr [ebp - 8], 80011034h
        ; Exact mapped bytes 74 77: je 0x414ca3
        __asm _emit 0x74
        __asm _emit 0x77
        cmp dword ptr [ebp - 8], 80010fa3h
        ; Exact mapped bytes 0F 84 8C 02 00 00: je 0x414ec5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80011004h
        ; Exact mapped bytes 74 76: je 0x414cb8
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x414eda
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 80016000h
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x414d36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 02 00 00: jmp 0x414eda
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 8001a002h
        ; Exact mapped bytes 74 17: je 0x414c79
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 8], 8001d000h
        ; Exact mapped bytes 74 62: je 0x414ccd
        __asm _emit 0x74
        __asm _emit 0x62
        cmp dword ptr [ebp - 8], 8001d200h
        ; Exact mapped bytes 74 6E: je 0x414ce2
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x414eda
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 C4 FE FF: call 0x40114f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE C7 FE FF: call 0x40149c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 F4 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 C3 FE FF: call 0x40109b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB C6 FE FF: call 0x401393
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 C9 FE FF: call 0x401663
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C CC FE FF: call 0x40192e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 A0 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D C8 FE FF: call 0x401564
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 C7 FE FF: call 0x401433
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 76 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F C4 FE FF: call 0x401190
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F CB FE FF: call 0x4018c5
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B C3 FE FF: call 0x401096
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 C6 FE FF: call 0x4013f2
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 C2 FE FF: call 0x40107d
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 02 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF C9 FE FF: call 0x401799
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 C5 FE FF: call 0x4012c1
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 C5 FE FF: call 0x401375
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 CD FE FF: call 0x401adc
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 C4 FE FF: call 0x401212
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D C4 FE FF: call 0x401230
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 C3 FE FF: call 0x401208
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D C4 FE FF: call 0x40128a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 C9 FE FF: call 0x401802
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D C2 FE FF: call 0x401064
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 3B 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B C4 FE FF: call 0x4012b7
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D C1 FE FF: call 0x40101e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 C2 FE FF: call 0x4010cd
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 C2 FE FF: call 0x4010eb
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE C1 FE FF: call 0x4010be
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F C1 FE FF: call 0x401014
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x414f97
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x414f5a
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 75 6D: jne 0x414f5a
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 7ffdf106h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 77 52: ja 0x414f5a
        __asm _emit 0x77
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 D6 4F 41 00: jmp dword ptr [edx*4 + 0x414fd6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 C5 FE FF: call 0x401465
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 73: jmp 0x414f97
        __asm _emit 0xeb
        __asm _emit 0x73
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 C8 FE FF: call 0x4017c6
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 61: jmp 0x414f97
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 C6 FE FF: call 0x401596
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 4F: jmp 0x414f97
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 C2 FE FF: call 0x4011a9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x414f97
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes EB 36: jmp 0x414f92
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8002h
        ; Exact mapped bytes 75 26: jne 0x414f92
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 80020effh
        ; Exact mapped bytes 74 02: je 0x414f80
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x414f92
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 C4 FE FF: call 0x401465
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x414f97
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 4C FE 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
