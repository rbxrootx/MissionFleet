// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832811 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58832811_58832811() {
    __asm {
        ; Exact mapped bytes 8B 0D 40 60 90 58: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 4E E6 40 BB: mov edi, 0xbb40e64e
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xbb
        ; Exact mapped bytes BE 00 00 FF FF: mov esi, 0xffff0000
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 04: je 0x5883282b
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 85 CE: test esi, ecx
        __asm _emit 0x85
        __asm _emit 0xce
        ; Exact mapped bytes 75 26: jne 0x58832851
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes E8 94 FF FF FF: call 0x588327c4
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 07: jne 0x5883283d
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes B9 4F E6 40 BB: mov ecx, 0xbb40e64f
        __asm _emit 0xb9
        __asm _emit 0x4f
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xbb
        ; Exact mapped bytes EB 0E: jmp 0x5883284b
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 85 CE: test esi, ecx
        __asm _emit 0x85
        __asm _emit 0xce
        ; Exact mapped bytes 75 0A: jne 0x5883284b
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 0D 11 47 00 00: or eax, 0x4711
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 10: shl eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x10
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 0D 40 60 90 58: mov dword ptr [0x58906040], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F7 D1: not ecx
        __asm _emit 0xf7
        __asm _emit 0xd1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 0D 80 60 90 58: mov dword ptr [0x58906080], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
