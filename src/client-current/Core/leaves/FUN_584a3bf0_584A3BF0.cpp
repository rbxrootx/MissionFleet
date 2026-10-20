// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3BF0 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_584a3bf0_584A3BF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887de3dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
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
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 10 E6 FF FF: call 0x584a2230
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 41 FA FF FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 8E EE 00 00 00: jle 0x584a3d2b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x584a3c54
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 8C CD 00 00 00: jl 0x584a3d2b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 14h], 38h
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 10h]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2A FB FF FF: call 0x584a37a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea edx, [ebp - 24h]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 EB FA FF FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8C E9 FF FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x584a3c9d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB AE: jmp 0x584a3c4b
        __asm _emit 0xeb
        __asm _emit 0xae
        imul edx, dword ptr [ebp - 14h], 38h
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 10h], 3
        ; Exact mapped bytes 75 02: jne 0x584a3cad
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 9E: jmp 0x584a3c4b
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 70ch], 4
        ; Exact mapped bytes 7C 11: jl 0x584a3cca
        __asm _emit 0x7c
        __asm _emit 0x11
        push 4
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 F1 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x584a3d0c
        __asm _emit 0xeb
        __asm _emit 0x42
        imul eax, dword ptr [ebp - 14h], 38h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax + 10h], 1
        ; Exact mapped bytes 75 1D: jne 0x584a3cf5
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70ch], 0
        ; Exact mapped bytes 7E 0F: jle 0x584a3cf3
        __asm _emit 0x7e
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E F1 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x584a3d0c
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 F1 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        imul ecx, dword ptr [ebp - 14h], 38h
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 10h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 40 E9 FF FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 1
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x584a3c4b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 76 E8 FF FF: call 0x584a25b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
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
        mov esp, ebp
        pop ebp
        ret
    }
}
