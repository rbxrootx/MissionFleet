// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E91D .. +0x29C bytes.
extern "C" __declspec(naked) void FUN_0055e91d_0055E91D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f0f3h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 23 DE FF FF: call 0x55c76d
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 63beb0h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x55e973
        __asm _emit 0x74
        __asm _emit 0x13
        push 304h
        push 67b3b8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 ED B8 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x55e99e
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 E0 4A F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55e99e
        __asm _emit 0x75
        __asm _emit 0x14
        push 305h
        push 67b3b8h
        ; Exact mapped bytes E8 A7 A3 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55e99e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x55e973
        __asm _emit 0x75
        __asm _emit 0xcf
        push 88h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 09 6F F0 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6f
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x55e9e2
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 60h], 88h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55ea16
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 9A 00 F7 FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55ea16
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 70h], 55c710h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 3ch], 7806h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 7E FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0cch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 7E FF FF: call 0x556862
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0c4h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 75: jne 0x55eacf
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 75 69: jne 0x55eacf
        __asm _emit 0x75
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes FF 15 DC C2 68 00: call dword ptr [0x68c2dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x55ea8d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 66 C7 45 EC 00 00: mov word ptr [ebp - 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes FF 15 EC C2 68 00: call dword ptr [0x68c2ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F6 76 FE FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d4h], eax
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 82 C8 00 00 00: mov word ptr [edx + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 12: jne 0x55eae7
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 5F FF FF: call 0x554a06
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x55eb8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        lea eax, [ebp - 1ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        ; Exact mapped bytes FF 15 F0 C2 68 00: call dword ptr [0x68c2f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x55eb2d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 86 76 FE FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 52: jmp 0x55eb7f
        __asm _emit 0xeb
        __asm _emit 0x52
        push 100h
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3E: je 0x55eb7f
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 18h]
        mov byte ptr [eax], 3fh
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 1], 0
        push 100h
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0f095h
        ; Exact mapped bytes E8 DF B1 F7 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55eb79
        __asm _emit 0x75
        __asm _emit 0x14
        push 33dh
        push 67b3b8h
        ; Exact mapped bytes E8 CC A1 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55eb79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x55eb4e
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0d4h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 61 FF FF: call 0x554d8d
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
