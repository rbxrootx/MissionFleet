// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF4F0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_587cf4f0_587CF4F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 A2 FF FF: call 0x587c9800
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6ach
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
