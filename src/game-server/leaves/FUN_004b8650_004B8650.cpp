// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8650 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004b8650_004B8650() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 44 00 00 00: call 0x4b86a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4b8668
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 27: jmp 0x4b868f
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 15: je 0x4b868d
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 7C 92 00 00: call 0x4c1900
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        neg eax
        sbb eax, eax
        ; Exact mapped bytes EB 02: jmp 0x4b868f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
