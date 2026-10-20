// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A74A .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5883a74a_5883A74A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push dword ptr [ebp + 0ch]
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 63 1A 00 00: call 0x5883c1bd
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 10h]
        push eax
        push dword ptr [ebp + 0ch]
        push 0
        ; Exact mapped bytes E8 64 19 00 00: call 0x5883c0cd
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3E AB C8 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
