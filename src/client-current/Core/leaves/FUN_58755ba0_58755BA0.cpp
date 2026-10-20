// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58755BA0 .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_58755ba0_58755BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 8], al
        cmp byte ptr [ebp - 8], 5
        ; Exact mapped bytes 74 19: je 0x58755bce
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x58755c5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 8], 0dh
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x58755ce6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x58755d6f
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 11 DA FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 30h], 0
        ; Exact mapped bytes 74 29: je 0x58755c16
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 30h]
        mov dword ptr [ebp - 18h], eax
        push 4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 2F B4 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 30h], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 39: je 0x58755c55
        __asm _emit 0x74
        __asm _emit 0x39
        push 0b4h
        ; Exact mapped bytes E8 DE B3 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + ecx*4 + 30h], eax
        push 0b4h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        push ecx
        ; Exact mapped bytes E8 3E 6C 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x58755d7d
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 13 DA FF: call 0x584f6fb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x13
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 30h], 0
        ; Exact mapped bytes 74 29: je 0x58755ca2
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        mov dword ptr [ebp - 20h], ecx
        push 4
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 A3 B3 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 30h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 39: je 0x58755ce1
        __asm _emit 0x74
        __asm _emit 0x39
        push 0a8h
        ; Exact mapped bytes E8 52 B3 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + edx*4 + 30h], ecx
        push 0a8h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 30h]
        push edx
        ; Exact mapped bytes E8 B2 6B 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x58755d7d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 0C DA FF: call 0x584f6910
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 30h], 0
        ; Exact mapped bytes 74 29: je 0x58755d2e
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 30h]
        mov dword ptr [ebp - 28h], edx
        push 4
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 17 B3 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 30h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 39: je 0x58755d6d
        __asm _emit 0x74
        __asm _emit 0x39
        push 0d4h
        ; Exact mapped bytes E8 C6 B2 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + eax*4 + 30h], edx
        push 0d4h
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 30h]
        push eax
        ; Exact mapped bytes E8 26 6B 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0E: jmp 0x58755d7d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 30h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0c6ch]
        mov eax, 2
        imul ecx, eax, 0
        mov eax, 55h
        ; Exact mapped bytes 66 89 04 0A: mov word ptr [edx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 0c6ch]
        mov ecx, 2
        shl ecx, 0
        mov edx, 55h
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x58755e00
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 A2 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
