// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F285B .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_004f285b_004F285B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes E8 4D 6F 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 52: je 0x4f28c7
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 32: jne 0x4f28b2
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 BE 2B 05 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 1A: jne 0x4f28a8
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 6D 2C 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 09: jne 0x4f28a1
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 AB B9 03 00: call 0x52e248
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f28a8
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 6D 6A 08 00: call 0x579315
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 0A: jne 0x4f28c7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 1B: je 0x4f28eb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 12: je 0x4f2912
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4f2919
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 24h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x4f298d
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes E8 20 26 05 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 06 92 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4f298d
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 19 6A FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 38h], 28h
        mov dword ptr [ebp - 34h], 1
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 38h]
        push ecx
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 92 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        push -4
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CB EE FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push -4
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 2C: jne 0x4f29e7
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 13: je 0x4f29e7
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push -4
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 38 F1 FF FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f2a0c
        __asm _emit 0x74
        __asm _emit 0x14
        push 347h
        push 5c5574h
        ; Exact mapped bytes E8 F9 1F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2a0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f29ef
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 92 AC 00 00 00: call dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
