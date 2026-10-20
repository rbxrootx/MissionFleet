// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0267 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_004d0267_004D0267() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 99h
        push 5c7ebch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DF AE 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 15 02 00: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
