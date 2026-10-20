// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFA00 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_588cfa00() {
    __asm {
        ; Exact mapped bytes 66 83 49 24 0F: or word ptr [ecx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 49 70: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x70
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
