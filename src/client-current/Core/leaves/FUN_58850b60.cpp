// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850B60 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58850b60() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 81 78 04 80 00 00 00: cmp dword ptr [eax + 4], 0x80
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 06: jg 0x58850b78
        __asm _emit 0x7f
        __asm _emit 0x06
        ; Exact mapped bytes 0F BE 41 08: movsx eax, byte ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
