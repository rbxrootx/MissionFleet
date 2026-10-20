// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051305B .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_0051305b_0051305B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 30h], ecx
        push 549h
        push 5c84b0h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 E9 80 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x513087
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x513159
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C2 2C 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D3 2E 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5B 90 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 BD FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 40000h
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5130c2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7A 9F 02 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 558h
        push 5c84b0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 8B 80 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 BD FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1040000h
        cmp eax, 40000h
        ; Exact mapped bytes 75 6E: jne 0x513157
        __asm _emit 0x75
        __asm _emit 0x6e
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 60 2C 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 71 2E 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 8F 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 60 2E 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA F8 FE FF: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4F 2E 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 49 F8 FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 89 2D 02 00: call 0x535eb5
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6E 2D 02 00: call 0x535eb5
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 21 29 02 00: call 0x535a6f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x513157
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x513159
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
