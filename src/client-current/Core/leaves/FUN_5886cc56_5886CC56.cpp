// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CC56 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5886cc56_5886CC56() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x5886cc77
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 08 58 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 39 43 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ebp
        ret
        mov eax, dword ptr [eax + 10h]
        nop
        pop ebp
        ret
    }
}
