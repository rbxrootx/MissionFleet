// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BC3C .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_0049bc3c_0049BC3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x49bc5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 200h
        ; Exact mapped bytes 7D 77: jge 0x49bcdb
        __asm _emit 0x7d
        __asm _emit 0x77
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B9 FE FF FF: call 0x49bb2e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x49bc82
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5B: jmp 0x49bcdd
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 6F FF FF FF: call 0x49bbfa
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x49bcad
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 10 0A 00: call 0x53cd19
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x49bcad
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x49bcdd
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EC 36 05 00: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x49bcbe
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 1F: jmp 0x49bcdd
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 04: jne 0x49bcca
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x49bcdd
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x49bcd6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x49bc52
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
