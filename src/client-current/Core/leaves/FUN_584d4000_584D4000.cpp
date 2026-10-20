// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D4000 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_584d4000_584D4000() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 75 15: jne 0x584d4027
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 1F FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
