// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434A04 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00434a04_00434A04() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        mov eax, 100h
        cmp esi, eax
        ; Exact mapped bytes 77 29: ja 0x434a4b
        __asm _emit 0x77
        __asm _emit 0x29
        push eax
        lea eax, [ebp - 100h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 E8 C4 43 00: call dword ptr [0x43c4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 75 14: jne 0x434a4b
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 100h]
        push eax
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x434a57
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 EC C4 43 00: call dword ptr [0x43c4ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
