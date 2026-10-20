// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522B40 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58522b40_58522B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 28: je 0x58522b80
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 95 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD D7 F8 FF: call 0x584b0340
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 4E F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D2: jmp 0x58522b52
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
