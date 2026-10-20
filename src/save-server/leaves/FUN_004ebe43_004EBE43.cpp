// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBE43 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_004ebe43_004EBE43() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 100h
        ; Exact mapped bytes 77 30: ja 0x4ebe92
        __asm _emit 0x77
        __asm _emit 0x30
        push 100h
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 15: jne 0x4ebe92
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4ebea0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 4C BE 68 00: call dword ptr [0x68be4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
