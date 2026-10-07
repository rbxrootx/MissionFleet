// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 80 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6570 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588d6570_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 81 60 60 00 00: mov eax, dword ptr [ecx + 0x6060]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 10 0E 00 00: cmp eax, 0xe10
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 05: jl 0x588d6582
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes 05 F0 F1 FF FF: add eax, 0xfffff1f0
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 81 60 60 00 00: mov dword ptr [ecx + 0x6060], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 05: jge 0x588d6591
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 05 10 0E 00 00: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 60 60 00 00: mov dword ptr [ecx + 0x6060], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 32: lea edx, [eax + 0x32]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x32
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 83 F8 24: cmp eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x24
        ; Exact mapped bytes 89 81 5C 60 00 00: mov dword ptr [ecx + 0x605c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 03: jl 0x588d65b9
        __asm _emit 0x7c
        __asm _emit 0x03
        ; Exact mapped bytes 83 C0 DC: add eax, -0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xdc
        ; Exact mapped bytes 89 81 5C 60 00 00: mov dword ptr [ecx + 0x605c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
