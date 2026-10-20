// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513F2D .. +0x2EC bytes.
extern "C" __declspec(naked) void _OnMouseMove_CSplitterWnd__IAEXIVCPoint___Z_00513F2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 98 8B 02 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 10: je 0x513f50
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 24 01 00 00: call dword ptr [edx + 0x124]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 84 88 02 00 00: je 0x5141e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 98 1A 02 00: call 0x535a1d
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 7D 0E: jge 0x513fa1
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB 1A: jmp 0x513fbb
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 7E 0C: jle 0x513fbb
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 7D 0E: jge 0x513fd7
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 1A: jmp 0x513ff1
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 7E 0C: jle 0x513ff1
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 1
        ; Exact mapped bytes 74 18: je 0x514015
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c0h], 65h
        ; Exact mapped bytes 7C 6B: jl 0x514074
        __asm _emit 0x7c
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 73h
        ; Exact mapped bytes 7F 5F: jg 0x514074
        __asm _emit 0x7f
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 4C: je 0x51406f
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [eax + 0a4h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 C3 20 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x20
        __asm _emit 0x02
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
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x5141e6
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 2
        ; Exact mapped bytes 74 1E: je 0x51409e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 0c9h
        ; Exact mapped bytes 7C 6F: jl 0x5140fe
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c0h], 0d7h
        ; Exact mapped bytes 7F 60: jg 0x5140fe
        __asm _emit 0x7f
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4D: je 0x5140f9
        __asm _emit 0x74
        __asm _emit 0x4d
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
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 39 20 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x20
        __asm _emit 0x02
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
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x5141e6
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c0h], 3
        ; Exact mapped bytes 74 26: je 0x514130
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 12dh
        ; Exact mapped bytes 0F 8C C9 00 00 00: jl 0x5141e6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c0h], 20dh
        ; Exact mapped bytes 0F 8F B6 00 00 00: jg 0x5141e6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 4D: je 0x51418b
        __asm _emit 0x74
        __asm _emit 0x4d
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
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [eax + 0a4h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 A7 1F 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1f
        __asm _emit 0x02
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
        mov ecx, dword ptr [eax + 0b0h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4D: je 0x5141e6
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 10h]
        add edx, 0b0h
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
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 4C 1F 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 0b0h
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
        ; Exact mapped bytes EB 2B: jmp 0x514213
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 04 01 00 00: call dword ptr [eax + 0x104]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 1C 01 00 00: call dword ptr [eax + 0x11c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
