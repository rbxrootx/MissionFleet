// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3C40 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_586e3c40_586E3C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA 03 E2 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
