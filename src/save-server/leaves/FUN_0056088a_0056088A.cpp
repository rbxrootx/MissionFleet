// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056088A .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0056088a_0056088A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0a4h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 C0 F6 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
