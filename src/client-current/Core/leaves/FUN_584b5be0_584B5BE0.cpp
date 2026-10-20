// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B5BE0 .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_584b5be0_584B5BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e61eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
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
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 ED 2F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588958c0h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A 03 FD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 1
        mov dword ptr [ebp - 24h], 6
        push 70h
        ; Exact mapped bytes E8 A6 B3 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb3
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 42: je 0x584b5cb0
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 05 C7 FC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b5cb7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 2ch], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 00 04 FD FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 19 B3 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb3
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x584b5d30
        __asm _emit 0x74
        __asm _emit 0x35
        push 29h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 ED FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 12h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 45 4C 30 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b5d37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 5ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 38h], edx
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 50 F8 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0x2f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CD 00 FD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50h], 0
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
