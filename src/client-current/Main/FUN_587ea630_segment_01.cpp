// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EA660 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_587ea630_segment_01() {
    __asm {
        ; Exact mapped bytes 66 39 BE 50 03 00 00: cmp word ptr [esi + 0x350], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x587ea694
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 2C 0D 0F 00: call 0x588db3a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B B8 50 03 00 00: cmp di, word ptr [eax + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x587ea694
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C7 81 80 03 00 00 01 00 00 00: mov dword ptr [ecx + 0x380], 1
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 C5: jne 0x587ea660
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 02: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x02
        ; Exact mapped bytes 81 FD E4 B1 A0 58: cmp ebp, 0x58a0b1e4
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xe4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 7C 99: jl 0x587ea642
        __asm _emit 0x7c
        __asm _emit 0x99
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
