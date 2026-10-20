// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F62A .. +0x2C5 bytes.
extern "C" __declspec(naked) void FUN_0043f62a_0043F62A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F 91 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 40c88h]
        mov edx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [edx + 40c8ch]
        ; Exact mapped bytes 0F 82 50 02 00 00: jb 0x43f8df
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 40c88h]
        mov edx, dword ptr [ebp - 28h]
        add ecx, dword ptr [edx + 40c8ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 40c88h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6E 1C FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x43f6c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 15 02 00 00: je 0x43f8df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 3e8h
        ; Exact mapped bytes 0F 83 08 02 00 00: jae 0x43f8df
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D1 48 FC FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 16 1C FC FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffff0000h
        test edx, edx
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x43f79a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DA 1B FC FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CF 21 00 00: call 0x4418e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9F 21 00 00: call 0x4418c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 0ch], 4e20h
        ; Exact mapped bytes 77 09: ja 0x43f73b
        __asm _emit 0x77
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 4e20h
        ; Exact mapped bytes 76 54: jbe 0x43f78f
        __asm _emit 0x76
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8D 48 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 45: jne 0x43f78f
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 74 33: je 0x43f78f
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0fch], 4
        ; Exact mapped bytes 75 21: jne 0x43f78f
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [edx + 11ch]
        cmp eax, 7530h
        ; Exact mapped bytes 72 08: jb 0x43f78f
        __asm _emit 0x72
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E 79 04 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x43f6ed
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CE 41 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 8D 29 01 00 00: jge 0x43f8d4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D 48 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 3C: je 0x43f7f4
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 10 48 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 507h
        ; Exact mapped bytes 74 2D: je 0x43f7f4
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 01 48 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 503h
        ; Exact mapped bytes 74 1E: je 0x43f7f4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 47 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 508h
        ; Exact mapped bytes 74 0F: je 0x43f7f4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E3 47 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 508h
        ; Exact mapped bytes 75 05: jne 0x43f7f9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x43f8d4
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF 47 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 501h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x43f894
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 502h
        ; Exact mapped bytes 74 05: je 0x43f81f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x43f8cc
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 47 FC FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 5B: jbe 0x43f886
        __asm _emit 0x76
        __asm _emit 0x5b
        mov esi, esp
        push 5b61f8h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 40cach]
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx + 0ca8h]
        imul edx, edx, 0ab4h
        lea edi, [eax + edx + 4]
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0ca9h]
        imul ecx, ecx, 112h
        add edi, ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 85 47 FC FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        sub eax, 1
        shl eax, 4
        lea edx, [edi + eax + 12h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 5A 8F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DD C1 04 00: call 0x48ba6f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x43f8cc
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0d98h], 0
        ; Exact mapped bytes 74 20: je 0x43f8c0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8C B2 04 00: call 0x48ab38
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 40cb8h]
        ; Exact mapped bytes E8 59 8C FF FF: call 0x438517
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x43f8cc
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A3 C1 04 00: call 0x48ba6f
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A3 FC FF FF: call 0x43f577
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 D8 FD FF FF: jmp 0x43f6b7
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F5 8E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
