// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CBE0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5850cbe0_5850CBE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C0 A6 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        movzx ecx, word ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 AC A6 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
