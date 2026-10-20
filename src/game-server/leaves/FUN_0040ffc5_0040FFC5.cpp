// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FFC5 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0040ffc5_0040FFC5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        push 46bh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 2B 40 FF FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 39 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 EA 87 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
