// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D5F0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_0047d5f0_0047D5F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], ecx
        push 3ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 04 00 00: call 0x47da90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x47d625
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 06: jmp 0x47d62b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 7C 00 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x47d64a
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 06: jmp 0x47d650
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 67 00 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 B1 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
