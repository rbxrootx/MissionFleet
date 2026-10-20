// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587967B0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587967b0_587967B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F3 0A CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        push eax
        push 8
        ; Exact mapped bytes E8 B8 11 CF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D9 0A CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
