// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535EE5 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_00535ee5_00535EE5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 50 FA FF FF: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
