// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446750 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00446750_00446750() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 7F 0A: jg 0x446763
        __asm _emit 0x7f
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x446777
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 14h
        mov eax, 1
        shl eax, cl
        push eax
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
