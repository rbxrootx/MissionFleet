// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EFDFFD .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58efdffd_58EFDFFD() {
    __asm {
        ; Exact mapped bytes 8D B6 04 00 00 00: lea esi, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 33 C3: xor eax, ebx
        __asm _emit 0x33
        __asm _emit 0xc3
        ; Exact mapped bytes D1 C8: ror eax, 1
        __asm _emit 0xd1
        __asm _emit 0xc8
        ; Exact mapped bytes 85 E2: test edx, esp
        __asm _emit 0x85
        __asm _emit 0xe2
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes D1 C0: rol eax, 1
        __asm _emit 0xd1
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 80 FF 53 00 2C: lea eax, [eax + 0x2c0053ff]
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 3A EC: cmp ch, ah
        __asm _emit 0x3a
        __asm _emit 0xec
        ; Exact mapped bytes 33 D8: xor ebx, eax
        __asm _emit 0x33
        __asm _emit 0xd8
        ; Exact mapped bytes 03 E8: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xe8
        ; Exact mapped bytes E9 9E 66 BF FF: jmp 0x58af46bf
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x66
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
