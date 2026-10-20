// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F4B38B .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58f4b38b_58F4B38B() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 66 F7 C3 E7 62: test bx, 0x62e7
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0xe7
        __asm _emit 0x62
        ; Exact mapped bytes 85 D6: test esi, edx
        __asm _emit 0x85
        __asm _emit 0xd6
        ; Exact mapped bytes 81 EC 14 01 00 00: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 E2: test dx, sp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xe2
        ; Exact mapped bytes 80 FD DE: cmp ch, 0xde
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xde
        ; Exact mapped bytes 3A F6: cmp dh, dh
        __asm _emit 0x3a
        __asm _emit 0xf6
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 1B FC: sbb edi, esp
        __asm _emit 0x1b
        __asm _emit 0xfc
        ; Exact mapped bytes 81 D7 22 54 0B 54: adc edi, 0x540b5422
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0x22
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x54
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes E9 57 6E BF FF: jmp 0x58b4220b
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x6e
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
