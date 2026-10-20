// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D471 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0048d471_0048D471() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 D7 FD FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x48d48d
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 E5 5D 00: call dword ptr [0x5de508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x48d4d1
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 75 31: jne 0x48d4c8
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7E 2F: jle 0x48d4cf
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7E 26: jle 0x48d4cf
        __asm _emit 0x7e
        __asm _emit 0x26
        push 0
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], eax
        ; Exact mapped bytes 7D 17: jge 0x48d4cf
        __asm _emit 0x7d
        __asm _emit 0x17
        push 1
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 7D 07: jge 0x48d4cf
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 02: jmp 0x48d4d1
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
