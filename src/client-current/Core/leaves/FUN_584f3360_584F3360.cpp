// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F3360 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_584f3360_584F3360() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fbc4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D DD 06 00: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 2D: je 0x584f33df
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 03 FF FF FF: call 0x584f32c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 72 4E F9 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [eax + 9ch], cl
        ; Exact mapped bytes EB 0A: jmp 0x584f33e9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F EE FF FF: call 0x584f2250
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f3404
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 31 16 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [eax + 38h]
        ; Exact mapped bytes 73 7C: jae 0x584f3493
        __asm _emit 0x73
        __asm _emit 0x7c
        push 1ch
        ; Exact mapped bytes E8 E6 DB 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2D: je 0x584f345e
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3A FA FF FF: call 0x584f2e80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B7 40 F9 FF: call 0x58487510
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f3465
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 93 4D F9 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x584f33fb
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 A2 15 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0a8h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 8B 15 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0f4h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 74 15 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0f8h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 64h
        mov dword ptr [ebp - 38h], eax
        push 80h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 72 19 00 00: call 0x584f4e60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 3D 15 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 27: je 0x584f3533
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 79 83 06 00: call 0x5855b8a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 FE C9 06 00: call 0x5855ff30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
