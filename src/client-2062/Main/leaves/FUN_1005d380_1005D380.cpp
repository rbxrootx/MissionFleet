// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D380 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_1005d380_1005D380() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 E0 DE 09 00: call 0x100fb270
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 56 1C 10: mov edx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        push 0
        push 0
        ; Exact mapped bytes 66 8B 8A AA 09 00 00: mov cx, word ptr [edx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 01 F5 FE FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
