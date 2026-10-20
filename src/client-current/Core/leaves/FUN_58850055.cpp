// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850055 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58850055() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 41 04: lea eax, [ecx + 4]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E8 F1 FF FF: call 0x5884f250
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 1A C0: sbb al, al
        __asm _emit 0x1a
        __asm _emit 0xc0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FE C0: inc al
        __asm _emit 0xfe
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
