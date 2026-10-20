// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C48C0 .. +0x1D7 bytes.
extern "C" __declspec(naked) void FUN_587c48c0_587C48C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588924b3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 39: je 0x587c492e
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 13: je 0x587c491a
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c4921
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], 0
        push 6ch
        ; Exact mapped bytes E8 CF C6 06 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 39: je 0x587c4981
        __asm _emit 0x74
        __asm _emit 0x39
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 0F CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 4]
        add esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 7C D3 FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7c
        __asm _emit 0xd3
        __asm _emit 0xff
        sub esi, eax
        push esi
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 94 2A 06 00: call 0x58827410
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c4988
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 39: je 0x587c49e6
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 13: je 0x587c49d2
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c49d9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        push 6ch
        ; Exact mapped bytes E8 17 C6 06 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 39: je 0x587c4a39
        __asm _emit 0x74
        __asm _emit 0x39
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF 0E CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 4]
        add esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 7B D3 FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7b
        __asm _emit 0xd3
        __asm _emit 0xff
        sub esi, eax
        push esi
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DC 29 06 00: call 0x58827410
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c4a40
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 20: je 0x587c4a85
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 3D 0E CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes E8 4C 07 FF FF: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
