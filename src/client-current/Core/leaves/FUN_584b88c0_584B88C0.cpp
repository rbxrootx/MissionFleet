// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B88C0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_584b88c0_584B88C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ddd0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 C1 FC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 BA E9 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 FF E5 FC FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
