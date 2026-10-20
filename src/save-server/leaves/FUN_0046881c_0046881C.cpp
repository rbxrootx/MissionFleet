// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046881C .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0046881c_0046881C() {
    __asm {
        push 63e79ch
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 2D 46 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46883c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x46881c
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
