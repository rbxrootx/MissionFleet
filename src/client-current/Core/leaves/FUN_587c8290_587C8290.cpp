// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8290 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_587c8290_587C8290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 68h], 64h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 68h]
        push ecx
        push 1000400h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
