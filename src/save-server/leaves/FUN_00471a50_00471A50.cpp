// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471A50 .. +0x224 bytes.
extern "C" __declspec(naked) void FUN_00471a50_00471A50() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1238h
        ; Exact mapped bytes E8 43 45 FF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1238h], 0
        mov dword ptr [ebp - 98h], 94h
        lea eax, [ebp - 98h]
        push eax
        ; Exact mapped bytes FF 15 74 B8 68 00: call dword ptr [0x68b874]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x471a9e
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 75 13: jne 0x471a9e
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [ebp - 94h], 5
        ; Exact mapped bytes 72 0A: jb 0x471a9e
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x471c70
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1090h
        lea ecx, [ebp - 1128h]
        push ecx
        push 63eeach
        ; Exact mapped bytes FF 15 78 B8 68 00: call dword ptr [0x68b878]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x471c44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1128h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x471ad1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x471b00
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 61h
        ; Exact mapped bytes 7C 18: jl 0x471afe
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 7ah
        ; Exact mapped bytes 7F 0D: jg 0x471afe
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        add dl, 0e0h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB C8: jmp 0x471ac8
        __asm _emit 0xeb
        __asm _emit 0xc8
        push 16h
        lea ecx, [ebp - 1128h]
        push ecx
        push 63ee94h
        ; Exact mapped bytes E8 4D 58 00 00: call 0x477360
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x471b28
        __asm _emit 0x75
        __asm _emit 0x0e
        lea edx, [ebp - 1128h]
        mov dword ptr [ebp - 1238h], edx
        ; Exact mapped bytes EB 73: jmp 0x471b9b
        __asm _emit 0xeb
        __asm _emit 0x73
        push 104h
        lea eax, [ebp - 122ch]
        push eax
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 122ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x471b50
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x471b7f
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 61h
        ; Exact mapped bytes 7C 18: jl 0x471b7d
        __asm _emit 0x7c
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 7ah
        ; Exact mapped bytes 7F 0D: jg 0x471b7d
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        add cl, 0e0h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB C8: jmp 0x471b47
        __asm _emit 0xeb
        __asm _emit 0xc8
        lea eax, [ebp - 122ch]
        push eax
        lea ecx, [ebp - 1128h]
        push ecx
        ; Exact mapped bytes E8 0E 4D 00 00: call 0x4768a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 1238h], eax
        cmp dword ptr [ebp - 1238h], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x471c44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ch
        mov edx, dword ptr [ebp - 1238h]
        push edx
        ; Exact mapped bytes E8 BA 4B 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 1238h], eax
        cmp dword ptr [ebp - 1238h], 0
        ; Exact mapped bytes 74 7C: je 0x471c44
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 1238h]
        add eax, 1
        mov dword ptr [ebp - 1238h], eax
        mov ecx, dword ptr [ebp - 1238h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x471c08
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3bh
        ; Exact mapped bytes 75 08: jne 0x471bfd
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 09: jmp 0x471c06
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB D8: jmp 0x471be0
        __asm _emit 0xeb
        __asm _emit 0xd8
        push 0ah
        push 0
        mov edx, dword ptr [ebp - 1238h]
        push edx
        ; Exact mapped bytes E8 98 87 FF FF: call 0x46a3b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1230h], eax
        cmp dword ptr [ebp - 1230h], 2
        ; Exact mapped bytes 74 12: je 0x471c3c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 1230h], 3
        ; Exact mapped bytes 74 09: je 0x471c3c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 1230h], 1
        ; Exact mapped bytes 75 08: jne 0x471c44
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1230h]
        ; Exact mapped bytes EB 2C: jmp 0x471c70
        __asm _emit 0xeb
        __asm _emit 0x2c
        lea eax, [ebp - 1234h]
        push eax
        ; Exact mapped bytes E8 A0 FD FF FF: call 0x4719f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 1234h]
        and ecx, 0ffh
        cmp ecx, 6
        ; Exact mapped bytes 7C 07: jl 0x471c6b
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 05: jmp 0x471c70
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
