// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749FA0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58749fa0_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 83 FA 08: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 7D 64: jge 0x5874a00d
        __asm _emit 0x7d
        __asm _emit 0x64
        ; Exact mapped bytes 8B 84 91 F4 09 01 00: mov eax, dword ptr [ecx + edx*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 84 91 F4 09 01 00: mov dword ptr [ecx + edx*4 + 0x109f4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 7D 0B: jge 0x58749fda
        __asm _emit 0x7d
        __asm _emit 0x0b
        ; Exact mapped bytes C7 84 91 F4 09 01 00 AA AA AA AA: mov dword ptr [ecx + edx*4 + 0x109f4], 0xaaaaaaaa
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 80 54 03 00 00: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 1F: jne 0x5874a00c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 81 F0 0D 02 00: mov eax, dword ptr [ecx + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 64: mov edx, dword ptr [eax + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 03 D6: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xd6
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 09: jle 0x5874a005
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 01 71 64: add dword ptr [ecx + 0x64], esi
        __asm _emit 0x01
        __asm _emit 0x71
        __asm _emit 0x64
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 64 00 00 00 00: mov dword ptr [eax + 0x64], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
