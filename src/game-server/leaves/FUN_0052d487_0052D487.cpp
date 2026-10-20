// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D487 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0052d487_0052D487() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 6D 81 00 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 1A: jne 0x52d4b2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax + 50h], 0
        setne cl
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 08: jmp 0x52d4ba
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F E4 00 00: call 0x53b8e9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
