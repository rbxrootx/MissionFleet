// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B42F0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587b42f0() {
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
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 11: movzx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x11
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 04 00 00: call 0x587b4710
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
