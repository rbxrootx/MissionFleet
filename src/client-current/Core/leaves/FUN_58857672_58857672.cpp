// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857672 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58857672_58857672() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2ch
        lea ecx, [ebp - 2ch]
        push esi
        push 0
        ; Exact mapped bytes E8 1A 96 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push dword ptr [ebp + 10h]
        push ecx
        push ecx
        mov eax, esp
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FC A6 FF FF: call 0x58851d96
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 57 F4 FF FF: call 0x58856afd
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea ecx, [ebp - 2ch]
        mov esi, eax
        ; Exact mapped bytes E8 34 96 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
