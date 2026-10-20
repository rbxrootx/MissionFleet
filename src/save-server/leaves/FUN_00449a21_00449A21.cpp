// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449A21 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00449a21_00449A21() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 D7 FD FF FF: call 0x449800
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x449a3d
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 20 6A 68 00: call dword ptr [0x686a20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x449a81
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 75 31: jne 0x449a78
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7E 2F: jle 0x449a7f
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7E 26: jle 0x449a7f
        __asm _emit 0x7e
        __asm _emit 0x26
        push 0
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], eax
        ; Exact mapped bytes 7D 17: jge 0x449a7f
        __asm _emit 0x7d
        __asm _emit 0x17
        push 1
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 7D 07: jge 0x449a7f
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 02: jmp 0x449a81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
