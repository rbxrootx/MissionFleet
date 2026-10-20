// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB9B0 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004eb9b0_004EB9B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cf62h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4eb9e8
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5E 7A FB FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4eb9f9
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 674260h
        ; Exact mapped bytes E8 4C D3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb9f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4eb9d1
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 11: je 0x4eba16
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 0f1b0h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E9 92 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        add eax, 10h
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E6 0A FE FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4C 93 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4eba51
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0f006h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2F E2 FE FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 51 93 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 0f1b0h
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1F 94 01 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E 93 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 52 0E FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 43 0E FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
