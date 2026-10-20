// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00537C82 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00537c82_00537C82() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 1B 9E FF FF: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 80 BC 68 00: call dword ptr [0x68bc80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 49 FA FF: call 0x4dc67a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
