// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E81A0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_586e81a0_586E81A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0ch
        ; Exact mapped bytes E8 CF F7 D9 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 F0 F0 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf0
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE 0D 00 00: call 0x586e8f80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
