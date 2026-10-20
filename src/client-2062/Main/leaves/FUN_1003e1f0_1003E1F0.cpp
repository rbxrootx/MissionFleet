// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003E1F0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_1003e1f0_1003E1F0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 80 4E 24 0F: or byte ptr [esi + 0x24], 0xf
        __asm _emit 0x80
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes E8 B1 A6 FD FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes E8 A9 A6 FD FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
