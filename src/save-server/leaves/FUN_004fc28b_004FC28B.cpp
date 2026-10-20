// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC28B .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_004fc28b_004FC28B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 30h], ecx
        push 549h
        push 674fe8h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 B9 DF FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4fc2b7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x4fc389
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 5F 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FB 60 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8B F8 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 9F FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 40000h
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4fc2f2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AA 07 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 558h
        push 674fe8h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5B DF FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 9F FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1040000h
        cmp eax, 40000h
        ; Exact mapped bytes 75 6E: jne 0x4fc387
        __asm _emit 0x75
        __asm _emit 0x6e
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A6 5E 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 99 60 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 F8 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 88 60 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A B6 FE FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 77 60 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F9 B5 FE FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C0 5F 03 00: call 0x53231c
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x03
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
        ; Exact mapped bytes E8 A5 5F 03 00: call 0x53231c
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E4 5B 03 00: call 0x531f62
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4fc387
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x4fc389
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
