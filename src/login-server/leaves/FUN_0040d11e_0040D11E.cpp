// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D11E .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0040d11e_0040D11E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cc8h]
        lea ecx, [ecx + edx + 68h]
        ; Exact mapped bytes E8 5A 72 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
