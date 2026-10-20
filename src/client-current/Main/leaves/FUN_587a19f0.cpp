// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A19F0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_587a19f0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 6C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes E8 10 D9 FB FF: call 0x5875f310
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E9 07 D9 FB FF: jmp 0x5875f310
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
