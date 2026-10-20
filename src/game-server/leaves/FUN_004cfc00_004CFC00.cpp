// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFC00 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_004cfc00_004CFC00() {
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B9 80 E8 5D 00: mov ecx, 0x5de880
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 8A 51 06 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
