// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9F80 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584b9f80_584B9F80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 20 D3 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 D4 FC FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
