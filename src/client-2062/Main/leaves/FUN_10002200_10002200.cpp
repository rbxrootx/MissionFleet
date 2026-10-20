// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002200 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_10002200_10002200() {
    __asm {
        ; Exact mapped bytes 8B 49 0C: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes E8 C8 C3 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3D 00 00 00 40: cmp eax, 0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
