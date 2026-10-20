// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BCCF0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_586bccf0_586BCCF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD B0 DC FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        imul ecx, dword ptr [ebp + 8], 22h
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
