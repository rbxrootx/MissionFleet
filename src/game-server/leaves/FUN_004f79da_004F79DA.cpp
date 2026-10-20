// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F79DA .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_004f79da_004F79DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 78 A0 FF FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4f79fd
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x4f7aff
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 F0 A1 FF FF: call 0x4f1c0e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push -4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 DB A1 FF FF: call 0x4f1c0e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 14: jne 0x4f7a4c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f0fh
        push 5c5574h
        ; Exact mapped bytes E8 B9 CF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7a4c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4f7a2e
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 0D: jne 0x4f7a67
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x4f7afa
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x4f7afa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c59fch
        push 5c5a38h
        ; Exact mapped bytes E8 91 81 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 5c5a3ch
        push 5c5a50h
        ; Exact mapped bytes E8 7F 81 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c5a54h
        ; Exact mapped bytes E8 51 81 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f7ae4
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f1ah
        push 5c5574h
        ; Exact mapped bytes E8 21 CF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7ae4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f7ac7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        push edx
        push -4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
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
