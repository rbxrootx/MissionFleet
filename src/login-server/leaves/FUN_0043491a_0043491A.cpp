// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043491A .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_0043491a_0043491A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x434939
        __asm _emit 0x74
        __asm _emit 0x13
        push -10h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        and eax, 0fh
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 04: je 0x43493d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x434960
        __asm _emit 0xeb
        __asm _emit 0x23
        lea eax, [ebp - 0ch]
        push 0ah
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 94 C3 43 00: call dword ptr [0x43c394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push 43eac0h
        push eax
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
