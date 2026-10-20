// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055ED0F .. +0x213 bytes.
extern "C" __declspec(naked) void FUN_0055ed0f_0055ED0F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2E 11 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ed40
        __asm _emit 0x75
        __asm _emit 0x14
        push 218h
        push 5cff18h
        ; Exact mapped bytes E8 C5 5C FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ed40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55ed1b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 4
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 03 11 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ed6b
        __asm _emit 0x75
        __asm _emit 0x14
        push 219h
        push 5cff18h
        ; Exact mapped bytes E8 9A 5C FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ed6b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55ed46
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x55ed9c
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 14h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 D2 10 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ed9c
        __asm _emit 0x75
        __asm _emit 0x14
        push 21bh
        push 5cff18h
        ; Exact mapped bytes E8 69 5C FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ed9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x55ed71
        __asm _emit 0x75
        __asm _emit 0xcf
        push 21ch
        push 5cff18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AB C3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        push 21dh
        push 5cff18h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 54h]
        push edx
        ; Exact mapped bytes E8 95 C3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 1F 60 F9 FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        push 221h
        push 5cff18h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 70 C3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        push 585e80h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 91 C2 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ee17
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 5cff18h
        ; Exact mapped bytes E8 EE 5B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ee17
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x55edf0
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 1A 5D F9 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 4A: je 0x55ee7f
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        push 229h
        push 5cff18h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 0E C3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        push 585e80h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 2F C2 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ee79
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 5cff18h
        ; Exact mapped bytes E8 8C 5B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ee79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x55ee52
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x55ef14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F 8F FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 2C FE FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x55eeac
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x55eeb3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x55eed2
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 2C 25 5E 00: call dword ptr [0x5e252c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x55eed9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        neg ecx
        sbb ecx, ecx
        and ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        cmp dword ptr [ecx], 0
        setne dl
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], edx
        mov eax, 1
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
