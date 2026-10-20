// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850D350 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_5850d350_5850D350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 47: je 0x5850d3a9
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes F2 0F 2A 45 F8: cvtsi2sd xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 8]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 5A 45 F0: cvtsd2ss xmm0, qword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F3 0F 5E 05 5C 1A 8A 58: divss xmm0, dword ptr [0x588a1a5c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 58 05 20 3E 8A 58: addss xmm0, dword ptr [0x588a3e20]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 40 32 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], eax
        ; Exact mapped bytes EB 04: jmp 0x5850d3ad
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x5850d3b3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 24h]
        mov esp, ebp
        pop ebp
        ret
    }
}
