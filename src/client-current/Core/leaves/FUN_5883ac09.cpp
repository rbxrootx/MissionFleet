// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AC09 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_5883ac09() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 87 10: xchg dword ptr [eax], edx
        __asm _emit 0x87
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
