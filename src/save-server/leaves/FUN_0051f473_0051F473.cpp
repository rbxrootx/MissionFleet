// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F473 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_0051f473_0051F473() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x51f499
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a8h
        push 6792bch
        ; Exact mapped bytes E8 AC 98 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f499
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51f47f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x51f5ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x51f5ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ch], ecx
        push 63a880h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 AC FB FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51f4e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b0h
        push 6792bch
        ; Exact mapped bytes E8 5E 98 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f4e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x51f4c2
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x51f5ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 93 FE FF: call 0x508852
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x51f5ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 14h]
        and edx, dword ptr [ecx + 64h]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x51f5ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F D5 00 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x51f547
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b6h
        push 6792bch
        ; Exact mapped bytes E8 FE 97 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f547
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51f52d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 63a868h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 AC FB FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51f572
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 6792bch
        ; Exact mapped bytes E8 D3 97 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f572
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51f54d
        __asm _emit 0x75
        __asm _emit 0xd5
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 71 FB FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC C8 00 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x51f705
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x51f5e1
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 14h]
        or edx, 4
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x51f5e1
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 14h]
        and ch, 0fh
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [ebp + 14h]
        or dh, 20h
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 73 F9 FF FF: call 0x51ef60
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x51f60a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 6792bch
        ; Exact mapped bytes E8 3B 97 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f60a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51f5f0
        __asm _emit 0x75
        __asm _emit 0xe0
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F8 70 FB FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 0C: jne 0x51f63d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 20h], ecx
        push 0e81fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 67 FB FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51f667
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d2h
        push 6792bch
        ; Exact mapped bytes E8 DE 96 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f667
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51f64d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 63a880h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 AB FB FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51f692
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d3h
        push 6792bch
        ; Exact mapped bytes E8 B3 96 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f692
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x51f66d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 6ch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 14: je 0x51f6b7
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d5h
        push 6792bch
        ; Exact mapped bytes E8 8E 96 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f6b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x51f698
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 92 FE FF: call 0x50891f
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x51f705
        __asm _emit 0x74
        __asm _emit 0x12
        push 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 70 FB FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F C7 00 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc7
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
