// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505420 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58505420_58505420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 36: jne 0x58505467
        __asm _emit 0x75
        __asm _emit 0x36
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EB AF 32 00: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaf
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 1A: jne 0x5850545e
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 E8 61 96 58: mov edx, dword ptr [0x589661e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 E8 61 96 58: mov dword ptr [0x589661e8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D E8 61 96 58: mov ecx, dword ptr [0x589661e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 18 B0 32 00: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb0
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov esp, ebp
        pop ebp
        ret
    }
}
