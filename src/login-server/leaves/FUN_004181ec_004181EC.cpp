// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004181EC .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_004181ec_004181EC() {
    __asm {
        mov eax, 43ace0h
        ; Exact mapped bytes E8 12 74 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        lea eax, [edi + 2cch]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 93 01 00 00: ja 0x4183a2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B4 83 41 00: jmp dword ptr [eax*4 + 0x4183b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x83
        __asm _emit 0x41
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 83 48 08 FF: or word ptr [eax + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 83 60 08 00: and word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        xor edi, edi
        ; Exact mapped bytes 66 C7 06 02 00: mov word ptr [esi], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D E4 FB 44 00: cmp dword ptr [0x44fbe4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x41825f
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 8D EE 01 00: call 0x4370de
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax + 20h], edi
        ; Exact mapped bytes 75 09: jne 0x41825f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 7E 08: mov word ptr [esi + 8], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 46 08 01 00: mov word ptr [esi + 8], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3ch], -1
        ; Exact mapped bytes 75 41: jne 0x4182b1
        __asm _emit 0x75
        __asm _emit 0x41
        push dword ptr [esi + 1ch]
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8C BF 01 00: call 0x434207
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        mov eax, dword ptr [eax + 1ch]
        push eax
        push dword ptr [ebp - 1ch]
        push 138h
        push eax
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 15 88 C0 43 00: call dword ptr [0x43c088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 18h]
        mov dword ptr [esi + 3ch], eax
        ; Exact mapped bytes FF 15 8C C0 43 00: call dword ptr [0x43c08c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        mov dword ptr [esi + 40h], eax
        ; Exact mapped bytes E8 C8 BF 01 00: call 0x434279
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp edi, 0fffffd43h
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4182c6
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, dword ptr [esi + 3ch]
        ; Exact mapped bytes EB 03: jmp 0x4182c9
        __asm _emit 0xeb
        __asm _emit 0x03
        mov esi, dword ptr [esi + 40h]
        mov dword ptr [eax + 8], esi
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 44h], edi
        ; Exact mapped bytes 75 19: jne 0x4182f1
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 9B 08 00 00: call 0x418b7b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C 01 00 00: call 0x4183f4
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 44h], edi
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x4183a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 07 09 00: mov word ptr [edi], 9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 44h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [edi + 8], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x41839d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 06 0B 00: mov word ptr [esi], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 13 00 00: call 0x4196be
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        ; Exact mapped bytes 66 89 46 08: mov word ptr [esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes EB 76: jmp 0x41839d
        __asm _emit 0xeb
        __asm _emit 0x76
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 06 03 00: mov word ptr [esi], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 D0 C0 43 00: call dword ptr [0x43c0d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes EB 63: jmp 0x41839d
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov esi, dword ptr [ebp + 10h]
        and dword ptr [ebp - 4], 0
        lea ecx, [ebp + 8]
        ; Exact mapped bytes 66 C7 06 08 00: mov word ptr [esi], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 FF 01 00: call 0x438289
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [esi + 8], eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes EB 36: jmp 0x418398
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        push 0f1c0h
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 FF A1 01 00: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes 66 C7 06 08 00: mov word ptr [esi], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB FE 01 00: call 0x438289
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [esi + 8], eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 0E 58 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x4183a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
