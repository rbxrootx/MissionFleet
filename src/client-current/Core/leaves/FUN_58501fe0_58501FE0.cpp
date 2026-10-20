// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501FE0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58501fe0_58501FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 F8 FF FF: call 0x585018f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 28h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
