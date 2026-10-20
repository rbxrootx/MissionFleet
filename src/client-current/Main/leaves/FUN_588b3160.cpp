// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3160 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_588b3160() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes C7 81 24 01 00 00 01 00 00 00: mov dword ptr [ecx + 0x124], 1
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 20 01 00 00 00 00 00 00: mov dword ptr [ecx + 0x120], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
