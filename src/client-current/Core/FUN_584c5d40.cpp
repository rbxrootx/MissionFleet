// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5D40 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_584c5d40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 47 FE FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
