// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897CBDA .. +0xF bytes.
extern "C" __declspec(naked) void __security_check_cookie() {
    __asm {
        ; Exact mapped bytes 3B 0D D4 FB 9C 58: cmp ecx, dword ptr [0x589cfbd4]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 75 02: jne 0x5897cbe4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes F3 C3: repz ret
        __asm _emit 0xf3
        __asm _emit 0xc3
        ; Exact mapped bytes E9 F9 09 00 00: jmp 0x5897d5e2
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
