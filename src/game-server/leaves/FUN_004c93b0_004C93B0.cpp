// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C93B0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_004c93b0_004C93B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4B 00 00 00: call 0x4c9410
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 59f6c0h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 4D 6F FE FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
