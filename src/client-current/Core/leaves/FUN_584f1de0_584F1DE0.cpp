// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1DE0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584f1de0_584F1DE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 5F F9 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
