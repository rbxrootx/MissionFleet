// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051242D .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_0051242d_0051242D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 1e6h
        push 673dc0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 14 7E FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x512469
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e7h
        push 673dc0h
        ; Exact mapped bytes E8 DC 68 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512469
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51244c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 3E FC FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x512488
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x512493
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 95 08 FC FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5124b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 673dc0h
        ; Exact mapped bytes E8 92 68 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5124b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x512499
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        and eax, 0ch
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x512532
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 43 FC FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3F: je 0x512521
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 39: je 0x512521
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 31: je 0x512521
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        or ch, 2
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 24h], ecx
        push 0
        push 1
        push 86h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 91 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        and ch, 0fdh
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 24h], ecx
        ; Exact mapped bytes EB 11: jmp 0x512532
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 0
        push 86h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 07 91 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x512584
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 C6 F8 FF FF: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x512573
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 36dh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C0: jmp 0x512544
        __asm _emit 0xeb
        __asm _emit 0xc0
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
