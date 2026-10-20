// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CEB60 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_584ceb60_584CEB60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 39 10 00 00: call 0x584cfbb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 33 87 FB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 67 FF FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x67
        __asm _emit 0xff
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
