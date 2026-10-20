// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797A00 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58797a00_58797A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 18h
        ; Exact mapped bytes E8 6F FF CE FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 90 F8 CE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 01 00 00: call 0x58797b50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
