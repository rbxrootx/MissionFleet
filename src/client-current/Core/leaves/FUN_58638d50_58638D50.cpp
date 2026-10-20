// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638D50 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_58638d50_58638D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x58638e8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 F9 7E 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 73 4E ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB DF EB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5B: je 0x58638e09
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 14h], edx
        push 0ff000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 88 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A4 D1 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8A D1 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x58638e60
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 20h], eax
        push 0ff000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588aee58h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D5 87 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4B D1 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 31 D1 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 16 47 ED FF: call 0x5850d590
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 04 23 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
