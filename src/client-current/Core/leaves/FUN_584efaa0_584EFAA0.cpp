// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFAA0 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_584efaa0_584EFAA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D5 F9 FF FF: call 0x584ef4a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 24: je 0x584efaf8
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x584efaf3
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 62 15 34 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 3E: jmp 0x584efb36
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 588a2610h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 04 00 00: call 0x584effc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584efb14
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 9
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x584efb33
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 22 15 34 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
