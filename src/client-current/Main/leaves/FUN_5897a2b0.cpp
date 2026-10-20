// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897A2B0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5897a2b0() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebp
        ; Exact mapped bytes 7D 23: jge 0x5897a2e1
        __asm _emit 0x7d
        __asm _emit 0x23
        push ebx
        push edi
        mov edi, dword ptr [esp + 14h]
        lea ebx, [esi - 1]
        mov eax, dword ptr [esp + 18h]
        push eax
        push 1
        push esi
        push edi
        push ebx
        push edi
        ; Exact mapped bytes E8 69 C9 FF FF: call 0x58976c40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        inc esi
        cmp esi, ebp
        ; Exact mapped bytes 7C E8: jl 0x5897a2c7
        __asm _emit 0x7c
        __asm _emit 0xe8
        pop edi
        pop ebx
        pop esi
        pop ebp
        ret
    }
}
