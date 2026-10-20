// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421FE7 .. +0x394 bytes.
extern "C" __declspec(naked) void FUN_00421fe7_00421FE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push edi
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [ebp - 1ch], 63h
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 9E 17 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x422045
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 1
        ; Exact mapped bytes 75 1E: jne 0x422063
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 51 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 07 03 00 00: jmp 0x42236a
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 56h
        ; Exact mapped bytes 75 02: jne 0x42208b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 30: jmp 0x4220bb
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA A0 02 00: call 0x44c15d
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 7E 1E: jle 0x4220bb
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 0baeh
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 50: mov ax, word ptr [edx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 50: mov word ptr [edx + 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2bch], -1
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x422223
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2bch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 0ch
        and ecx, 0fh
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 28h], 31h
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 64 16 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x422205
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 1fh
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 34h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 34 16 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x422205
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4 + 2f0h], 0ffffffffh
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx*4 + 270h], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 B2 04 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x422223
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 16 50 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x42236a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c98h]
        ; Exact mapped bytes E8 21 91 01 00: call 0x43b378
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        push 37ch
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        ; Exact mapped bytes E8 F3 70 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 37ch
        mov dword ptr [eax + ecx + 2e4h], 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        or edx, 0fffffffeh
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 278h], edx
        mov edx, dword ptr [ebp + 10h]
        shl edx, 10h
        or edx, 4
        mov dword ptr [ebp - 4], edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 BD 03 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x422351
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 9D 03 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x422351
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 8
        lea edx, [ebp - 18h]
        push edx
        push 1
        push 4
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E8 4E 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x42236a
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA 4E 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        pop edi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6B 64 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
