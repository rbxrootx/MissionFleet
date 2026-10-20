// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056CFCE .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0056cfce_0056CFCE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a4h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 96 7D FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x56d00a
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1ch
        ; Exact mapped bytes E8 A5 7D FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0E: jmp 0x56d018
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 95 7D FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x56d032
        __asm _emit 0x75
        __asm _emit 0x14
        push 251h
        push 67d450h
        ; Exact mapped bytes E8 13 BD FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56d032
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x56d018
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 35 95 FD FF: call 0x546576
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 07: jne 0x56d055
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 15: jmp 0x56d06a
        __asm _emit 0xeb
        __asm _emit 0x15
        push 258h
        push 67d450h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F8 D1 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
