// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586510C0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_586510c0_586510C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        ; Exact mapped bytes E8 1B 70 E3 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x70
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 A1 E6 FF: call 0x584bb230
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
