// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004375A5 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004375a5_004375A5() {
    __asm {
        push esi
        ; Exact mapped bytes E8 08 09 00 00: call 0x437eb3
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 1C 00 00: call 0x439222
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 6D FE FF: call 0x41e351
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 40: jne 0x4375fc
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes E8 0A AA FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x4375d9
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x4375d5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        and dword ptr [esi + 58h], 0
        ; Exact mapped bytes E8 A8 E4 FF FF: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 114h], 1
        lea esi, [eax + 114h]
        ; Exact mapped bytes 75 0F: jne 0x4375fc
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 15 24 C6 43 00: call dword ptr [0x43c624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 C6 43 00: call dword ptr [0x43c620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
