// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DDB193 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58ddb193() {
    __asm {
        ; Exact mapped bytes 33 D9: xor ebx, ecx
        __asm _emit 0x33
        __asm _emit 0xd9
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 66 3B E3: cmp sp, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe3
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes E9 60 47 E2 FF: jmp 0x58bff900
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
