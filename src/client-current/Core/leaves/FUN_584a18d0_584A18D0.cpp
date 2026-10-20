// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A18D0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584a18d0_584A18D0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 34 56 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 25 56 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 16 56 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E4 1D 00 00: call 0x584a36f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
