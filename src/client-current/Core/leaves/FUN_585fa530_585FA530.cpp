// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FA530 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_585fa530_585FA530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F0: movss dword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 C4 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 12 00 00: call 0x585fb7e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 55555555h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes F2 0F 2A 45 F8: cvtsi2sd xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 8]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 5A 45 E4: cvtsd2ss xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F3 0F 5E 05 60 4D 89 58: divss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 6E 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6e
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 0ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 DC: movsd qword ptr [ebp - 0x24], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 5A 45 DC: cvtsd2ss xmm0, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F3 0F 59 45 F0: mulss xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes E8 0D 6E 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6e
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
