// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C4A0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5876c4a0_5876C4A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ebch], ecx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov ebx, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 31 FA D1 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov byte ptr [eax + 5], bl
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 F6 FF FF: call 0x5876bbb0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
