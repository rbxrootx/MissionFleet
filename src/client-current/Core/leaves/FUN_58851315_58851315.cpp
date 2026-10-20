// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851315 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58851315_58851315() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 11: jne 0x58851333
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes E8 48 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 7A FC FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 24: jmp 0x58851357
        __asm _emit 0xeb
        __asm _emit 0x24
        push 80h
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 10 FF FF FF: call 0x58851253
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [esi], eax
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58851355
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 1E 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x58851357
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
