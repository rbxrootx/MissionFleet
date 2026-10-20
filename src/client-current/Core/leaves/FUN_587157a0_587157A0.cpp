// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587157A0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587157a0_587157A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 06: je 0x587157b3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 75 04: jne 0x587157b7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 07: jne 0x587157c4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 3F: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 06: je 0x587157d0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 75 07: jne 0x587157d7
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 2C: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 07: jne 0x587157e4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 1F: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 07: jne 0x587157f1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 4
        ; Exact mapped bytes EB 12: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 9
        ; Exact mapped bytes 75 07: jne 0x587157fe
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 6
        ; Exact mapped bytes EB 05: jmp 0x58715803
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 5
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
