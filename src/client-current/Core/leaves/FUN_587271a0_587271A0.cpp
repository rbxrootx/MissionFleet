// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587271A0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_587271a0_587271A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587271bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 15: jge 0x587271d6
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 3d4h]
        ; Exact mapped bytes E8 ED 96 09 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x587271b2
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
