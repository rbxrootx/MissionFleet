// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C39A0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_587c39a0_587C39A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 19: je 0x587c39c9
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 1ch]
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
