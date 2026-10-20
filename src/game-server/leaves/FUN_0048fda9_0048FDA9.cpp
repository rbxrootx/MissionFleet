// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048FDA9 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_0048fda9_0048FDA9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e1fdh
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 2cch
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0fh
        ; Exact mapped bytes 0F 87 60 02 00 00: ja 0x490046
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 24 95 5B 00 49 00: jmp dword ptr [edx*4 + 0x49005b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 41 08 FF FF: mov word ptr [ecx + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 0B 00: mov word ptr [edx], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 01 02 00: mov word ptr [ecx], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x48fe42
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 EB 79 0B 00: call 0x547827
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 0B: je 0x48fe4d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 42 08 01 00: mov word ptr [edx + 8], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x48fe56
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 3ch], -1
        ; Exact mapped bytes 75 5F: jne 0x48fec8
        __asm _emit 0x75
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2D 39 07 00: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 138h
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 3C BD 0A 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4B 7F 0A 00: call 0x537df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 3ch], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 82 80 0A 00: call 0x537f35
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8F 39 07 00: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0fffffd43h
        ; Exact mapped bytes 75 0B: jne 0x48fee4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 09: jmp 0x48feed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 75 14: jne 0x48ff1d
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 C4 BD 0A 00: call 0x53bcd8
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x49009b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 75 14: jne 0x48ff3a
        __asm _emit 0x75
        __asm _emit 0x14
        push 10bh
        push 5ca644h
        ; Exact mapped bytes E8 CB 4A 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48ff3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x48ff1d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 07: jne 0x48ff50
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 09 00: mov word ptr [eax], 9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 44h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ecx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 01 0B 00: mov word ptr [ecx], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 27 00 00: call 0x49270d
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 89 42 08: mov word ptr [edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 23 5E 00: call dword ptr [0x5e2320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x490048
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 3C 0F 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 08 00: mov word ptr [edx], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 29 3A 0E 00: call 0x573a0b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 55 D8 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4A: jmp 0x490048
        __asm _emit 0xeb
        __asm _emit 0x4a
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 01 0F 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        push 0f1c0h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 66 AB 06 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 08 00: mov word ptr [edx], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E1 39 0E 00: call 0x573a0b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 0D D8 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x490048
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
