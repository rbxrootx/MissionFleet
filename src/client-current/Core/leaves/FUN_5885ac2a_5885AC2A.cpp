// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885AC2A .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885ac2a_5885AC2A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push 0
        ; Exact mapped bytes E8 62 60 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F FF FF FF: call 0x5885ab61
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 88 60 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
