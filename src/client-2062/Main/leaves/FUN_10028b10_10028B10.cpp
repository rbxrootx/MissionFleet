// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028B10 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_10028b10_10028B10() {
    __asm {
        mov eax, dword ptr [ecx + 40ch]
        mov edx, 0fff0h
        mov dword ptr [ecx + 44ch], 2
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 410h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 408h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ret
    }
}
