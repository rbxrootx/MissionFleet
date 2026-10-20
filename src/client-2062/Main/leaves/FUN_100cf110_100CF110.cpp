// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF110 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_100cf110_100CF110() {
    __asm {
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 1A 02 00 00: mov ax, word ptr [ecx + 0x21a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 18 02 00 00: mov dx, word ptr [ecx + 0x218]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push edx
        ; Exact mapped bytes E8 FB E0 F7 FF: call 0x1004d230
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        ret
    }
}
