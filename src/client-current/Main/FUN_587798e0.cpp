// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 82 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587798E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_587798e0_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 91 A8 00 00 00: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B1 B4 00 00 00: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 27: jle 0x5877991c
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 5C 24 10: mov bx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8E 5C 05 00 00: lea ecx, [esi + 0x55c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 99 A8 FA FF FF: cmp bx, word ptr [ecx - 0x558]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x99
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 04: jne 0x58779911
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 3B 39: cmp edi, dword ptr [ecx]
        __asm _emit 0x3b
        __asm _emit 0x39
        ; Exact mapped bytes 74 13: je 0x58779924
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 81 C1 74 05 00 00: add ecx, 0x574
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7C E8: jl 0x58779904
        __asm _emit 0x7c
        __asm _emit 0xe8
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 69 C0 74 05 00 00: imul eax, eax, 0x574
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
