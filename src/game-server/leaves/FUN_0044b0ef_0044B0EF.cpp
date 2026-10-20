// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B0EF .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_0044b0ef_0044B0EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 32h
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B4 87 FB FF: call 0x4038e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x44b158
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 0
        ; Exact mapped bytes 75 07: jne 0x44b156
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x44b15e
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x44b15c
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x44b15e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 78 D6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
