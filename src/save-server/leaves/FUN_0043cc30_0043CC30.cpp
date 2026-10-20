// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CC30 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0043cc30_0043CC30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 31: je 0x43cc70
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 76 11: jbe 0x43cc59
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0F F8 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x43cc68
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5E 73 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x43cc77
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
