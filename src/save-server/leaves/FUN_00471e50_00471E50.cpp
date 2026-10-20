// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471E50 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_00471e50_00471E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b0h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x471e6e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 12h
        ; Exact mapped bytes 73 13: jae 0x471e87
        __asm _emit 0x73
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx*8 + 67e190h]
        ; Exact mapped bytes 75 02: jne 0x471e85
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x471e87
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x471e65
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax*8 + 67e190h]
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x472008
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fch
        ; Exact mapped bytes 74 21: je 0x471ec4
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*8 + 67e194h]
        push eax
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 A5 AF FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x471ec4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 83 3D 14 72 68 00 01: cmp dword ptr [0x687214], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 12: je 0x471edf
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 14 72 68 00 00: cmp dword ptr [0x687214], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x471f18
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 83 3D 44 DA 67 00 01: cmp dword ptr [0x67da44], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 39: jne 0x471f18
        __asm _emit 0x75
        __asm _emit 0x39
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*8 + 67e194h]
        push eax
        ; Exact mapped bytes E8 4B 38 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 67e194h]
        push edx
        push -0ch
        ; Exact mapped bytes FF 15 9C B8 68 00: call dword ptr [0x68b89c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x472008
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fch
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x472008
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea eax, [ebp - 110h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x471f51
        __asm _emit 0x75
        __asm _emit 0x14
        push 63ec74h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 22 3A FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 110h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 DD 37 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        cmp eax, 3ch
        ; Exact mapped bytes 76 2C: jbe 0x471f9a
        __asm _emit 0x76
        __asm _emit 0x2c
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 C6 37 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax - 3bh]
        mov dword ptr [ebp - 0ch], eax
        push 3
        push 63ec70h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 A9 36 FF FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 63f178h
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 C5 39 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 1b0h]
        push ecx
        ; Exact mapped bytes E8 C2 39 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 63ebe8h
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 AE 39 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*8 + 67e194h]
        push ecx
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 94 39 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 12010h
        push 63f150h
        lea eax, [ebp - 1b0h]
        push eax
        ; Exact mapped bytes E8 FB 6C 00 00: call 0x478d00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
