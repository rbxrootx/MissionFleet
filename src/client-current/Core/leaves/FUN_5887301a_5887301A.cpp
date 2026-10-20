// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887301A .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5887301a_5887301A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push 0
        ; Exact mapped bytes E8 72 DC FD FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F FD FF FF: call 0x58872d74
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 95 DC FD FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
