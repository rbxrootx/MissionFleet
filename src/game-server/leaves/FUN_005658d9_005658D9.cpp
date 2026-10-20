// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005658D9 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_005658d9_005658D9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 14: je 0x565916
        __asm _emit 0x74
        __asm _emit 0x14
        push 237h
        push 5d0bb4h
        ; Exact mapped bytes E8 EF F0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565916
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5658f6
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes FF 15 24 28 5E 00: call dword ptr [0x5e2824]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 75 07: jne 0x56593e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3B 01 00 00: jmp 0x565a79
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e8h
        push ecx
        ; Exact mapped bytes E8 1F 3A F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d4h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5659a8
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e4h], 0
        xor eax, eax
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x565a79
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ech], 0
        ; Exact mapped bytes 74 14: je 0x5659c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 244h
        push 5d0bb4h
        ; Exact mapped bytes E8 3D F0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5659c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5659a8
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 14: je 0x5659ee
        __asm _emit 0x74
        __asm _emit 0x14
        push 245h
        push 5d0bb4h
        ; Exact mapped bytes E8 17 F0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5659ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5659ce
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0fch], 0
        ; Exact mapped bytes 74 14: je 0x565a14
        __asm _emit 0x74
        __asm _emit 0x14
        push 246h
        push 5d0bb4h
        ; Exact mapped bytes E8 F1 EF FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565a14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5659f4
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x565a27
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 52: jmp 0x565a79
        __asm _emit 0xeb
        __asm _emit 0x52
        push 0
        push 1
        mov edx, dword ptr [ebp - 8]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes E8 F2 7B FE FF: call 0x54d63a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 F0 29 5E 00: call dword ptr [0x5e29f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 100h], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 100h], 0
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
