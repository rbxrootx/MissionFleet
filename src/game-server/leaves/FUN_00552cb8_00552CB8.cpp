// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552CB8 .. +0x27B bytes.
extern "C" __declspec(naked) void FUN_00552cb8_00552CB8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 77h
        push 5cfa08h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 8C 84 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x552db4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 0
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x552d26
        __asm _emit 0x74
        __asm _emit 0x14
        push 82h
        push 5cfa08h
        ; Exact mapped bytes E8 DF 1C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552d26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x552cf2
        __asm _emit 0x75
        __asm _emit 0xc6
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x552d51
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x552d4b
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x552d32
        __asm _emit 0x75
        __asm _emit 0xe1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x552d83
        __asm _emit 0x74
        __asm _emit 0x14
        push 87h
        push 5cfa08h
        ; Exact mapped bytes E8 82 1C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552d83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C8: jne 0x552d51
        __asm _emit 0x75
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 1C: je 0x552dae
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 24h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x552d89
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x552e52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 41: je 0x552e0b
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x552dfb
        __asm _emit 0x74
        __asm _emit 0x14
        push 91h
        push 5cfa08h
        ; Exact mapped bytes E8 0A 1C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552dfb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x552dca
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 1C: je 0x552e4c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 20h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x552e27
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x552e77
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 34h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x552e52
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x552ea2
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 38h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x552e7d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 74 33: je 0x552ee4
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 DB 90 FF FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 15: je 0x552ee4
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 BD 90 FF FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 74 14: je 0x552f01
        __asm _emit 0x74
        __asm _emit 0x14
        push 0aah
        push 5cfa08h
        ; Exact mapped bytes E8 04 1B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552f01
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x552ee4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 14: je 0x552f24
        __asm _emit 0x74
        __asm _emit 0x14
        push 0abh
        push 5cfa08h
        ; Exact mapped bytes E8 E1 1A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552f24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552f07
        __asm _emit 0x75
        __asm _emit 0xdd
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
