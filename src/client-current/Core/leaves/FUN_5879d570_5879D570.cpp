// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879D570 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5879d570_5879D570() {
    __asm {
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 74 29: je 0x5879d59f
        __asm _emit 0x74
        __asm _emit 0x29
        push esi
        push 0ah
        push dword ptr [ecx + 4]
        lea esi, [ecx + 14h]
        ; Exact mapped bytes E8 2C D8 FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, esi
        cmp dword ptr [esi + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879d591
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, dword ptr [esi]
        push dword ptr [esi + 10h]
        push ecx
        push eax
        ; Exact mapped bytes E8 B5 DA FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        ret
    }
}
