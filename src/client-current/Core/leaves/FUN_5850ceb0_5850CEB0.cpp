// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CEB0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850ceb0_5850CEB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 8
        ; Exact mapped bytes E8 BF AA F7 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 E0 A3 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E 45 F9 FF: call 0x584a13f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
