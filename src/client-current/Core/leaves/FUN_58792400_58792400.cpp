// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792400 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58792400_58792400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 25 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 4B FF FF: call 0x58786f20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E E0 FF FF: call 0x587904b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
