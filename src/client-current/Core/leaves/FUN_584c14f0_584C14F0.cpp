// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C14F0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_584c14f0_584C14F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 5C: je 0x584c156d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A BB FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 11: jne 0x584c153f
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 23 00 00: call 0x584c38d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2C: jmp 0x584c156b
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C BB FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 0F: jne 0x584c156b
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 23 00 00: call 0x584c38f0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 04: jmp 0x584c1571
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes EB 34: jmp 0x584c15a5
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x584c15a2
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 1E 00 00: call 0x584c33b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes F3 0F 11 45 E8: movss dword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes E8 30 3F FE FF: call 0x584a54c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 10 4D E8: movss xmm1, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 58 C8: addss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 11 4D F4: movss dword ptr [ebp - 0xc], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes D9 45 F4: fld dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xf4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
