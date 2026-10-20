// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C82D0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_587c82d0_587C82D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 68h], 64h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 68h]
        push ecx
        push 1000400h
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
