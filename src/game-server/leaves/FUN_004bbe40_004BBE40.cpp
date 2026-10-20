// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BBE40 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004bbe40_004BBE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 1
        ; Exact mapped bytes E8 A3 93 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 18: jne 0x4bbe6e
        __asm _emit 0x75
        __asm _emit 0x18
        mov dword ptr [ebp - 8], 5df03ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 16: jmp 0x4bbe84
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 8], 5df040h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x4bbe98
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes E8 FF 93 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x4bbecc
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 1F: je 0x4bbebd
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], 0
        push 1
        ; Exact mapped bytes E8 E2 93 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        add esp, 4
        ; Exact mapped bytes EB 0A: jmp 0x4bbec7
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 CC 93 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
