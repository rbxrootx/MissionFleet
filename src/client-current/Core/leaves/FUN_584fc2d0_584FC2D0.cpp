// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC2D0 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_584fc2d0_584FC2D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x584fc36e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 A6 F8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA FD F8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x584fc30e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 31 FA FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584fc317
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x584fc32c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 32 FA FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584fc335
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x584fc358
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584fc35f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
