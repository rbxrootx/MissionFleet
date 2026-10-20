// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512C6E .. +0x11F bytes.
extern "C" __declspec(naked) void _InitialUpdateFrame_CFrameWnd__QAEXPAVCDocument__H_Z_00512C6E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2C 0E 00 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3D: jne 0x512cc7
        __asm _emit 0x75
        __asm _emit 0x3d
        push 1
        push 0e900h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 95 01 00: call 0x52c241
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x512cc7
        __asm _emit 0x74
        __asm _emit 0x25
        push 636f20h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 74 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x512cc7
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 0E 00 00: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x512d63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 1
        push 0
        push 0
        push 364h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD 94 01 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x512d00
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes E8 64 ED 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1E: je 0x512d33
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 13: jne 0x512d33
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x512d63
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x512d77
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
