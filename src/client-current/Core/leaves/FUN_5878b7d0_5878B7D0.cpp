// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B7D0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5878b7d0_5878B7D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D1 BA CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        push eax
        push 8
        ; Exact mapped bytes E8 96 C1 CF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 B7 BA CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 68 D1 FF: call 0x584a2090
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x68
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
