// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C2C80 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_587c2c80() {
    __asm {
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
