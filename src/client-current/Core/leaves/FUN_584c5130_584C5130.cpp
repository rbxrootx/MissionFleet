// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5130 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_584c5130_584C5130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 0B 00 00: call 0x584c5c60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 63 21 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 01 00 00: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
