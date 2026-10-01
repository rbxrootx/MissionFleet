// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1015A870 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_1015a870() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b8ch
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1015a890
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 BE 24 01 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 59 51 FA FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        ret
    }
}
