// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D890 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_1000d890_1000D890() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 23: je 0x1000d8bc
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esi + 28h]
        add eax, -20h
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes 79 18: jns 0x1000d8bc
        __asm _emit 0x79
        __asm _emit 0x18
        ; Exact mapped bytes E8 B7 17 0F 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 00 18 0F 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x0f
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x1000d8bc
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop esi
        ret
    }
}
