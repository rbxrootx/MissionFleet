// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505AA0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58505aa0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 0F B6 45 0C: movzx eax, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 70 03 00 00: call 0x58505e20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
