// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1608 .. +0x74 bytes.
extern "C" __declspec(naked) void __AfxHandleSetCursor__YGHPAVCWnd__II_Z_004F1608() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 0ch], -2
        ; Exact mapped bytes 75 62: jne 0x4f1674
        __asm _emit 0x75
        __asm _emit 0x62
        cmp dword ptr [ebp + 10h], 201h
        ; Exact mapped bytes 74 12: je 0x4f162d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 10h], 207h
        ; Exact mapped bytes 74 09: je 0x4f162d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 10h], 204h
        ; Exact mapped bytes 75 47: jne 0x4f1674
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 35 00 00: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x4f1649
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 B9 04 00: call 0x53cf96
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x4f1674
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 2D BE 04 00: call 0x53d481
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 1B: je 0x4f1674
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 DD FF FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4f1674
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB BD 04 00: call 0x53d438
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4f1676
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
