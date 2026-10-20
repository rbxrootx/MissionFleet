// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CA230 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_584ca230_584CA230() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 17: jne 0x584ca257
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 0E: jne 0x584ca257
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 05: jne 0x584ca257
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x584ca34d
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 75 73: jne 0x584ca2d3
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 75 2C: jne 0x584ca295
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 0D: jne 0x584ca27f
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 0A 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 14: jmp 0x584ca293
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca293
        __asm _emit 0x75
        __asm _emit 0x0b
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 0A 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x584ca2d1
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 1
        ; Exact mapped bytes 75 16: jne 0x584ca2b4
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca2b2
        __asm _emit 0x75
        __asm _emit 0x0b
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 0A 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x584ca2d1
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 2
        ; Exact mapped bytes 75 14: jne 0x584ca2d1
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca2d1
        __asm _emit 0x75
        __asm _emit 0x0b
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 0A 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7A: jmp 0x584ca34d
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 75 71: jne 0x584ca34d
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 2C: jne 0x584ca311
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 0D: jne 0x584ca2fb
        __asm _emit 0x75
        __asm _emit 0x0d
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 09 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 14: jmp 0x584ca30f
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca30f
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 09 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x584ca34d
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 1
        ; Exact mapped bytes 75 16: jne 0x584ca330
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca32e
        __asm _emit 0x75
        __asm _emit 0x0b
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 09 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x584ca34d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 2
        ; Exact mapped bytes 75 14: jne 0x584ca34d
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x584ca34d
        __asm _emit 0x75
        __asm _emit 0x0b
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 09 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
