// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D0F0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0040d0f0_0040D0F0() {
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
        lea ecx, [ecx + edx + 50h]
        ; Exact mapped bytes E8 88 72 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x88
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
