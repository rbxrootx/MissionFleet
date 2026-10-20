// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004329E0 .. +0x413 bytes.
extern "C" __declspec(naked) void FUN_004329e0_004329E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a8h
        push ebx
        push edi
        push ecx
        lea edi, [ebp - 1a8h]
        mov ecx, 6ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1a8h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 CE 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x432a2e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B0 03 00 00: jmp 0x432dde
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2ah
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 AC 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 97 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 30h
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 82 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2eh
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 6A 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 34h
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 52 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 3A 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x432ac7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 7D 77: jge 0x432b44
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 03 70 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + edx*4 - 1a0h], eax
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 130h]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 DD 6F FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + ecx*8 - 118h], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx + 132h]
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 B7 6F FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + edx*8 - 114h], eax
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x432abe
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x432b59
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        imul ecx, ecx, 3e8h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x432b6b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x432b7d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 2C: je 0x432bb2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 0A 01 00 00: mov cx, word ptr [eax + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [edx + 24h]
        imul eax, ecx
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 38: mov dx, word ptr [ecx + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x38
        imul eax, edx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 2C: je 0x432be7
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 0C 01 00 00: mov ax, word ptr [edx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ecx + 24h]
        imul edx, eax
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 36: mov cx, word ptr [eax + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x36
        imul edx, ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, edx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 2C: je 0x432c1c
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 11ch]
        mov ecx, dword ptr [eax + 24h]
        imul ecx, edx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 3C: mov ax, word ptr [edx + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x3c
        imul ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 29: je 0x432c4b
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 0E 01 00 00: mov cx, word ptr [eax + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        imul eax, ecx
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 3A: mov dx, word ptr [ecx + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x3a
        imul eax, edx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x432c5d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 8D 74 01 00 00: jge 0x432ddb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [ebp + eax*4 - 1a0h], 0
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x432dd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 84 0A 2E 01 00 00: mov ax, word ptr [edx + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x432d21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + ecx*4 - 1a0h]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ebp + ecx*8 - 118h], 0
        ; Exact mapped bytes 74 2A: je 0x432ce5
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + edx*8 - 118h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp + 8]
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 134h]
        mov eax, dword ptr [eax + 24h]
        imul eax, ebx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [ebp + edx*8 - 114h], 0
        ; Exact mapped bytes 74 2A: je 0x432d1c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + eax*8 - 114h]
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp + 8]
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 135h]
        mov ecx, dword ptr [ecx + 24h]
        imul ecx, ebx
        mov edx, dword ptr [ebp - 0ch]
        add edx, ecx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x432dd6
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 94 01 2E 01 00 00: mov dx, word ptr [ecx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 75 4C: jne 0x432d8d
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + eax*4 - 1a0h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [ebp + eax*8 - 118h], 0
        ; Exact mapped bytes 74 2A: je 0x432d8b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + ecx*8 - 118h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        xor ebx, ebx
        mov bl, byte ptr [ecx + eax + 134h]
        mov edx, dword ptr [edx + 24h]
        imul edx, ebx
        mov eax, dword ptr [ebp - 0ch]
        add eax, edx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 49: jmp 0x432dd6
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 84 0A 2E 01 00 00: mov ax, word ptr [edx + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 75 2A: jne 0x432dd6
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + ecx*4 - 1a0h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        xor ebx, ebx
        mov bl, byte ptr [ecx + eax + 134h]
        mov edx, dword ptr [edx + 24h]
        imul edx, ebx
        mov eax, dword ptr [ebp - 0ch]
        add eax, edx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 79 FE FF FF: jmp 0x432c54
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop ebx
        add esp, 1a8h
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 59 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
