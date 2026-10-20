// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58690C20 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58690c20_58690C20() {
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
        mov eax, dword ptr [edx + 760h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C A5 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa5
        __asm _emit 0x12
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
