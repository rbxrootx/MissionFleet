// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9110 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_100d9110_100D9110() {
    __asm {
        mov eax, dword ptr [ecx + 0c4h]
        mov edx, 2
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0b0h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [ecx + 0b0h]
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes 66 C7 81 9C 01 00 00 03 00: mov word ptr [ecx + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ret
    }
}
