// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872A8A0 .. +0x3C2 bytes.
extern "C" __declspec(naked) void FUN_5872a8a0_5872A8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 C9 57 02 00: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5872a8ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 15: jge 0x5872a8e5
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        ; Exact mapped bytes E8 DE 5F 09 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x5872a8c1
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes E8 CD A0 D5 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x5872aa33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5872a90e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 16 01 00 00: jge 0x5872aa2e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 30 27 D6 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x5872aa29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        shl edx, cl
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 7F A0 D5 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        and ecx, dword ptr [eax + 268h]
        ; Exact mapped bytes 74 3B: je 0x5872a9a7
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 28h], edx
        push 588b4208h
        ; Exact mapped bytes E8 65 76 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        push 0ffffh
        push 0
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7C 5B 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x5872a9e0
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 30h], ecx
        push 588b4220h
        ; Exact mapped bytes E8 2A 76 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x76
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        push 0ffffh
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 41 5B 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 33 26 D6 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 38h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F8 5A 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x5872a905
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 02 00 00: jmp 0x5872ac5e
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 120h]
        ; Exact mapped bytes E8 7F 9F D5 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x5872ab81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5872aa5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 16 01 00 00: jge 0x5872ab7c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E2 25 D6 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x25
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x5872ab77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 1ch]
        shl edx, cl
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 31 9F D5 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, dword ptr [eax + 268h]
        ; Exact mapped bytes 74 3B: je 0x5872aaf5
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 48h], edx
        push 588b4238h
        ; Exact mapped bytes E8 17 75 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x75
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        push 0ffffh
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 2E 5A 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x5872ab2e
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 50h], ecx
        push 588b4250h
        ; Exact mapped bytes E8 DC 74 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        push 0ffffh
        push 0
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F3 59 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E5 24 D6 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 58h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AA 59 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x5872aa53
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x5872ac5e
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 124h]
        ; Exact mapped bytes E8 31 9E D5 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x5872ac5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x5872abaa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x5872ac5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 94 24 D6 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5872ac59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 68h], edx
        push 588b4268h
        ; Exact mapped bytes E8 F9 73 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 0ffffh
        push 0
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 10 59 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 03 24 D6 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 70h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C8 58 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x5872aba1
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
