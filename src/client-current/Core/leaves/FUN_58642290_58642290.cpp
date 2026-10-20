// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58642290 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58642290_58642290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 30c30c3h
        cmp dword ptr [ebp + 8], 30c30c3h
        ; Exact mapped bytes 76 06: jbe 0x586422b0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 C1 5C E4 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5c
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 54h
        mov esp, ebp
        pop ebp
        ret
    }
}
