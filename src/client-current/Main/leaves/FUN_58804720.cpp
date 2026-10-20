// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58804720 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58804720() {
    __asm {
        ; Exact mapped bytes 8B 41 14: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 01 D0 D3 99 58: mov dword ptr [ecx], 0x5899d3d0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 85 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x00
    }
}
