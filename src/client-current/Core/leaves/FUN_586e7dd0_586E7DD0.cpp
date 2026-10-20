// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7DD0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_586e7dd0_586E7DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 15555555h
        cmp dword ptr [ebp + 8], 15555555h
        ; Exact mapped bytes 76 06: jbe 0x586e7df0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 81 01 DA FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
