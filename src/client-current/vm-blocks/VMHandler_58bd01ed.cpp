// Byte-emitted source for one dynamically traced VM basic block.
// Executed extent: [0x58BD01ED, 0x58BD026A), 125 bytes; not a function boundary.
extern "C" __declspec(naked) void VMHandler_58bd01ed() {
    __asm {
        ; Exact mapped bytes 0F B6 44 25 00: movzx eax, byte ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x44
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 8D AD 01 00 00 00: lea ebp, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F AB D9: bts cx, bx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xab
        __asm _emit 0xd9
        ; Exact mapped bytes 0F BA F1 59: btr ecx, 0x59
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0x59
        ; Exact mapped bytes D3 C9: ror ecx, cl
        __asm _emit 0xd3
        __asm _emit 0xc9
        ; Exact mapped bytes 32 C3: xor al, bl
        __asm _emit 0x32
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F BA FA 02: btc dx, 2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes D0 C0: rol al, 1
        __asm _emit 0xd0
        __asm _emit 0xc0
        ; Exact mapped bytes 04 CF: add al, 0xcf
        __asm _emit 0x04
        __asm _emit 0xcf
        ; Exact mapped bytes 0F BF D4: movsx edx, sp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd4
        ; Exact mapped bytes D2 C1: rol cl, cl
        __asm _emit 0xd2
        __asm _emit 0xc1
        ; Exact mapped bytes 0F CA: bswap edx
        __asm _emit 0x0f
        __asm _emit 0xca
        ; Exact mapped bytes D0 C0: rol al, 1
        __asm _emit 0xd0
        __asm _emit 0xc0
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes F7 C6 A8 1B 77 47: test esi, 0x47771ba8
        __asm _emit 0xf7
        __asm _emit 0xc6
        __asm _emit 0xa8
        __asm _emit 0x1b
        __asm _emit 0x77
        __asm _emit 0x47
        ; Exact mapped bytes C0 EA E1: shr dl, 0xe1
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0xe1
        ; Exact mapped bytes 2C AE: sub al, 0xae
        __asm _emit 0x2c
        __asm _emit 0xae
        ; Exact mapped bytes 32 D8: xor bl, al
        __asm _emit 0x32
        __asm _emit 0xd8
        ; Exact mapped bytes 0F C9: bswap ecx
        __asm _emit 0x0f
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F BA E1 54: bt cx, 0x54
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x54
        ; Exact mapped bytes 8B 14 04: mov edx, dword ptr [esp + eax]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x04
        ; Exact mapped bytes 81 EF 04 00 00 00: sub edi, 4
        __asm _emit 0x81
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 17: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        ; Exact mapped bytes 0F C1 C9: xadd ecx, ecx
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0xc9
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes C0 D5 EF: rcl ch, 0xef
        __asm _emit 0xc0
        __asm _emit 0xd5
        __asm _emit 0xef
        ; Exact mapped bytes 8B 4C 25 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 80 FB 79: cmp bl, 0x79
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x79
        ; Exact mapped bytes 81 C5 04 00 00 00: add ebp, 4
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 F9: test cx, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf9
        ; Exact mapped bytes 81 FD 41 00 1D 23: cmp ebp, 0x231d0041
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0x23
        ; Exact mapped bytes 33 CB: xor ecx, ebx
        __asm _emit 0x33
        __asm _emit 0xcb
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 81 F1 D3 22 11 6F: xor ecx, 0x6f1122d3
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0x6f
        ; Exact mapped bytes C1 C1 03: rol ecx, 3
        __asm _emit 0xc1
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes E9 7E 6E 1B 00: jmp 0x58d870e8
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
    }
}
