// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5D80 .. +0x195 bytes.
extern "C" __declspec(naked) void FUN_584c5d80_584C5D80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ec4fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 6
        push 0cdh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E ED FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A1 4B 2F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895ce4h
        push 4e20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 00 FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 F7 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf7
        __asm _emit 0x2e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D 00 FC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 53 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x53
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 EA B1 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb1
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1F: je 0x584c5e49
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 6
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2C 4B 2F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c5e50
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 118h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 12 53 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x53
        __asm _emit 0x2f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 24h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 F7 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 100h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 108h], 1
        ; Exact mapped bytes E8 9D AD 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xad
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 64h
        idiv ecx
        add edx, 3e8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0fch], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 61 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        imul ecx, eax, 64h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], ecx
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
