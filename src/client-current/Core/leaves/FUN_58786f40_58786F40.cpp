// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786F40 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58786f40_58786F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E DA CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xda
        __asm _emit 0xcf
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 FF FF FF: call 0x58786f20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 95 00 00: call 0x587904b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
