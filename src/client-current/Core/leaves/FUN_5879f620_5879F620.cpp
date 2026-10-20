// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F620 .. +0x1FF bytes.
extern "C" __declspec(naked) void FUN_5879f620_5879F620() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x5879f638
        __asm _emit 0x75
        __asm _emit 0x07
        push 588b8340h
        ; Exact mapped bytes EB 2D: jmp 0x5879f665
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp ebx, 7fffffffh
        ; Exact mapped bytes 76 13: jbe 0x5879f653
        __asm _emit 0x76
        __asm _emit 0x13
        push 588b835ch
        push esi
        ; Exact mapped bytes E8 E5 FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        lea eax, [ebx + 7]
        and eax, 0fffffff8h
        cmp eax, 1ffffff8h
        ; Exact mapped bytes 76 13: jbe 0x5879f673
        __asm _emit 0x76
        __asm _emit 0x13
        push 588b8378h
        push esi
        ; Exact mapped bytes E8 C5 FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1
        add esp, 8
        cmp ebx, dword ptr [esi + 2a8h]
        ; Exact mapped bytes 76 13: jbe 0x5879f68e
        __asm _emit 0x76
        __asm _emit 0x13
        push 588b83a8h
        push esi
        ; Exact mapped bytes E8 AA FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        mov ebx, dword ptr [esp + 18h]
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x5879f69d
        __asm _emit 0x75
        __asm _emit 0x07
        push 588b83d0h
        ; Exact mapped bytes EB 0D: jmp 0x5879f6aa
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ebx, 7fffffffh
        ; Exact mapped bytes 76 13: jbe 0x5879f6b8
        __asm _emit 0x76
        __asm _emit 0x13
        push 588b83f0h
        push esi
        ; Exact mapped bytes E8 80 FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1
        add esp, 8
        cmp ebx, dword ptr [esi + 2ach]
        ; Exact mapped bytes 76 13: jbe 0x5879f6d3
        __asm _emit 0x76
        __asm _emit 0x13
        push 588b8410h
        push esi
        ; Exact mapped bytes E8 65 FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        push ebp
        mov ebp, dword ptr [esp + 20h]
        cmp ebp, 1
        ; Exact mapped bytes 74 27: je 0x5879f704
        __asm _emit 0x74
        __asm _emit 0x27
        cmp ebp, 2
        ; Exact mapped bytes 74 22: je 0x5879f704
        __asm _emit 0x74
        __asm _emit 0x22
        cmp ebp, 4
        ; Exact mapped bytes 74 1D: je 0x5879f704
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp ebp, 8
        ; Exact mapped bytes 74 18: je 0x5879f704
        __asm _emit 0x74
        __asm _emit 0x18
        cmp ebp, 10h
        ; Exact mapped bytes 74 13: je 0x5879f704
        __asm _emit 0x74
        __asm _emit 0x13
        push 588b8438h
        push esi
        ; Exact mapped bytes E8 34 FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        mov ebx, dword ptr [esp + 24h]
        test ebx, ebx
        ; Exact mapped bytes 78 0F: js 0x5879f71b
        __asm _emit 0x78
        __asm _emit 0x0f
        cmp ebx, 1
        ; Exact mapped bytes 74 0A: je 0x5879f71b
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp ebx, 5
        ; Exact mapped bytes 74 05: je 0x5879f71b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp ebx, 6
        ; Exact mapped bytes 7E 13: jle 0x5879f72e
        __asm _emit 0x7e
        __asm _emit 0x13
        push 588b8454h
        push esi
        ; Exact mapped bytes E8 0A FD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        cmp ebx, 3
        ; Exact mapped bytes 75 07: jne 0x5879f73a
        __asm _emit 0x75
        __asm _emit 0x07
        cmp ebp, 8
        ; Exact mapped bytes 7F 16: jg 0x5879f74e
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes EB 27: jmp 0x5879f761
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp ebx, 2
        ; Exact mapped bytes 74 0A: je 0x5879f749
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp ebx, 4
        ; Exact mapped bytes 74 05: je 0x5879f749
        __asm _emit 0x74
        __asm _emit 0x05
        cmp ebx, 6
        ; Exact mapped bytes 75 18: jne 0x5879f761
        __asm _emit 0x75
        __asm _emit 0x18
        cmp ebp, 8
        ; Exact mapped bytes 7D 13: jge 0x5879f761
        __asm _emit 0x7d
        __asm _emit 0x13
        push 588b8470h
        push esi
        ; Exact mapped bytes E8 D7 FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        cmp dword ptr [esp + 28h], 2
        pop ebp
        ; Exact mapped bytes 7C 13: jl 0x5879f77c
        __asm _emit 0x7c
        __asm _emit 0x13
        push 588b84a4h
        push esi
        ; Exact mapped bytes E8 BC FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        cmp dword ptr [esp + 28h], 0
        ; Exact mapped bytes 74 13: je 0x5879f796
        __asm _emit 0x74
        __asm _emit 0x13
        push 588b84c8h
        push esi
        ; Exact mapped bytes E8 A2 FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        test dword ptr [esi + 74h], 1000h
        ; Exact mapped bytes 74 17: je 0x5879f7b6
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [esi + 284h], 0
        ; Exact mapped bytes 74 0E: je 0x5879f7b6
        __asm _emit 0x74
        __asm _emit 0x0e
        push 588b74f4h
        push esi
        ; Exact mapped bytes E8 7D FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x5879f80b
        __asm _emit 0x74
        __asm _emit 0x4d
        test byte ptr [esi + 284h], 4
        ; Exact mapped bytes 74 18: je 0x5879f7df
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 40h
        ; Exact mapped bytes 75 13: jne 0x5879f7df
        __asm _emit 0x75
        __asm _emit 0x13
        test dword ptr [esi + 74h], 1000h
        ; Exact mapped bytes 75 0A: jne 0x5879f7df
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp ebx, 2
        ; Exact mapped bytes 74 18: je 0x5879f7f2
        __asm _emit 0x74
        __asm _emit 0x18
        cmp ebx, 6
        ; Exact mapped bytes 74 13: je 0x5879f7f2
        __asm _emit 0x74
        __asm _emit 0x13
        push 588b84ech
        push esi
        ; Exact mapped bytes E8 46 FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edi, 1
        test dword ptr [esi + 74h], 1000h
        ; Exact mapped bytes 74 10: je 0x5879f80b
        __asm _emit 0x74
        __asm _emit 0x10
        push 588b850ch
        push esi
        ; Exact mapped bytes E8 2A FC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x5879f814
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp edi, 1
        ; Exact mapped bytes 74 04: je 0x5879f814
        __asm _emit 0x74
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebx
        ret
        push 588b852ch
        push esi
        ; Exact mapped bytes E8 61 F6 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
