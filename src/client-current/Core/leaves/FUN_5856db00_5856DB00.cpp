// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DB00 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_5856db00_5856DB00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes F3 0F 2A 45 08: cvtsi2ss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 5E 05 18 52 89 58: divss xmm0, dword ptr [0x58895218]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F0: movss dword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 2A 45 10: cvtsi2sd xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 E9 34 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes D9 5D E8: fstp dword ptr [ebp - 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 10 45 E8: movss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 59 05 A0 5A 89 58: mulss xmm0, dword ptr [0x58895aa0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 2A 45 0C: cvtsi2ss xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 5E 05 18 52 89 58: divss xmm0, dword ptr [0x58895218]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        sub esp, 0ch
        mov eax, esp
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 21 E0 24 00: call 0x587bbba0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5856dba5
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A1 34 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
