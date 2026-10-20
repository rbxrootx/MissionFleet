// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4C95 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_004d4c95_004D4C95() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c476h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 78h
        mov dword ptr [ebp - 84h], ecx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 60 2B 00 00: call 0x4d781e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B1 A5 FF FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D0 BE 68 00: call dword ptr [0x68bed0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 11: jmp 0x4d4cf3
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 63 50 F7 FF: call 0x449d50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x4d4dd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 70h], eax
        lea edx, [ebp - 48h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 10 AC FF FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 1B: je 0x4d4d48
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        lea ecx, [ebp - 74h]
        push ecx
        push 0bd11ffffh
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7D 26 00 00: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4d4d48
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 9A: jmp 0x4d4ce2
        __asm _emit 0xeb
        __asm _emit 0x9a
        push 0
        lea edx, [ebp - 74h]
        push edx
        push -1
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 60 26 00 00: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4d4d68
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x4d4ce2
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 50: je 0x4d4dc4
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 87h
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B4 68 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4d4d97
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 2D: jmp 0x4d4dc4
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 EF 14 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0fh
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], 3
        ; Exact mapped bytes 74 12: je 0x4d4dbd
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 80h], 6
        ; Exact mapped bytes 74 0C: je 0x4d4dbd
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 80h], 7
        ; Exact mapped bytes 74 06: je 0x4d4dbd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 80h], 9
        ; Exact mapped bytes 75 07: jne 0x4d4dc4
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 50 2E 00 00: call 0x4d7c24
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x4d4ce2
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 70 B8 FF FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
