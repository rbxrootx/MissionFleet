// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B1830 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_585b1830_585B1830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 FA 1C 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x585b1920
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x585b18f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE E7 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0e10h], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x585b1892
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 71 00 00: call 0x585b89b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x585b18cd
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 E8 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x585b18c0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 73 00 00: call 0x585b8c20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0D: jmp 0x585b18cd
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e10h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 2A 1A 00: call 0x587542e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 55 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 00 1D 00: call 0x58781950
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 27: jmp 0x585b1920
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF 29 1A 00: call 0x587542e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x29
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 00 1D 00: call 0x58781950
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 55 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
