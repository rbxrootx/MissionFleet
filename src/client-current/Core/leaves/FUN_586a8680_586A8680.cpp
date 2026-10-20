// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A8680 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_586a8680_586A8680() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 14: jne 0x586a86a1
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 75 09: jne 0x586a86a1
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 00 00 00: call 0x586a86d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
