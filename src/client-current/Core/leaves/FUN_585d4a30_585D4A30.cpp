// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4A30 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_585d4a30_585D4A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B 6A EF FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
