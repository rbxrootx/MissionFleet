// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CAF70 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_584caf70_584CAF70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0C: jne 0x584caf8b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        ; Exact mapped bytes EB 10: jmp 0x584caf9b
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 0A: jne 0x584caf9b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 6C: je 0x584cb010
        __asm _emit 0x74
        __asm _emit 0x6c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 34: jne 0x584cafde
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 2B: je 0x584cafde
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA 01 00 00: call 0x584cb180
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 55 29 2A 00: call 0x5876d930
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x584cb010
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 29: je 0x584cb010
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 01 00 00: call 0x584cb180
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 21 29 2A 00: call 0x5876d930
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x29
        __asm _emit 0x2a
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
