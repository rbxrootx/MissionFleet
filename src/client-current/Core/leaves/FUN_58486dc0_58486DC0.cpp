// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486DC0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_58486dc0_58486DC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E3 04 00 00: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        push 4
        ; Exact mapped bytes E8 A8 0B 00 00: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C9 04 00 00: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
