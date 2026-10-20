// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D9EF .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0049d9ef_0049D9EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 45 09 00: call 0x531f91
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C2 F2 FF FF: call 0x49ccd2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 46 09 00: call 0x5320a2
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 DB F3 FF FF: call 0x49ce04
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
