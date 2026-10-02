// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E9880 .. +0x26B bytes.
extern "C" __declspec(naked) void FUN_586e9880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 50 02 00 00: jne 0x586e9ae3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e98a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 83 9E 00 00 00: jae 0x586e994d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 98h]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x586e9948
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 12ch], 0
        ; Exact mapped bytes 74 60: je 0x586e9935
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 10h], edx
        push 0feh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 BE 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 EC 00 00 00: movss dword ptr [eax + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 1C 00 00: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 5F DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5f
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 128h], eax
        xor eax, eax
        ; Exact mapped bytes E9 9D 01 00 00: jmp 0x586e9ae5
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x586e989c
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes 75 0E: jne 0x586e9969
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 1D 00 00: call 0x586eb730
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x586e9ae3
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes 75 0E: jne 0x586e9985
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 1C 00 00: call 0x586eb640
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x586e9ae3
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 114h]
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x586e9ae3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 144h], 0
        ; Exact mapped bytes 75 13: jne 0x586e99b6
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x586e9ae3
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x586e9ada
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e99d8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 73 1D: jae 0x586e99fb
        __asm _emit 0x73
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 98 C5 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e99cf
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e9a0d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0fh
        ; Exact mapped bytes 73 1D: jae 0x586e9a30
        __asm _emit 0x73
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 63 C5 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e9a04
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4A C5 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 34 C5 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1E C5 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FF C4 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 30h], edx
        push 0ch
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 64 B0 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb0
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 65 C4 D9 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 148h], 1
        ; Exact mapped bytes EB 09: jmp 0x586e9ae3
        __asm _emit 0xeb
        __asm _emit 0x09
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
