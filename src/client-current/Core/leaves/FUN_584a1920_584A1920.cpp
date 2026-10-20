// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1920 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584a1920_584A1920() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E4 55 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 D5 55 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 C6 55 FE FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B4 1D 00 00: call 0x584a3710
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
