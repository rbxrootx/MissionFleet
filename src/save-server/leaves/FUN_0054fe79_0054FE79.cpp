// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FE79 .. +0x187 bytes.
extern "C" __declspec(naked) void FUN_0054fe79_0054FE79() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f370h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes FF 15 28 BF 68 00: call dword ptr [0x68bf28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x54ffd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B6 FA FF FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x54ffd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x54feef
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 67bf90h
        ; Exact mapped bytes E8 56 8E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54feef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54fed2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 80040005h
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x54ffd4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x54ffd4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        add eax, 20h
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 EA C5 F7 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4D 4E FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x54ff6e
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0f003h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 30 9D F8 FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54ff68
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ah
        push 67bf90h
        ; Exact mapped bytes E8 DD 8D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ff68
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x54ff43
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 91 4D FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 28 4E FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0f18eh
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 FE 4E FB FF: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0f18eh
        push 101h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 07 4E FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 38 6B FA FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, 1
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2C C9 F7 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1D C9 F7 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 1B: jmp 0x54ffef
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x54feb9
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B0 0C FA FF: call 0x4f0c9f
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0xfa
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
