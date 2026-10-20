// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043238D .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0043238d_0043238D() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 75 37: jne 0x4323d2
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [eax + 8], 70h
        ; Exact mapped bytes 75 31: jne 0x4323d2
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [eax + 0ch]
        shr eax, 10h
        test ah, 40h
        ; Exact mapped bytes 75 26: jne 0x4323d2
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 35 48 C4 43 00: mov esi, dword ptr [0x43c448]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 17: jl 0x4323d2
        __asm _emit 0x7c
        __asm _emit 0x17
        push 11h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0E: jl 0x4323d2
        __asm _emit 0x7c
        __asm _emit 0x0e
        push 12h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 05: jl 0x4323d2
        __asm _emit 0x7c
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x4323d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
