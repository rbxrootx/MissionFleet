// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525A20 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58525a20_58525A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DD 14 F6 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F1 F2 FF FF: call 0x58524d30
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E2 F2 FF FF: call 0x58524d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 83 FA FF FF: call 0x585254e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 73 FD FF FF: call 0x585257f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
