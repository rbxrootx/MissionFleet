// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506AC0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58506ac0_58506AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 02 00 00: call 0x58506d50
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588a3c68h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
