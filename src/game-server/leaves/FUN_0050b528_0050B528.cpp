// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B528 .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_0050b528_0050B528() {
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
        ; Exact mapped bytes 74 73: je 0x50b5bb
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
        push 5cba5ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F6 FB FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50b58c
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 5cba5ch
        ; Exact mapped bytes E8 79 94 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b58c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x50b56a
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 11 03 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x50b5b9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 95 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x50b5b9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 40h], 0ffffffffh
        ; Exact mapped bytes EB 87: jmp 0x50b542
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
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x50b67a
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
        push 5cba5ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 61 FB FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50b624
        __asm _emit 0x75
        __asm _emit 0x14
        push 88h
        push 5cba5ch
        ; Exact mapped bytes E8 E1 93 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b624
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50b5ff
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B9 10 03 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x50b675
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 95 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2E: je 0x50b675
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 40h], -1
        ; Exact mapped bytes 75 25: jne 0x50b675
        __asm _emit 0x75
        __asm _emit 0x25
        push 8eh
        push 5cba5ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 FD FA FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 40h], eax
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x50b5d0
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
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x50b752
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
        push 5cba5ch
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 A2 FA FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50b6e3
        __asm _emit 0x75
        __asm _emit 0x14
        push 9dh
        push 5cba5ch
        ; Exact mapped bytes E8 22 93 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b6e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x50b6be
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FA 0F 03 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x50b74d
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 45 94 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 47: je 0x50b74d
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 40h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 3C: jne 0x50b74d
        __asm _emit 0x75
        __asm _emit 0x3c
        push 0a3h
        push 5cba5ch
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 3C FA FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 0A: jne 0x50b734
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
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x50b68f
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 14: je 0x50b771
        __asm _emit 0x74
        __asm _emit 0x14
        push 0abh
        push 5cba5ch
        ; Exact mapped bytes E8 94 92 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b771
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x50b752
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
