// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052AD0E .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_0052ad0e_0052AD0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 1e2h
        push 5c8fcch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 33 04 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52ad4a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e3h
        push 5c8fcch
        ; Exact mapped bytes E8 BB 9C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ad4a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x52ad2d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A6 40 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x52ad69
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x52ad74
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 A0 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x52ad94
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e7h
        push 5c8fcch
        ; Exact mapped bytes E8 71 9C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ad94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52ad7a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        and eax, 0ch
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x52ae13
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 45 FC FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3F: je 0x52ae02
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 39: je 0x52ae02
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 31: je 0x52ae02
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
        ; Exact mapped bytes E8 E8 0D 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        and ch, 0fdh
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 24h], ecx
        ; Exact mapped bytes EB 11: jmp 0x52ae13
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 0
        push 86h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 0D 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x52ae65
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 C6 F8 FF FF: call 0x52a701
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x52ae54
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 36dh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C0: jmp 0x52ae25
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
