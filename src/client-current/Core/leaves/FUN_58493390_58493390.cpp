// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58493390 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58493390_58493390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 84h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E0 FB FF FF: call 0x58492f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
