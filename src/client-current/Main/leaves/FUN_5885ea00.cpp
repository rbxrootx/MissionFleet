// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885EA00 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5885ea00() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 89 81 B0 00 00 00: mov dword ptr [ecx + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C8 00 00 00: mov word ptr [ecx + 0xc8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 AC 00 00 00: mov word ptr [ecx + 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 A8 00 00 00: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
