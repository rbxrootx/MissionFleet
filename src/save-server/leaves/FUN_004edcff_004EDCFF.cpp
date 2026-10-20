// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDCFF .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_004edcff_004EDCFF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 FE FF FF: call 0x4edb22
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        push 677bd0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 AB 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 59 ED FD FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        push eax
        push 677be0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B AB 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD AD 03 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
