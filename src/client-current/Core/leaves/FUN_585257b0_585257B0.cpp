// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585257B0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_585257b0_585257B0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 0B: jmp 0x585257c0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 11ch
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        cmp eax, 2
        ; Exact mapped bytes 7C 16: jl 0x585257e9
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7C FE FF FF: call 0x58525660
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB CC: jmp 0x585257b5
        __asm _emit 0xeb
        __asm _emit 0xcc
        pop ebp
        ret
    }
}
