// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBCD1 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004ebcd1_004EBCD1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4ebce1
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x4ebd1d
        __asm _emit 0xeb
        __asm _emit 0x3c
        push -10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0fh
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 04: je 0x4ebcf9
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 24: jmp 0x4ebd1d
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0ah
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 04 BF 68 00: call dword ptr [0x68bf04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 675a80h
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
