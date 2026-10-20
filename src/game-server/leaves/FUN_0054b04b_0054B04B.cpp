// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B04B .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_0054b04b_0054B04B() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x54b05e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x54b118
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54b075
        __asm _emit 0x75
        __asm _emit 0x11
        push 6dh
        push 5ccafch
        ; Exact mapped bytes E8 90 99 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b075
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x54b05e
        __asm _emit 0x75
        __asm _emit 0xe3
        push 2ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 96 DF F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 5
        mov eax, dword ptr [ebp + 0ch]
        add eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes E8 7E DF F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 1
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2ch
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2eh
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        add eax, 30h
        push eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2eh
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp + 8]
        add edx, 32h
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2fh
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
