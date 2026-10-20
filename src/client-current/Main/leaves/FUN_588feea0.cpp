// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FEEA0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_588feea0() {
    __asm {
        ; Exact mapped bytes 8B 15 6C B4 A0 58: mov edx, dword ptr [0x58a0b46c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 24: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
