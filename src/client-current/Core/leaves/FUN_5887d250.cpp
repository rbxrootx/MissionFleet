// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D250 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5887d250() {
    __asm {
        ; Exact mapped bytes 80 F9 40: cmp cl, 0x40
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x40
        ; Exact mapped bytes 73 15: jae 0x5887d26a
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 73 06: jae 0x5887d260
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes 0F AD D0: shrd eax, edx, cl
        __asm _emit 0x0f
        __asm _emit 0xad
        __asm _emit 0xd0
        ; Exact mapped bytes D3 EA: shr edx, cl
        __asm _emit 0xd3
        __asm _emit 0xea
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes D3 E8: shr eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe8
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
