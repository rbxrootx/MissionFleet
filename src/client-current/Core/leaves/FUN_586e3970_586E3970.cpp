// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3970 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_586e3970_586E3970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 07 E2 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0xe2
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
