// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F08DE4 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58f08de4_58F08DE4() {
    __asm {
        ; Exact mapped bytes 0F 85 B0 A8 03 00: jne 0x58f4369a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [edx + 78h]
        cmc
        test edx, 1459106dh
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 66 A9 0F 6A: test ax, 0x6a0f
        __asm _emit 0x66
        __asm _emit 0xa9
        __asm _emit 0x0f
        __asm _emit 0x6a
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        test eax, eax
        ; Exact mapped bytes E9 70 9E E2 FF: jmp 0x58d32c75
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
