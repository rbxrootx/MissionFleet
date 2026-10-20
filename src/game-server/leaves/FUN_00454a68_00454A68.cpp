// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00454A68 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_00454a68_00454A68() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b710h
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
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0
        push 0
        ; Exact mapped bytes E8 FE 51 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 DF 76 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 20h
        ; Exact mapped bytes E8 F2 88 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x454aef
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 76 81 00 00: call 0x45cc60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x454af6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 14h]
        add edx, 76ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 18h], eax
        lea ecx, [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 E1 8E 09 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 3C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 8
        ; Exact mapped bytes E8 92 8C 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E 3C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B6 7B 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 93 8C 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 12 3C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
