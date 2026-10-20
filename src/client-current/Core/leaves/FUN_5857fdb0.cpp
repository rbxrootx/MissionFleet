// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FDB0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5857fdb0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 70 EC 2C 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xec
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
