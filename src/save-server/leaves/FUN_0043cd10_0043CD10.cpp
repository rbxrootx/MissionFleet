// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CD10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0043cd10_0043CD10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 31: je 0x43cd50
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 76 11: jbe 0x43cd39
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2F F7 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x43cd48
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7E 72 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x43cd57
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
