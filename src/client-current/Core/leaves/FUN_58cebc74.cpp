// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CEBC74 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58cebc74() {
    __asm {
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes E9 D2 32 E3 FF: jmp 0x58b1ef4f
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x32
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
    }
}
