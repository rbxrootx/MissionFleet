// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FB90 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5851fb90_5851FB90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x5851fbab
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 0C 00 00: call 0x585207e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5]
        mov esp, ebp
        pop ebp
        ret
    }
}
