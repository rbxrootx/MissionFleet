// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979430 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58979430() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov al, byte ptr [ebx + 0ch]
        test al, al
        ; Exact mapped bytes 75 21: jne 0x5897945e
        __asm _emit 0x75
        __asm _emit 0x21
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 76 19: jbe 0x5897945e
        __asm _emit 0x76
        __asm _emit 0x19
        push esi
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push 1
        push eax
        push ebx
        ; Exact mapped bytes E8 1A FD FF FF: call 0x58979170
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        inc esi
        dec edi
        ; Exact mapped bytes 75 ED: jne 0x5897944a
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        pop edi
        pop ebx
        ret
    }
}
