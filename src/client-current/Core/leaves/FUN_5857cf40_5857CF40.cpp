// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CF40 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5857cf40_5857CF40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 80010f0bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 FA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
