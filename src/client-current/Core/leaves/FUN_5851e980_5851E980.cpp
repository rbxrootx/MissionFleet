// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E980 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5851e980_5851E980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 18h
        ; Exact mapped bytes E8 EF 8F F6 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 10 89 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E B0 F8 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
