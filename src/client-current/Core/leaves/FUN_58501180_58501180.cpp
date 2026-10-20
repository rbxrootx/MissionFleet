// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501180 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58501180_58501180() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 17 22 00 00: call 0x585033b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 11 61 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 41 FC FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
