// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2010 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584a2010_584A2010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 91 52 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 82 52 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC ED FF FF: call 0x584a0e00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
