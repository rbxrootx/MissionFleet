// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2050 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584a2050_584A2050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 51 52 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 42 52 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 CC ED FF FF: call 0x584a0e50
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
