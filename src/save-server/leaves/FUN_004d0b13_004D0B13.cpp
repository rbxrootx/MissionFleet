// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0B13 .. +0x20F bytes.
extern "C" __declspec(naked) void FUN_004d0b13_004D0B13() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 70 98 00 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 671c5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 7D 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 7E 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x4d0b67
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 1ch], 1
        ; Exact mapped bytes 74 12: je 0x4d0b67
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 1ch], -1
        ; Exact mapped bytes 74 09: je 0x4d0b67
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 1ch], -2
        ; Exact mapped bytes 75 05: jne 0x4d0b6c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x4d0d1c
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4d0b8f
        __asm _emit 0x75
        __asm _emit 0x12
        push 671c68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x4d0d1c
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 99 ED FF FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 74 0F: je 0x4d0bb5
        __asm _emit 0x74
        __asm _emit 0x0f
        push 671c78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d0bc2
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 671c98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 360h
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4d0bf4
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 75 10: jne 0x4d0bf4
        __asm _emit 0x75
        __asm _emit 0x10
        push 40h
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 DE 58 00 00: call 0x4d64d0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x4d0c09
        __asm _emit 0xeb
        __asm _emit 0x15
        lea ecx, [ebp - 54h]
        push ecx
        push 40h
        push 0dh
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 00 BF 68 00: call dword ptr [0x68bf00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 671cbch
        lea ecx, [ebp - 54h]
        push ecx
        push 671cach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 25 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1E 7C 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        push 40h
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 04 BF 68 00: call dword ptr [0x68bf04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 671cd0h
        lea edx, [ebp - 54h]
        push edx
        push 671cc0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EE 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5B 15 06 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 97 AE 05 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 671cd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 45 4F 01 00: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 02 BE 05 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 671ce0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 78 7E 05 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        push -10h
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 671cf4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 54 7E 05 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        push -10h
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4d0d0f
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        push 671d00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EC 7C 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        push 671d08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 7B 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
