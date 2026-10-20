// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869DDB0 .. +0x38D bytes.
extern "C" __declspec(naked) void FUN_5869ddb0_5869DDB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b05a8h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 37: je 0x5869de05
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5869ddf4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869ddfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 37: je 0x5869de45
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5869de34
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869de3b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 37: je 0x5869de85
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5869de74
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869de7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 37: je 0x5869dec5
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5869deb4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869debb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 37: je 0x5869df05
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5869def4
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869defb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 37: je 0x5869df45
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x5869df34
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869df3b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 74 3D: je 0x5869df8e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x5869df7a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869df81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 100h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 37: je 0x5869dfce
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x5869dfbd
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869dfc4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5869dfe0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D 46 01 00 00: jge 0x5869e130
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0d4h], 0
        ; Exact mapped bytes 74 45: je 0x5869e03f
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x5869e027
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869e02e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0d4h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 5B: je 0x5869e0b2
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1A: je 0x5869e08f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869e099
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 74 61: je 0x5869e12b
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5869e108
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 88h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 78 FF FF FF: call dword ptr [ebp - 0x88]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869e112
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        ; Exact mapped bytes E9 A7 FE FF FF: jmp 0x5869dfd7
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 77 11 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
