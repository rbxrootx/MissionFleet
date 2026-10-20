// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4800 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_587c4800() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 01 8C AD 99 58: mov dword ptr [ecx], 0x5899ad8c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A D3 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
