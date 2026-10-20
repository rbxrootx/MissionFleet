// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A7000 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_585a7000_585A7000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 CC D9 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd9
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 88 92 00 00: call 0x585b02b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 AA D9 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd9
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 0ch]
        and edx, 8
        ; Exact mapped bytes 75 1C: jne 0x585a7061
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        and eax, 4
        ; Exact mapped bytes 75 14: jne 0x585a7061
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 2
        ; Exact mapped bytes 75 0C: jne 0x585a7061
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        and edx, 1
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x585a71aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 5
        ; Exact mapped bytes EB 09: jmp 0x585a7088
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 4D D9 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd9
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 5
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x585a7137
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 51 8A F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x585a7132
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 38 8A F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 C2 F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 72 36: jb 0x585a7132
        __asm _emit 0x72
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FF 89 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 C2 F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        and edx, 80203c00h
        ; Exact mapped bytes 74 09: je 0x585a7132
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x585a707f
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 9E D8 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 24: jne 0x585a7176
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7E 1C: jle 0x585a7174
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes E8 93 00 F3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 46h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 00 1C F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 3B: jmp 0x585a71af
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes EB 34: jmp 0x585a71aa
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7E 2E: jle 0x585a71aa
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes E8 6F 00 F3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 588ab21ch
        ; Exact mapped bytes E8 62 AE F7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        push 28h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CA 1B F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a71af
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
