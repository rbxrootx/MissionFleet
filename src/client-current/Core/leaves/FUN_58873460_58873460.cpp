// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873460 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58873460_58873460() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 15: jne 0x58873480
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 FF EF FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 30 DB FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ebp
        ret
        push dword ptr [ebp + 8]
        push 0
        ; Exact mapped bytes FF 35 70 9C 96 58: push dword ptr [0x58969c70]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 68 41 89 58: call dword ptr [0x58894168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop ebp
        ret
    }
}
