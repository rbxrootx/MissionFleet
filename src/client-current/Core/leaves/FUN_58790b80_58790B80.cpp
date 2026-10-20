// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790B80 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58790b80_58790B80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 60 FF FF: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 00 00 00: call 0x58790bb0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0fch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
