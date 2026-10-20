// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8500 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_584b8500() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 EC E8 FC FF: call 0x58486e00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 34: jmp 0x584b854d
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB 12: jmp 0x584b852d
        __asm _emit 0xeb
        __asm _emit 0x12
    }
}
