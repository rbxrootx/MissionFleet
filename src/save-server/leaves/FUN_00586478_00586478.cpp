// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586478 .. +0x3DA bytes.
extern "C" __declspec(naked) void FUN_00586478_00586478() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58feach
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 184h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 174h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 F2 02 00 00: jne 0x58679b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 174h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x58679b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5864e9
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 67d92ch
        ; Exact mapped bytes E8 5C 28 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5864e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5864d2
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 93 02 00 00: je 0x586796
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 14000ch
        push 1
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 19 F8 F1 FF: call 0x4a5d30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 C8 FD F1 FF: call 0x4a62f1
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 58: jne 0x58658a
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 174h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 12: je 0x586553
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 41 5A F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes E8 2F 5A F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x586784
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 160h]
        push edx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 00 FC F1 FF: call 0x4a619c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 ED E7 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        add eax, edx
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x5866cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 168h]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 21 FC F1 FF: call 0x4a620d
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 184h], edx
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 9D E7 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov byte ptr [ebp - 164h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 AE 62 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 164h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x5866cc
        __asm _emit 0x75
        __asm _emit 0x7f
        lea ecx, [ebp - 170h]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 20 FC F1 FF: call 0x4a627f
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 18ch], edx
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 2A E7 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov byte ptr [ebp - 16ch], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 170h]
        ; Exact mapped bytes E8 3B 62 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 16ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5866cc
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes EB 0A: jmp 0x5866d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 1
        mov cl, byte ptr [ebp - 190h]
        mov byte ptr [ebp - 15ch], cl
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 FB 61 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 15ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 59: je 0x58675a
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 174h]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 12: je 0x586722
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 72 58 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 60 58 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 98h], ecx
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 9ch], ecx
        ; Exact mapped bytes EB 2A: jmp 0x586784
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0C: je 0x58676f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 25 58 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x586784
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 10 58 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 3A FE F1 FF: call 0x4a65d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x58683f
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 14000ch
        push 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 81 F5 F1 FF: call 0x4a5d30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 4
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 30 FB F1 FF: call 0x4a62f1
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 12: je 0x5867e2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        ; Exact mapped bytes E8 B2 57 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 12: je 0x586803
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 91 57 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 0fch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 98h], ecx
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 0fch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 9ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 91 FD F1 FF: call 0x4a65d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
