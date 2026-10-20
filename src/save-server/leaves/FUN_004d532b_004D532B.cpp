// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D532B .. +0x3CF bytes.
extern "C" __declspec(naked) void FUN_004d532b_004D532B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        ; Exact mapped bytes E8 2D B3 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        not ecx
        mov edx, dword ptr [ebp + 8]
        and edx, ecx
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x4d5359
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 9B 03 00 00: jmp 0x4d56f4
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        push 28h
        push 0
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 53 05 F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 00 BF 68 00: mov ecx, dword ptr [0x68bf00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes E8 FF C6 05 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 15 F0 6D 68 00: mov edx, dword ptr [0x686df0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 38h], 8
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4d53bf
        __asm _emit 0x74
        __asm _emit 0x24
        mov dword ptr [ebp - 2ch], 0bh
        mov dword ptr [ebp - 8], 634d74h
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 DB C1 FF FF: call 0x4d158d
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4d53bf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        or edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x4d53ee
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 2ch]
        or cl, 8bh
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 8], 634db8h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 AB C1 FF FF: call 0x4d158d
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4d53ee
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        or al, 20h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x4d5422
        __asm _emit 0x74
        __asm _emit 0x2a
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 8], 634d80h
        mov dword ptr [ebp - 10h], 10h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 77 C1 FF FF: call 0x4d158d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4d5422
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        or al, 2
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x4d5459
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 2ch], 8
        mov dword ptr [ebp - 10h], 0
        push 7a01h
        push 634d94h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x4d5200
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4d5459
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        or al, 4
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x4d5490
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 2ch], 0bh
        mov dword ptr [ebp - 10h], 6
        push 7a02h
        push 634da4h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 7C FD FF FF: call 0x4d5200
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4d5490
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        or al, 8
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x4d54c3
        __asm _emit 0x74
        __asm _emit 0x29
        mov dword ptr [ebp - 34h], 0ffh
        push 3fc0h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 AB FD FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        or ecx, eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffc03fh
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4d54e7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [ebp - 34h], 10h
        push 40h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 7B FD FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5510
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 2
        push 80h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 52 FD FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5539
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 8
        push 100h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 29 FD FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5562
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 20h
        push 200h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 00 FD FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 400h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d558b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 1
        push 400h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 D7 FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d55b4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 40h
        push 800h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 AE FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d55dd
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 4
        push 1000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 85 FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5606
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 80h
        push 2000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 5C FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d562f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 800h
        push 4000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 33 FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5658
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 400h
        push 8000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 0A FC FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 10000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d5681
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 200h
        push 10000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 E1 FB FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d56aa
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dword ptr [ebp - 34h], 100h
        push 20000h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 B8 FB FF FF: call 0x4d525a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        or ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        and ecx, 3fc0h
        cmp ecx, 3fc0h
        ; Exact mapped bytes 75 17: jne 0x4d56e4
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        or al, 10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [ebp - 30h]
        or edx, 10h
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, dword ptr [ebp - 30h]
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 8]
        sete cl
        mov eax, ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
