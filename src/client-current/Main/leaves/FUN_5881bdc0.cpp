// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881BDC0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5881bdc0() {
    __asm {
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 1E: jne 0x5881bde7
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 64h
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
