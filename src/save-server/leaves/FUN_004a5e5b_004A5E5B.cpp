// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5E5B .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004a5e5b_004A5E5B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 19 08 00: call 0x5277cf
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 63de68h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
