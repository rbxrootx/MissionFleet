// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E60F0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004e60f0_004E60F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        push 14h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BA F7 F7 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 95 06 05 00: call 0x5367b7
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
