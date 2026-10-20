// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486E55 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_00486e55_00486E55() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 01 00 00: call 0x487056
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x486f85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 46ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 CA F7 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A CA F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A0 CA F7 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 F6 FB FF: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 12: je 0x486ed2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 BC 45 00 00: call 0x48b48e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 18 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 46: je 0x486f44
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x486f30
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 B5 18 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x486f37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0c8h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 20: je 0x486fae
        __asm _emit 0x74
        __asm _emit 0x20
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 50h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 34 18 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x487005
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D DC CB 5D 00: mov ecx, dword ptr [0x5dcbdc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 89 0D DC CB 5D 00: mov dword ptr [0x5dcbdc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC CB 5D 00: mov edx, dword ptr [0x5dcbdc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        push 5c45e4h
        ; Exact mapped bytes E8 47 8C 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x486ffe
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 E7 17 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x487005
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 17 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
