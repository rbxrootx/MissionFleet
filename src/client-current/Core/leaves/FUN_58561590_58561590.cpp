// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561590 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58561590_58561590() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC F9 FF FF: call 0x58560f50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0f4240h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F F9 FF FF: call 0x58560f50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
