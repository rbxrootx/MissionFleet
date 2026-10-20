// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A110 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5850a110_5850A110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 03 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
