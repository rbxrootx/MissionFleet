// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E64B0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_587e64b0() {
    __asm {
        ; Exact mapped bytes 8B 81 44 65 00 00: mov eax, dword ptr [ecx + 0x6544]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 9C C2: setl dl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc2
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 89 91 44 65 00 00: mov dword ptr [ecx + 0x6544], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x44
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
