// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684BA0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58684ba0_58684BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 2710h
        cdq
        mov ecx, 0d48h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0aach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 65 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x65
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
