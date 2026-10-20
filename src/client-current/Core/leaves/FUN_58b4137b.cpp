// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B4137B .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58b4137b() {
    __asm {
        ; Exact mapped bytes 8D 7F 02: lea edi, [edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 3B C9: cmp ecx, ecx
        __asm _emit 0x3b
        __asm _emit 0xc9
        ; Exact mapped bytes 66 F7 C3 B6 6B: test bx, 0x6bb6
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0xb6
        __asm _emit 0x6b
        ; Exact mapped bytes 83 6D FC 01: sub dword ptr [ebp - 4], 1
        __asm _emit 0x83
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes E9 47 46 00 00: jmp 0x58b459d5
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
