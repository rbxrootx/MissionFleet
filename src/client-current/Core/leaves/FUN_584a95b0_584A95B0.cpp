// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A95B0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584a95b0_584A95B0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 54 D9 FD FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 45 D9 FD FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 36 D9 FD FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 24 11 00 00: call 0x584aa710
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
