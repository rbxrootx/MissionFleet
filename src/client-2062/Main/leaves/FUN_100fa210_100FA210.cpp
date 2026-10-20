// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FA210 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_100fa210_100FA210() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, 1
        cmp edx, eax
        ; Exact mapped bytes 75 16: jne 0x100fa233
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ecx + 2cch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ecx + 2cch]
        or byte ptr [ecx + 24h], 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2cch]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ecx + 2cch]
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
