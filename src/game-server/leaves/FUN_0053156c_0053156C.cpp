// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053156C .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0053156c_0053156C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 74 FE FF FF: call 0x5313fa
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 FE FF FF: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
