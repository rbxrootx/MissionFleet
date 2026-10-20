// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00448547 .. +0x3D0 bytes.
extern "C" __declspec(naked) void FUN_00448547_00448547() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 18h], 3
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 35 B2 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 2B 03 00 00: je 0x4488c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 19h
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 FF B1 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 02 00 00: je 0x448873
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 19h
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 C9 B1 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 71 02 00 00: je 0x448873
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 8d0h], 0
        ; Exact mapped bytes 74 15: je 0x448644
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        ; Exact mapped bytes E8 3B 9F 02 00: call 0x47257f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 19: je 0x448669
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x4487b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4ch], 2
        ; Exact mapped bytes 0F 84 DF 01 00 00: je 0x448843
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 01 00 00: jmp 0x44885a
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x44868d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1ah
        push 8000010ah
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AA EB 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x4487ac
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        shl eax, 8
        or eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        push edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 CE 07 0A 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x448795
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9A B2 FB FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x44877c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 2A: jne 0x44871f
        __asm _emit 0x75
        __asm _emit 0x2a
        push 5
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7D 3A 00 00: call 0x44c17c
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x44871f
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 18 EB 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x448871
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 56 E5 FF FF: call 0x446c7d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 A1 00 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x44875c
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D8 EA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x44877a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB AC FB FF: call 0x403415
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0
        push 80025003h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 B8 EA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x448793
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9F EA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4487ac
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 86 EA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x448871
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 71: jne 0x448828
        __asm _emit 0x75
        __asm _emit 0x71
        mov dword ptr [ebp - 3ch], 19h
        mov dword ptr [ebp - 40h], 1
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        mov dword ptr [ebp - 44h], ecx
        lea edx, [ebp - 3ch]
        push edx
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 DE AF FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x44880d
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cach]
        ; Exact mapped bytes E8 34 F0 FE FF: call 0x43783f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x448826
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1bh
        push 8000010ah
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0C EA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x448841
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1bh
        push 8000010ah
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F1 E9 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x448871
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cach]
        ; Exact mapped bytes E8 44 EF FE FF: call 0x43779c
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x448871
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C1 E9 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x4488bf
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        push eax
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 150h
        push ecx
        push 5b69d0h
        push 5b6a50h
        push 5d3fb0h
        ; Exact mapped bytes E8 7F AF 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 73 E9 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 3F: jmp 0x448900
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 150h
        push ecx
        push 5b6a64h
        push 5b6ac4h
        push 5d3fb0h
        ; Exact mapped bytes E8 3E AF 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 32 E9 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CF FE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
