// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E35A0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_100e35a0_100E35A0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
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
        ; Exact mapped bytes C7 41 60 00 00 00 40: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 89 51 5C: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5c
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
