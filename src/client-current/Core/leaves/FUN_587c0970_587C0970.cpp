// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0970 .. +0x1E6 bytes.
extern "C" __declspec(naked) void FUN_587c0970_587C0970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8C CD 01 00 00: jl 0x587c0b50
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 14: jmp 0x587c09a2
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 72 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x72
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 08: jle 0x587c09b0
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x587c09b0
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x587c098e
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x587c0b50
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 40 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587c09e1
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 72 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x72
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 40 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x40
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 0A 00 00: call 0x587c14b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x587c09ef
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 72 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x72
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 72 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x72
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587c0a16
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 3F CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 72 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 66 E2 FF: call 0x585e7110
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x66
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x587c0a27
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 3F CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 42: jne 0x587c0a77
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 CD 71 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587c0a5a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 BB 71 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 11: jmp 0x587c0a6b
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 78 3F CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 79: jne 0x587c0afe
        __asm _emit 0x75
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 7D 71 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587c0aaa
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 6B 71 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 11: jmp 0x587c0abb
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 28 3F CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587c0afe
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 B5 FB CD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x587c0afe
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA 5E CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5e
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 39 05 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x587c0b34
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0b3b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
