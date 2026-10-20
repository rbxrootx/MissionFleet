// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8D50 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_584c8d50_584C8D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 31 FC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x584c8d74
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 33 FC FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x584c8e26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 88 00 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x584c8e21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx + 15ch], 0
        ; Exact mapped bytes 74 7B: je 0x584c8e21
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 36 FC FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 77 61: ja 0x584c8e21
        __asm _emit 0x77
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 2C 8E 4C 58: jmp dword ptr [edx*4 + 0x584c8e2c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes F3 0F 10 05 20 62 89 58: movss xmm0, dword ptr [0x58896220]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x62
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0C FC FF FF: call 0x584c89f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x584c8e21
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes EB 38: jmp 0x584c8e21
        __asm _emit 0xeb
        __asm _emit 0x38
        push ecx
        ; Exact mapped bytes F3 0F 10 05 C8 52 89 58: movss xmm0, dword ptr [0x588952c8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x584c89f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x584c8e21
        __asm _emit 0xeb
        __asm _emit 0x1b
        push ecx
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 FB FF FF: call 0x584c89f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x584c8d69
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
    }
}
