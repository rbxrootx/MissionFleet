// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C31E0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004c31e0_004C31E0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4c31ee
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4c3271
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 5df0d0h
        ; Exact mapped bytes 74 77: je 0x4c3271
        __asm _emit 0x74
        __asm _emit 0x77
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 B8 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 A7 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes E8 96 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 85 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 74 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 63 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 52 7A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ret
    }
}
