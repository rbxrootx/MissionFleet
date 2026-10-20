// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D5C1 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_0046d5c1_0046D5C1() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 29: mov ebp, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x29
        ; Exact mapped bytes 8B 41 1C: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 41 18: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7D 7C FF FF: call 0x465252
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
