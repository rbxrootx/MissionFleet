// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585636C0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_585636c0_585636C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 62: je 0x58563731
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0b8h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 45: je 0x5856372f
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp + 8]
        cdq
        idiv dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 8
        ; Exact mapped bytes 75 09: jne 0x58563717
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes EB 0C: jmp 0x58563723
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0a4h], eax
        ; Exact mapped bytes EB 0D: jmp 0x5856373e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
