// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415FB9 .. +0x210 bytes.
extern "C" __declspec(naked) void FUN_00415fb9_00415FB9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x415fe6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 BA 01 00 00: jne 0x4161b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8001d000h
        ; Exact mapped bytes 77 20: ja 0x41602c
        __asm _emit 0x77
        __asm _emit 0x20
        cmp dword ptr [ebp - 8], 8001d000h
        ; Exact mapped bytes 74 61: je 0x416076
        __asm _emit 0x74
        __asm _emit 0x61
        cmp dword ptr [ebp - 8], 8001000fh
        ; Exact mapped bytes 74 3C: je 0x41605a
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 8], 80010109h
        ; Exact mapped bytes 74 17: je 0x41603e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 8001d200h
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x416113
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020010h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 11 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 11 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 2ch
        ; Exact mapped bytes 74 07: je 0x416086
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x4161b9
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 17 90 02 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4160b7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 2ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 2
        push 8002d020h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 11 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 5E B2 FE FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 2C: je 0x4160f7
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        push 2ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        push 8001d000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 39 B2 FE FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 40 11 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002d020h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 11 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4161b4
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 2ch
        ; Exact mapped bytes 77 07: ja 0x416123
        __asm _emit 0x77
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4161b9
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 7A 8F 02 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x416151
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 2ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        push 2
        push 8002d020h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 10 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x4161b4
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 C4 B1 FE FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 38: je 0x41619d
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 90 B1 FE FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 97 10 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4161b4
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002d020h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 10 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 1D 26 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
