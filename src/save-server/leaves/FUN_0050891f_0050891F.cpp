// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050891F .. +0x40F bytes.
extern "C" __declspec(naked) void FUN_0050891f_0050891F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 144h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 140h], ecx
        push 71h
        push 6791a4h
        mov eax, dword ptr [ebp - 140h]
        push eax
        ; Exact mapped bytes E8 1C 19 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        push 72h
        push 6791a4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0C 19 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        push 636f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 18 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x508976
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 6791a4h
        ; Exact mapped bytes E8 CF 03 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508976
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x508954
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 43 98 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 31 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp edx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 75 1B: jne 0x5089b9
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x5089b4
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 9C 02 00: call 0x532628
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5089b9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 6C 03 00 00: jmp 0x508d25
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 22: je 0x5089e7
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5089e7
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 40h
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0fffffff9h
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 6
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, edx
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x508a53
        __asm _emit 0x75
        __asm _emit 0x2a
        push 104h
        lea edx, [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 DA FC FF: call 0x4d64d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 F0 33 FE FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 F7 01 00: call 0x528163
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        and ah, 0fh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0f000h
        or dh, 0fh
        mov eax, dword ptr [ebp - 1ch]
        or eax, edx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 140h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 0B: je 0x508a98
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        or edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 08: jmp 0x508aa0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        and al, 0feh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 87 03 00: call 0x5412aa
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 70h]
        cmp eax, dword ptr [ebp - 140h]
        ; Exact mapped bytes 74 2A: je 0x508aeb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 36 02 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x508aeb
        __asm _emit 0x74
        __asm _emit 0x1e
        push 97h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C DC FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 18h], 0ffffffffh
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x508bd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 1B 97 02 00: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 30 EE FD FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 9E 97 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 130h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 6F 97 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 134h]
        add edx, eax
        push edx
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 02 93 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 1A 13 00 00: call 0x509eb9
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 114h
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 14 97 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 F2 96 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 DB FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x508c1f
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 7ch
        ; Exact mapped bytes E8 FE D8 01 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 7ch
        ; Exact mapped bytes E8 EE D8 01 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        push 115h
        push 0
        push 0
        ; Exact mapped bytes A1 C4 6D 68 00: mov eax, dword ptr [0x686dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D C0 6D 68 00: mov ecx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 DB FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 3E 02 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 140h]
        ; Exact mapped bytes 74 0F: je 0x508c3e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 3E 02 00: call 0x52cae8
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 75 17: jne 0x508c63
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 0C 05 00 00: call 0x50916d
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x508cb2
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 46: je 0x508cb2
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 140h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 18: je 0x508c90
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 0C: jne 0x508c90
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 144h], 1
        ; Exact mapped bytes EB 0A: jmp 0x508c9a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 BB 04 00 00: call 0x50916d
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + 70h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3A: je 0x508cfe
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 34 02 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x508ce4
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c3h
        push 6791a4h
        ; Exact mapped bytes E8 61 00 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508ce4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x508cc4
        __asm _emit 0x75
        __asm _emit 0xda
        push 57h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 DA FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C4 03 00 00: call 0x5090d1
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 E7 CA 00 00: call 0x5157ff
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 44 4C 02 00: call 0x52d969
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4c
        __asm _emit 0x02
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
