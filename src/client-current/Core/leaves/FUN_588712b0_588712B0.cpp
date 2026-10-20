// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588712B0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_588712b0_588712B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 DB F9 FD FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F FE FF FF: call 0x58871108
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea ecx, [ebp - 28h]
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes E8 FF F9 FD FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, edi
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
    }
}
