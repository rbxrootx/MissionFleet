// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004806A0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004806a0_004806A0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 44 00 00 00: call 0x4806f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4806b8
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 27: jmp 0x4806df
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 15: je 0x4806dd
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 BC 20 00 00: call 0x482790
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        neg eax
        sbb eax, eax
        ; Exact mapped bytes EB 02: jmp 0x4806df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
