// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D09C0D .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58d09c0d() {
    __asm {
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F 47 C6: cmova eax, esi
        __asm _emit 0x0f
        __asm _emit 0x47
        __asm _emit 0xc6
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 86 C0: xchg al, al
        __asm _emit 0x86
        __asm _emit 0xc0
        ; Exact mapped bytes A1 C8 35 D1 58: mov eax, dword ptr [0x58d135c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0x58
        ; Exact mapped bytes E9 51 42 03 00: jmp 0x58d3de6f
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
    }
}
