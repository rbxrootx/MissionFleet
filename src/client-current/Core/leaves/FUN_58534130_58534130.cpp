// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534130 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_58534130_58534130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x585341a3
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 1B 1A 00: call 0x586d5c50
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1b
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 C1 1A 00: call 0x586e0260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc1
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 28 F5 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x585341a3
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes A1 78 75 94 58: mov eax, dword ptr [0x58947578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x58534192
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58534199
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes C7 05 78 75 94 58 00 00 00 00: mov dword ptr [0x58947578], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
