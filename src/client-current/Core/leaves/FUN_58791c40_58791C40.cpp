// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791C40 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58791c40_58791C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58791c5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 13: jge 0x58791c74
        __asm _emit 0x7d
        __asm _emit 0x13
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 4]
        ; Exact mapped bytes E8 0F 00 00 00: call 0x58791c80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x58791c52
        __asm _emit 0xeb
        __asm _emit 0xde
        mov esp, ebp
        pop ebp
        ret
    }
}
