// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BE65 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5887be65_5887BE65() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push 0
        ; Exact mapped bytes E8 27 4E FD FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x5887be9c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 50 4E FD FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
