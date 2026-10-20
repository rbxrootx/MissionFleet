// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977680 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58977680() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes C7 41 14 31 00 00 00: mov dword ptr [ecx + 0x14], 0x31
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
