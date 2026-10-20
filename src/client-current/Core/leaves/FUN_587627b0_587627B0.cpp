// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587627B0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_587627b0_587627B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 39 97 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 E9 FF FF: call 0x58761160
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
