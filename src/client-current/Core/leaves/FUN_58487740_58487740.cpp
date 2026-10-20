// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487740 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58487740_58487740() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894ccch
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 F0 5B 3C 00: call 0x5884d360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5b
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
