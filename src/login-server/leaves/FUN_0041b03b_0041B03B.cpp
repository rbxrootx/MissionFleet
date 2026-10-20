// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B03B .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0041b03b_0041B03B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov edx, dword ptr [ecx + 48h]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x41b052
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx + 50h]
        neg eax
        sbb eax, eax
        and eax, edx
        leave
        ret
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x41b089
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ecx + 4]
        lea edx, [ebp - 8]
        push edx
        push 43ecd0h
        mov eax, dword ptr [eax + 4ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 2F: jl 0x41b0a0
        __asm _emit 0x7c
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        lea edx, [ebp - 4]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 12: jmp 0x41b09b
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 4]
        push edx
        push 440478h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x41b0a0
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        leave
        ret
        xor eax, eax
        leave
        ret
    }
}
