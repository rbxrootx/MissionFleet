// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588576FE .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_588576fe_588576FE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2ch
        lea ecx, [ebp - 2ch]
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 8D 95 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push dword ptr [ebp + 10h]
        push ecx
        push ecx
        mov eax, esp
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6F A6 FF FF: call 0x58851d96
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 38 FC FF FF: call 0x5885736b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea ecx, [ebp - 2ch]
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes E8 A5 95 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, edi
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
    }
}
