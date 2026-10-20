// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9580 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004c9580_004C9580() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 44 F9 FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 1A 58 00: mov eax, dword ptr [0x581a98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x58
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 00 00 00: call 0x4c9620
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
