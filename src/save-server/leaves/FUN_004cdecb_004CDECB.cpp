// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDECB .. +0x3E8 bytes.
extern "C" __declspec(naked) void FUN_004cdecb_004CDECB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c398h
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
        push ecx
        sub esp, 6ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cdf0a
        __asm _emit 0x75
        __asm _emit 0x14
        push 100h
        push 67154ch
        ; Exact mapped bytes E8 3B AE 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cdf0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cdef0
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x4cdf29
        __asm _emit 0x74
        __asm _emit 0x13
        push 102h
        push 67154ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 37 C3 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 08: jne 0x4cdf37
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 49 3B 06 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes E8 27 27 07 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0
        push 10h
        ; Exact mapped bytes E8 C3 73 00 00: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 19: jne 0x4cdf8a
        __asm _emit 0x75
        __asm _emit 0x19
        push 115h
        push 67154ch
        ; Exact mapped bytes E8 C0 AD 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 01: je 0x4cdf8a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x4cdf61
        __asm _emit 0x75
        __asm _emit 0xd1
        push 3c000h
        ; Exact mapped bytes E8 91 73 00 00: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3E: je 0x4cdfde
        __asm _emit 0x74
        __asm _emit 0x3e
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 75 07: jne 0x4cdfc2
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 27 03 00 00: jmp 0x4ce2e9
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4cdfeb
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FE 02 00 00: jmp 0x4ce2e9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 14 6D 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 66 C7 45 CC 00 00: mov word ptr [ebp - 0x34], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C1 D4 00 00: call 0x4db4d2
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 60h], eax
        xor ecx, ecx
        cmp dword ptr [ebp - 60h], 0
        sete cl
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x4ce0c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ah
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x4ce0c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 67166ch
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 BD 6F 05 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 64h], al
        mov eax, dword ptr [ebp - 64h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x4ce09f
        __asm _emit 0x75
        __asm _emit 0x45
        push 67167ch
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 A0 6F 05 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 68h], al
        mov edx, dword ptr [ebp - 68h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 27: jne 0x4ce09f
        __asm _emit 0x75
        __asm _emit 0x27
        push 67168ch
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 82 6F 05 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 6ch], al
        mov ecx, dword ptr [ebp - 6ch]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x4ce09f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 07: jmp 0x4ce0a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 1
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 13: je 0x4ce0c5
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 34h]
        and eax, 0ffffh
        cmp eax, 8
        ; Exact mapped bytes 75 06: jne 0x4ce0c5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 CC 00 00: mov word ptr [ebp - 0x34], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3D: je 0x4ce108
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 C2 CF 00 00: call 0x4db099
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 8B 55 CC: mov dx, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 CF D6 00 00: call 0x4db7ba
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 92 D1 00 00: call 0x4db285
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 CF D0 00 00: call 0x4db1d7
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x4ce11b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [edx + 2ch], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 10h
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 22 21 00 00: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 67 D4 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        push 0
        push 4cd820h
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 80 BF 68 00: call dword ptr [0x68bf80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 73 E7 FF FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x4ce1c4
        __asm _emit 0xeb
        __asm _emit 0x49
        push 636e20h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 08 C0 00 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ce1a0
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ch
        push 67154ch
        ; Exact mapped bytes E8 A5 AB 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce1a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4ce17b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EA BD 00 00: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F2: jne 0x4ce1a6
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax + 2ch], 0ffffffffh
        mov eax, 4ce1c4h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 25: je 0x4ce1f6
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 10: je 0x4ce1f6
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 21 00 00: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4ce20d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1E: je 0x4ce231
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 24h]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4ce231
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 84 BF 68 00: call dword ptr [0x68bf84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 14: je 0x4ce24b
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 6E: jne 0x4ce2bf
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x4ce2bb
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes E8 00 24 07 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [eax + 1038h], 0
        ; Exact mapped bytes 75 38: jne 0x4ce2a4
        __asm _emit 0x75
        __asm _emit 0x38
        push 671694h
        push 6716bch
        ; Exact mapped bytes E8 9A 23 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 6716c0h
        push 6716f8h
        ; Exact mapped bytes E8 88 23 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 6716fch
        push 67173ch
        ; Exact mapped bytes E8 76 23 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x4ce2bb
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x4ce2bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 671740h
    }
}
