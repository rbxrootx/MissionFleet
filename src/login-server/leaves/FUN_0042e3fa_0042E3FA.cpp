// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E3FA .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0042e3fa_0042E3FA() {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 74 32: je 0x42e433
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [esi + 38h], 0
        ; Exact mapped bytes 75 2C: jne 0x42e433
        __asm _emit 0x75
        __asm _emit 0x2c
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [esp + 0ch]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 5C F3 FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x42e433
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42e433
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 92 8C 00 00 00: call dword ptr [edx + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
