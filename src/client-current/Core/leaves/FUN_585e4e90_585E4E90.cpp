// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4E90 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_585e4e90_585E4E90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 02 ED FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 00 00 00: call 0x585e4f30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
