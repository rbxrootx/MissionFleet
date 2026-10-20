// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533AB7 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00533ab7_00533AB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 9D FB FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
