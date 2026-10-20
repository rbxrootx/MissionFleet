// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414025 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_00414025_00414025() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 74 20: je 0x41404e
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes E8 B1 0D 00 00: call 0x414de4
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes 76 16: jbe 0x414055
        __asm _emit 0x76
        __asm _emit 0x16
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 10: je 0x414055
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 B9 0F 00 00: call 0x415005
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
        or dword ptr [esi + 0e8h], 0ffffffffh
        pop esi
        ret
    }
}
