// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EB90E0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58eb90e0() {
    __asm {
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 04 39: lea eax, [ecx + edi]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x39
        ; Exact mapped bytes 87 FF: xchg edi, edi
        __asm _emit 0x87
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 FA: movzx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xfa
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 30 45 09 00: jmp 0x58f4d61f
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
    }
}
