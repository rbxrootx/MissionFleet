// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797BA0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58797ba0_58797BA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 C0 F9 FF FF: call 0x58797580
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
