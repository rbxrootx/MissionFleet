// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D480 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_5856d480_5856D480() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588839ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B 93 F1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x93
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a97e8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5856d5c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 7
        ; Exact mapped bytes 7C 72: jl 0x5856d573
        __asm _emit 0x7c
        __asm _emit 0x72
        cmp dword ptr [ebp + 0ch], 0ah
        ; Exact mapped bytes 7F 6C: jg 0x5856d573
        __asm _emit 0x7f
        __asm _emit 0x6c
        push 20h
        ; Exact mapped bytes E8 F6 3A 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3a
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 39: je 0x5856d557
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [ebp + 0ch], 8
        ; Exact mapped bytes 7F 09: jg 0x5856d52d
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 2dh
        ; Exact mapped bytes EB 07: jmp 0x5856d534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 2eh
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 75 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x75
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CE 04 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5856d55e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 58h], eax
        ; Exact mapped bytes EB 54: jmp 0x5856d5c7
        __asm _emit 0xeb
        __asm _emit 0x54
        push 20h
        ; Exact mapped bytes E8 8A 3A 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3a
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 23: je 0x5856d5ad
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 74 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x74
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 78 04 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856d5b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 58h], edx
        ; Exact mapped bytes EB 09: jmp 0x5856d5d2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 01 00 00: call 0x5856d7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
