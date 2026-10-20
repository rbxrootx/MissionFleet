// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528D90 .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_00528d90_00528D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x528db3
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 675bd8h
        ; Exact mapped bytes E8 92 FF FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528db3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x528d99
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x528dd3
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 675bd8h
        ; Exact mapped bytes E8 72 FF FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528dd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x528db9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 200h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x528e83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0a0h
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x528e83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 84h
        ; Exact mapped bytes 74 7E: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 20h
        ; Exact mapped bytes 74 75: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 135h
        ; Exact mapped bytes 74 69: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 136h
        ; Exact mapped bytes 74 5D: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 133h
        ; Exact mapped bytes 74 51: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 134h
        ; Exact mapped bytes 74 45: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 132h
        ; Exact mapped bytes 74 39: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 137h
        ; Exact mapped bytes 74 2D: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 138h
        ; Exact mapped bytes 74 21: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 121h
        ; Exact mapped bytes 74 15: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 1fh
        ; Exact mapped bytes 74 0C: je 0x528e83
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 75 05: jne 0x528e88
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x528fa4
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0c000h
        ; Exact mapped bytes 72 1F: jb 0x528eba
        __asm _emit 0x72
        __asm _emit 0x1f
        push 50h
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 44 BC 68 00: call dword ptr [0x68bc44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x528eb8
        __asm _emit 0x74
        __asm _emit 0x06
        lea edx, [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 68: jmp 0x528f22
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 400h
        ; Exact mapped bytes 72 27: jb 0x528eed
        __asm _emit 0x72
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 400h
        push edx
        push 676704h
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 35: jmp 0x528f22
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 58h], 638858h
        ; Exact mapped bytes EB 09: jmp 0x528eff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 8
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1A: je 0x528f22
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 0B: jne 0x528f20
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 02: jmp 0x528f22
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x528ef6
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 2B: je 0x528f53
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 676714h
        ; Exact mapped bytes E8 C7 76 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB 2C: jmp 0x528f7f
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 676744h
        ; Exact mapped bytes E8 99 76 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 3e0h
        ; Exact mapped bytes 72 19: jb 0x528fa4
        __asm _emit 0x72
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 3e8h
        ; Exact mapped bytes 77 0D: ja 0x528fa4
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 00 00 00: call 0x528fad
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
