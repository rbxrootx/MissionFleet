// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504AA0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58504aa0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 28 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        push 18h
        ; Exact mapped bytes E8 C6 2E F8 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E7 27 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 07 FC FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
