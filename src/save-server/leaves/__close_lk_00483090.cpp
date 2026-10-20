// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483090 .. +0xAA bytes.
extern "C" __declspec(naked) void __close_lk_00483090() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 92 D2 FF FF: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 3D: je 0x4830e3
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 06: je 0x4830b2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 1A: jne 0x4830cc
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        ; Exact mapped bytes E8 77 D2 FF FF: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        push 2
        ; Exact mapped bytes E8 6B D2 FF FF: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 74 17: je 0x4830e3
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5B D2 FF FF: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4830ec
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4830f5
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 52 D1 FF FF: call 0x480250
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        mov byte ptr [edx + ecx + 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x483133
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B5 A4 FE FF: call 0x46d5e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x483135
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
