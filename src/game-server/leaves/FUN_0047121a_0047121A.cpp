// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047121A .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_0047121a_0047121A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 88 FD FF: call 0x449aab
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x471297
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 94 FD FF: call 0x44a69b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x47126c
        __asm _emit 0x74
        __asm _emit 0x2c
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40d00h
        ; Exact mapped bytes E8 CB B1 FD FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 88 FD FF: call 0x449ae6
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x47130d
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 5F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 64 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 63 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 76: jmp 0x47130d
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 95 FD FF: call 0x44a7ed
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x471308
        __asm _emit 0x75
        __asm _emit 0x60
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 93 FD FF: call 0x44a69b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4712dd
        __asm _emit 0x74
        __asm _emit 0x29
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40d00h
        ; Exact mapped bytes E8 57 B1 FD FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 88 FD FF: call 0x449ae6
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 30: jmp 0x47130d
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 5F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 64 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 63 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47130d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C9 74 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
