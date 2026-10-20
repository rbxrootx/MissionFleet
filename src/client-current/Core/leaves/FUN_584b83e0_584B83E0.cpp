// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B83E0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_584b83e0_584B83E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B6 EE FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 C5 FC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 A2 EE FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 73 EF FC FF: call 0x584873a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
