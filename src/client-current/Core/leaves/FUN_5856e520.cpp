// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E520 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5856e520() {
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
        ; Exact mapped bytes A3 C4 60 96 58: mov dword ptr [0x589660c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
