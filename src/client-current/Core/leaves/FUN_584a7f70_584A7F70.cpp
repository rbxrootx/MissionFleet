// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7F70 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_584a7f70_584A7F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 45 01 00 00: call 0x584a80d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 05: jne 0x584a7f9c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x584a803f
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 FC: cvtsi2sd xmm0, dword ptr [ebp - 4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes F2 0F 58 45 20: addsd xmm0, qword ptr [ebp + 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes F2 0F 11 45 EC: movsd qword ptr [ebp - 0x14], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xec
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 EC: movsd xmm0, qword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 D3 90 3A 00: call 0x58851090
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 2A 45 08: cvtsi2sd xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x08
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 4D F4: movsd xmm1, qword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 DC: movsd qword ptr [ebp - 0x24], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes E8 01 91 3A 00: call 0x588510e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x91
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D E4: fstp qword ptr [ebp - 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 59 45 18: mulsd xmm0, qword ptr [ebp + 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes F2 0F 10 4D DC: movsd xmm1, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C C9: cvttsd2si ecx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc9
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes F2 0F 2A 45 0C: cvtsi2sd xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x0c
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 4D F4: movsd xmm1, qword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 CC: movsd qword ptr [ebp - 0x34], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes E8 13 91 3A 00: call 0x58851130
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x91
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D4: fstp qword ptr [ebp - 0x2c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd4
        ; Exact mapped bytes F2 0F 10 45 D4: movsd xmm0, qword ptr [ebp - 0x2c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes F2 0F 59 45 18: mulsd xmm0, qword ptr [ebp + 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes F2 0F 10 4D CC: movsd xmm1, qword ptr [ebp - 0x34]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C C1: cvttsd2si eax, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
