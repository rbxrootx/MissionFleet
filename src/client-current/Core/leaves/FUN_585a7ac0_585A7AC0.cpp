// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A7AC0 .. +0x1D4 bytes.
extern "C" __declspec(naked) void FUN_585a7ac0_585A7AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585a7ae2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 F3 CE ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 66 01 00 00: jge 0x585a7c6b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        shl edx, cl
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 B9 CE ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 268h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 A5 CE ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 1A: je 0x585a7b6d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 14h]
        and edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 09: jne 0x585a7b64
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 07: jmp 0x585a7b6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes EB 18: jmp 0x585a7b85
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        and eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 09: jne 0x585a7b7e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585a7b85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A6 54 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x585a7bbb
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D 7F F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x585a7c5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 70 54 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x585a7bed
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 27 7F F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x585a7c5d
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3E 54 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x585a7c66
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F5 7E F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7e
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x585a7c66
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DA 53 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 75 28: jne 0x585a7c66
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BB 53 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 75 09: jne 0x585a7c66
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 05: jmp 0x585a7c6b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6E FE FF FF: jmp 0x585a7ad9
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x585a7c7e
        __asm _emit 0x74
        __asm _emit 0x0d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 94 00 00: call 0x585b1130
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 12: jmp 0x585a7c90
        __asm _emit 0xeb
        __asm _emit 0x12
        push 59h
        push 58h
        push 10h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 9F 1C 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
