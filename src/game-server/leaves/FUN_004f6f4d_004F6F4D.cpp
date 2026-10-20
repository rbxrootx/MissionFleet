// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6F4D .. +0x2C6 bytes.
extern "C" __declspec(naked) void FUN_004f6f4d_004F6F4D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f6f7e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d64h
        push 5c5574h
        ; Exact mapped bytes E8 87 DA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6f7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f6f59
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4f6fa5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d65h
        push 5c5574h
        ; Exact mapped bytes E8 60 DA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6fa5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4f6f84
        __asm _emit 0x75
        __asm _emit 0xd9
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4f6fdd
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 7E FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4f6fdd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4f6fe4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 24h]
        or edx, 18h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 24h], edx
        ; Exact mapped bytes E8 AB 27 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 34h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7037
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d72h
        push 5c5574h
        ; Exact mapped bytes E8 CE D9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7037
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4f7014
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x4f7113
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x4f7113
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7084
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d78h
        push 5c5574h
        ; Exact mapped bytes E8 81 D9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7084
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4f7061
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 19: je 0x4f70a9
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 95 82 FF FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 53 04 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x4f70d7
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x4f70d7
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x4f70d7
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 0
        push 121h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4f7107
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        push 36ah
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D6 4A 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4f710e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x4f703d
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7136
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d93h
        push 5c5574h
        ; Exact mapped bytes E8 CF D8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7136
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4f7113
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 78 26 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4f7162
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0
        ; Exact mapped bytes E8 BB 21 08 00: call 0x579315
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x4f720a
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 31: je 0x4f7199
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 74 0C: je 0x4f7180
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 104h
        ; Exact mapped bytes 75 19: jne 0x4f7199
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 81 FF FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 82 52 04 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4f71aa
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5E: jmp 0x4f7208
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 06 26 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4f71d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x4f7113
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 FE FF FF: jmp 0x4f7014
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        and al, 0e7h
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x4f720a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB E8: jmp 0x4f71f2
        __asm _emit 0xeb
        __asm _emit 0xe8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
