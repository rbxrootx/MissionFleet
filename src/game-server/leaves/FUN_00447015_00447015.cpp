// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447015 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_00447015_00447015() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8d0h], 0
        ; Exact mapped bytes 74 31: je 0x447073
        __asm _emit 0x74
        __asm _emit 0x31
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8d0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8d0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 72 17 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x44707a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8e8h], 0
        ; Exact mapped bytes 74 1F: je 0x4470a5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 9A 70 03 00: call 0x47e13a
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4470ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8000h
        ; Exact mapped bytes 75 05: jne 0x4470c1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x44729c
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8001h
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x44724b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 80010027h
        ; Exact mapped bytes 77 2D: ja 0x447115
        __asm _emit 0x77
        __asm _emit 0x2d
        cmp dword ptr [ebp - 10h], 80010027h
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x447193
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 7ffeffech
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 0F 87 06 01 00 00: ja 0x447211
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 B2 72 44 00: jmp dword ptr [eax*4 + 0x4472b2]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x72
        __asm _emit 0x44
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80015000h
        ; Exact mapped bytes 77 24: ja 0x447142
        __asm _emit 0x77
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 80015000h
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x4471fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80010030h
        ; Exact mapped bytes 74 20: je 0x447154
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 10h], 800100a2h
        ; Exact mapped bytes 74 41: je 0x44717e
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x447211
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80017ff0h
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x4471e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x447211
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 07 00 00: call 0x447939
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 07 00 00: call 0x44796c
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 0C 00 00: call 0x447df6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 0D 00 00: call 0x447eed
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 0D 00 00: call 0x447f5a
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 0E 00 00: call 0x447ff9
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 13 00 00: call 0x448547
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 17 00 00: call 0x448917
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 18 00 00: call 0x448a87
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x4472a1
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        cmp dword ptr [edx + 40cc4h], 0
        ; Exact mapped bytes 74 22: je 0x447242
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cc4h]
        ; Exact mapped bytes E8 62 51 FC FF: call 0x40c39f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x447249
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 51: jmp 0x44729c
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8002h
        ; Exact mapped bytes 75 41: jne 0x44729c
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 80020a00h
        ; Exact mapped bytes 74 0B: je 0x447278
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 18h], 80025002h
        ; Exact mapped bytes 74 14: je 0x44728a
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 24: jmp 0x44729c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 16 00 00: call 0x448942
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4472a1
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 16 00 00: call 0x448982
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4472a1
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 34 15 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
