// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D099A .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_004d099a_004D099A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d7f1h
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
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x4d0ae0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4d0ae0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d0a0b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b5h
        push 5c7f78h
        ; Exact mapped bytes E8 FA 3F 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0a0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d09e6
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EE 04 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CB D5 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 104h
        push 464h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F9 C5 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 92 B1 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4d0a55
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F CC 01 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x4d0ab5
        __asm _emit 0xeb
        __asm _emit 0x60
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D4 D6 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        push 2eh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 71 D6 FF FF: call 0x4ce0da
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7C 3B: jl 0x4d0aad
        __asm _emit 0x7c
        __asm _emit 0x3b
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 04 06 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 14h]
        sub eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FE D3 FF FF: call 0x4cde8b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A7 CD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x4d0ba4
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FD CB 01 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 C9 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        or al, 1
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 74 CD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x4d0ba4
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 1f4h], 0
        ; Exact mapped bytes 74 65: je 0x4d0b51
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1f4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 3A: mov cx, word ptr [eax + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x3a
        test ecx, ecx
        ; Exact mapped bytes 75 1E: jne 0x4d0b1d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5dcbech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC CD 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4d0ba4
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 1f4h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1f4h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 3A: mov dx, word ptr [eax + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x3a
        mov eax, dword ptr [ecx + 1ch]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 CD 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 53: jmp 0x4d0ba4
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 96 00 00 00: mov ax, word ptr [edx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4d0b7c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5dcbech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A CD 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 28: jmp 0x4d0ba4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 96 00 00 00: mov ax, word ptr [edx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F CD 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        or al, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
