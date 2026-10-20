// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514B38 .. +0x2D9 bytes.
extern "C" __declspec(naked) void FUN_00514b38_00514B38() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        push 7fdh
        push 5c84b0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 09 66 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 BC FF FF: call 0x510783
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x514b76
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 92 02 00 00: jmp 0x514e08
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x514ba5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB C6 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x514bcd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C3 C6 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514bf0
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x514d01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B C6 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x514c17
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x514d01
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x514c30
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x514c0e
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9A C6 02 00: call 0x5412d8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE BA FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 32 64 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x514c76
        __asm _emit 0x75
        __asm _emit 0x14
        push 823h
        push 5c84b0h
        ; Exact mapped bytes E8 8F FD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514c76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x514c51
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x514c98
        __asm _emit 0x75
        __asm _emit 0x14
        push 824h
        push 5c84b0h
        ; Exact mapped bytes E8 6D FD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514c98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x514c7c
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        sar eax, 8
        and eax, 0ffh
        and eax, 0ffh
        shl eax, 8
        or al, 0ffh
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514cdd
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A8 C5 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 12: je 0x514cfc
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c888ch
        push 5c88c8h
        ; Exact mapped bytes E8 1C AF FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x514c0e
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x514e05
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7A C5 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x514d28
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x514e05
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x514d41
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x514d1f
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 89 C5 02 00: call 0x5412d8
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BD B9 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 63 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x514d87
        __asm _emit 0x75
        __asm _emit 0x14
        push 845h
        push 5c84b0h
        ; Exact mapped bytes E8 7E FC 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514d87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x514d62
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x514da9
        __asm _emit 0x75
        __asm _emit 0x14
        push 846h
        push 5c84b0h
        ; Exact mapped bytes E8 5C FC 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514da9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x514d8d
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffh
        or dh, 0ffh
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514de1
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A4 C4 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 12: je 0x514e00
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c88cch
        push 5c8908h
        ; Exact mapped bytes E8 18 AE FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x514d1f
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
