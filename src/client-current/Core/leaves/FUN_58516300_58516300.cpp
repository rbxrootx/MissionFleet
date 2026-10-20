// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58516300 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_58516300_58516300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3ecch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 25: je 0x58516343
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 18 AD 31 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xad
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 37: je 0x58516383
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58516372
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58516379
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 37: je 0x585163c3
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x585163b2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585163b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585163d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 7D: jge 0x58516458
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585163ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 60: jge 0x58516453
        __asm _emit 0x7d
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 68h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 4B: je 0x58516451
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 68h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58516436
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851643d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 68h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 91: jmp 0x585163e4
        __asm _emit 0xeb
        __asm _emit 0x91
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x585163cc
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 E7 29 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
