// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077670 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_10077670_10077670() {
    __asm {
        mov eax, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 654h], 1
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x100776b7
        __asm _emit 0x75
        __asm _emit 0x36
        mov dword ptr [ecx + 7ch], 40000000h
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 2C 31 FF FF: call 0x1006a7c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B1 4B FB FF: call 0x1002c250
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, 101ace60h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 75 48 FB FF: call 0x1002bf20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        add esi, 4
        cmp esi, 101ace80h
        ; Exact mapped bytes 7C EE: jl 0x100776a4
        __asm _emit 0x7c
        __asm _emit 0xee
        pop esi
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 30: je 0x100776fc
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ecx + 134h], 0
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        ; Exact mapped bytes E8 CB D1 FD FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 8F 5C FD FF: call 0x1004d380
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 62 08: jmp dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x08
        ; Exact mapped bytes E9 2F 5D FD FF: jmp 0x1004d430
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
