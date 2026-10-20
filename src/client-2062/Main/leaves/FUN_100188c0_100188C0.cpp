// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100188C0 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_100188c0_100188C0() {
    __asm {
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 61 24 FB FF: and word ptr [ecx + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes C7 41 78 00 00 00 00: mov dword ptr [ecx + 0x78], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
