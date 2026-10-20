// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005710C7 .. +0x29C bytes.
extern "C" __declspec(naked) void FUN_005710c7_005710C7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f229h
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
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 52 23 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571108
        __asm _emit 0x75
        __asm _emit 0x14
        push 155h
        push 67bd60h
        ; Exact mapped bytes E8 3D 7C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571108
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x5710e5
        __asm _emit 0x75
        __asm _emit 0xd7
        push -1
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 29 23 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571131
        __asm _emit 0x75
        __asm _emit 0x14
        push 156h
        push 67bd60h
        ; Exact mapped bytes E8 14 7C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571131
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x57110e
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x571155
        __asm _emit 0x75
        __asm _emit 0x14
        push 157h
        push 67bd60h
        ; Exact mapped bytes E8 F0 7B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571155
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x571137
        __asm _emit 0x75
        __asm _emit 0xdc
        push -1
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 DC 22 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57117e
        __asm _emit 0x75
        __asm _emit 0x14
        push 158h
        push 67bd60h
        ; Exact mapped bytes E8 C7 7B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57117e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x57115b
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x5711a2
        __asm _emit 0x75
        __asm _emit 0x14
        push 159h
        push 67bd60h
        ; Exact mapped bytes E8 A3 7B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5711a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x571184
        __asm _emit 0x75
        __asm _emit 0xdc
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 2C: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 74 26: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 18h], 2
        ; Exact mapped bytes 74 20: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 18h], 3
        ; Exact mapped bytes 74 1A: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 74 14: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x14
        push 15ch
        push 67bd60h
        ; Exact mapped bytes E8 6B 7B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5711da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C8: jne 0x5711a8
        __asm _emit 0x75
        __asm _emit 0xc8
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 7C 06: jl 0x5711ec
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 72 14: jb 0x571200
        __asm _emit 0x72
        __asm _emit 0x14
        push 15dh
        push 67bd60h
        ; Exact mapped bytes E8 45 7B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571200
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5711e0
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x571219
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 63c638h]
        mov dword ptr [ebp + 1ch], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x571249
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 3F F4 FC FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x57123c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 63c63ch]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 0D: jmp 0x571249
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx*8 + 63c664h]
        mov dword ptr [ebp + 20h], edx
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x570c00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 FE FA FF FF: call 0x570d7d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x5712a1
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA F9 FF FF: call 0x570c53
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x571350
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 75 43: jne 0x5712ea
        __asm _emit 0x75
        __asm _emit 0x43
        push 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 73 FA FF FF: call 0x570d24
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5712d6
        __asm _emit 0x74
        __asm _emit 0x1a
        push 67bde4h
        push 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 59 FA FF FF: call 0x570d24
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5712ea
        __asm _emit 0x75
        __asm _emit 0x14
        push 176h
        push 67bd60h
        ; Exact mapped bytes E8 5B 7A FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5712ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B1: jne 0x5712a1
        __asm _emit 0x75
        __asm _emit 0xb1
        push 80000000h
        push 0
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5F 05 00 00: call 0x571860
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 DD 02 00 00: call 0x5715e8
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 24: je 0x571338
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1E: je 0x571338
        __asm _emit 0x74
        __asm _emit 0x1e
        push 80000000h
        push 1
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 35 05 00 00: call 0x571860
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 B3 02 00 00: call 0x5715e8
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 06 F9 FF FF: call 0x570c53
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
