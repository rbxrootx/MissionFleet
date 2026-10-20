// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050BEFE .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_0050befe_0050BEFE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ec58h
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
        sub esp, 124h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 128h], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CE 4F 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x50c0c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19dh
        push 5cba5ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 03 F2 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        push 584558h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 26 F1 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50bf82
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CF 18 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x50c141
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 584960h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 01 F1 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x50bfc8
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 3
        ; Exact mapped bytes 74 14: je 0x50bfbc
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 12ch], 4
        ; Exact mapped bytes 7E 12: jle 0x50bfc3
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ebp - 12ch], 7
        ; Exact mapped bytes 7E 02: jle 0x50bfbc
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 07: jmp 0x50bfc3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0f120h
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x50c0c8
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5849a0h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BB F0 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x50c0c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        push eax
        push 5cbb5ch
        ; Exact mapped bytes E8 27 3C FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 8A 4F 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x50c015
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 E8 1A FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0ffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D6 1F FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x50c03f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b9h
        push 5cba5ch
        ; Exact mapped bytes E8 C6 89 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50c03f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50c025
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 14h]
        push ecx
        push 100h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 5D: jne 0x50c0be
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 130h]
        sub edx, 2
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 0bh
        ; Exact mapped bytes 77 39: ja 0x50c0be
        __asm _emit 0x77
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 130h]
        xor eax, eax
        mov al, byte ptr [ecx + 50c164h]
        ; Exact mapped bytes FF 24 85 54 C1 50 00: jmp dword ptr [eax*4 + 0x50c154]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x50
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0f121h
        ; Exact mapped bytes EB 1B: jmp 0x50c0be
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 10h], 0f122h
        ; Exact mapped bytes EB 12: jmp 0x50c0be
        __asm _emit 0xeb
        __asm _emit 0x12
        xor edx, edx
        cmp dword ptr [ebp + 10h], 0
        setne dl
        add edx, 0f123h
        mov dword ptr [ebp - 10h], edx
        push -1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6B 20 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BC 4E 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x50c11e
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 83 3D 00 E9 5D 00 00: cmp dword ptr [0x5de900], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x50c0f4
        __asm _emit 0x74
        __asm _emit 0x17
        push 104h
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8D 3E FF FF: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x50c10a
        __asm _emit 0xeb
        __asm _emit 0x16
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 61 FB 00 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 30h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7E 4E 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4F 17 00 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0B 17 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
