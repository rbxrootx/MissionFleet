// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0290 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_584a0290_584A0290() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 128h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ch], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
