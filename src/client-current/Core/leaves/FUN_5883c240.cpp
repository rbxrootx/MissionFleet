// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C240 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5883c240() {
    __asm {
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes B8 4C 57 4D 54: mov eax, 0x544d574c
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0x4d
        __asm _emit 0x54
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 4C 57 4D 54: mov ecx, 0x544d574c
        __asm _emit 0xb9
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0x4d
        __asm _emit 0x54
        ; Exact mapped bytes 03 D8: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xd8
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
