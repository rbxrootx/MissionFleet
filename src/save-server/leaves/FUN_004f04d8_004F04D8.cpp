// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F04D8 .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_004f04d8_004F04D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 73: je 0x4f056b
        __asm _emit 0x74
        __asm _emit 0x73
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 10h], eax
        push 77h
        push 678234h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 46 9D FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f053c
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 678234h
        ; Exact mapped bytes E8 09 88 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f053c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4f051a
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 BC 03 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4f0569
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1C 25 FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x4f0569
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 40h], 0ffffffffh
        ; Exact mapped bytes EB 87: jmp 0x4f04f2
        __asm _emit 0xeb
        __asm _emit 0x87
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4f062a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 18h], eax
        push 87h
        push 678234h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 B1 9C FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f05d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 88h
        push 678234h
        ; Exact mapped bytes E8 71 87 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f05d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f05af
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 69 BB 03 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x4f0625
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 84 24 FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2E: je 0x4f0625
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 40h], -1
        ; Exact mapped bytes 75 25: jne 0x4f0625
        __asm _emit 0x75
        __asm _emit 0x25
        push 8eh
        push 678234h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 4D 9C FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 40h], eax
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x4f0580
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x4f0702
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 20h], eax
        push 9ch
        push 678234h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 F2 9B FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f0693
        __asm _emit 0x75
        __asm _emit 0x14
        push 9dh
        push 678234h
        ; Exact mapped bytes E8 B2 86 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0693
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f066e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA BA 03 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x4f06fd
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C5 23 FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 47: je 0x4f06fd
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 40h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 3C: jne 0x4f06fd
        __asm _emit 0x75
        __asm _emit 0x3c
        push 0a3h
        push 678234h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 8C 9B FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 0A: jne 0x4f06e4
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 40h], 0
        push 1
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x4f063f
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 14: je 0x4f0721
        __asm _emit 0x74
        __asm _emit 0x14
        push 0abh
        push 678234h
        ; Exact mapped bytes E8 24 86 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0721
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4f0702
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
