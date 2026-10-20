// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E640 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5882e640_5882E640() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0E: je 0x5882e656
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [esi]
        ; Exact mapped bytes E8 B1 AF 02 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        pop esi
        ret
    }
}
