// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051202C .. +0x2DF bytes.
extern "C" __declspec(naked) void _StopTracking_CSplitterWnd__MAEXH_Z_0051202C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 3abh
        push 5c84b0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 18 91 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 05: jne 0x512059
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AC 02 00 00: jmp 0x512305
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 18: je 0x51209b
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        push -1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 3E 40 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        push -1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 2C 40 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x5122ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 1
        ; Exact mapped bytes 75 1D: jne 0x512121
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x5122ca
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 65h
        ; Exact mapped bytes 7C 44: jl 0x512171
        __asm _emit 0x7c
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 73h
        ; Exact mapped bytes 7F 38: jg 0x512171
        __asm _emit 0x7f
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        sub eax, 65h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 10 01 00 00: call dword ptr [edx + 0x110]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x5122ca
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 2
        ; Exact mapped bytes 75 1D: jne 0x51219a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x5122ca
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 0c9h
        ; Exact mapped bytes 7C 49: jl 0x5121f2
        __asm _emit 0x7c
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 0d7h
        ; Exact mapped bytes 7F 3A: jg 0x5121f2
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        sub eax, 0c9h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5122ca
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 12dh
        ; Exact mapped bytes 0F 8C 89 00 00 00: jl 0x51228e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 20dh
        ; Exact mapped bytes 7F 7A: jg 0x51228e
        __asm _emit 0x7f
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 10 01 00 00: call dword ptr [eax + 0x110]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x5122ca
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 3
        ; Exact mapped bytes 75 30: jne 0x5122ca
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 24: jne 0x512305
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x512305
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        push eax
        push -1
        push -1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 D1 FD FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
