// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574A69 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_00574a69_00574A69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 11: je 0x574a92
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 4
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 C8 B3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574aa6
        __asm _emit 0x75
        __asm _emit 0x14
        push 480h
        push 5cbcc4h
        ; Exact mapped bytes E8 5F FF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574aa6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x574a7b
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x574ac3
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 4
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 97 B3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574ad7
        __asm _emit 0x75
        __asm _emit 0x14
        push 481h
        push 5cbcc4h
        ; Exact mapped bytes E8 2E FF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574ad7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x574aac
        __asm _emit 0x75
        __asm _emit 0xcf
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        push 58e530h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 89 7C F2 FF: call 0x49c790
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x574b18
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 80020001h
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x574c50
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 7B: je 0x574ba0
        __asm _emit 0x74
        __asm _emit 0x7b
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 5C: jl 0x574ba0
        __asm _emit 0x7c
        __asm _emit 0x5c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x574b5e
        __asm _emit 0x75
        __asm _emit 0x14
        push 48eh
        push 5cbcc4h
        ; Exact mapped bytes E8 A7 FE FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574b5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x574b44
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 8002802bh
        ; Exact mapped bytes 75 07: jne 0x574b9b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 80020006h
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x574c4d
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x574bc5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 35: jmp 0x574bfa
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [eax + eax + 2]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 DD 4B F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 B9 7B F2 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 AB E9 FF FF: call 0x5735b2
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 1ch]
        cmp dword ptr [edx], -1
        ; Exact mapped bytes 75 09: jne 0x574c1d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 80020006h
        ; Exact mapped bytes EB 07: jmp 0x574c24
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x574c36
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 0F: jae 0x574c4d
        __asm _emit 0x73
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [eax + edx*4], 0ffffffffh
        ; Exact mapped bytes EB E0: jmp 0x574c2d
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 0ch]
        lea esp, [ebp - 38h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
