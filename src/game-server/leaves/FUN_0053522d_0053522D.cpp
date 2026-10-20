// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053522D .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_0053522d_0053522D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 3e8h
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5352f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 3e8h
        ; Exact mapped bytes E8 BE 34 F9 FF: call 0x4c8720
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x53527f
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 5ca0c4h
        ; Exact mapped bytes E8 9E A9 F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x535478
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x535299
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f1h
        push 5c9524h
        ; Exact mapped bytes E8 6C F7 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535299
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53527f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5352c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 5c9524h
        ; Exact mapped bytes E8 3F F7 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5352c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5352ac
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5ca0fch
        ; Exact mapped bytes E8 37 A9 F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x535478
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 3e2h
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x535478
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0b4h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 3e2h
        ; Exact mapped bytes E8 04 34 F9 FF: call 0x4c8720
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x34
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x535339
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 5ca110h
        ; Exact mapped bytes E8 E4 A8 F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x535478
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b4h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x53535d
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 5c9524h
        ; Exact mapped bytes E8 A8 F6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53535d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x535339
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x53537d
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 5c9524h
        ; Exact mapped bytes E8 88 F6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53537d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x535363
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 75 14: jne 0x5353b0
        __asm _emit 0x75
        __asm _emit 0x14
        push 107h
        push 5c9524h
        ; Exact mapped bytes E8 55 F6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5353b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x535393
        __asm _emit 0x75
        __asm _emit 0xdd
        mov byte ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5353de
        __asm _emit 0x74
        __asm _emit 0x14
        push 50h
        lea edx, [ebp - 60h]
        push edx
        ; Exact mapped bytes 66 8B 85 4C FF FF FF: mov ax, word ptr [ebp - 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 98 23 5E 00: call dword ptr [0x5e2398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov byte ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 51 02: movsx edx, word ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 0c000h
        ; Exact mapped bytes 72 2C: jb 0x535423
        __asm _emit 0x72
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 48 02: movsx ecx, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 0ffffh
        ; Exact mapped bytes 77 1A: ja 0x535423
        __asm _emit 0x77
        __asm _emit 0x1a
        push 50h
        lea edx, [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 48 02: movsx ecx, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x02
        push ecx
        ; Exact mapped bytes FF 15 3C 25 5E 00: call dword ptr [0x5e253c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 0E: shr ax, 0xe
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0e
        ; Exact mapped bytes 66 25 01 00: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 0F: shr dx, 0xf
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        and edx, 0ffffh
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5ca148h
        ; Exact mapped bytes E8 AA A7 F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
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
