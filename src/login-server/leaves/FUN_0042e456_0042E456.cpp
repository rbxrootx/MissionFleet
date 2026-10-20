// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E456 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0042e456_0042E456() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        add ecx, 20h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 13 F3 FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x42e480
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [eax + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x42e47a
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ecx + 38h], eax
        ; Exact mapped bytes 75 04: jne 0x42e47a
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [ecx + 38h], 0
        mov dword ptr [esi + 38h], eax
        mov dword ptr [eax + 24h], esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
