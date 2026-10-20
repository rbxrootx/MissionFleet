// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760C60 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58760c60_58760C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3b4h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 52 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
