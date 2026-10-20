// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870A850 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_5870a850_5870A850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5870a872
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 64: jge 0x5870a8dc
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 29 86 EC FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5870a8bf
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        sub edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, 8
        sub eax, dword ptr [ebp - 8]
        imul ecx, eax, 32h
        mov edx, 400h
        sub edx, ecx
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 AD 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xad
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5870a8da
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 14h], edx
        push 400h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D7 AD 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 8D: jmp 0x5870a869
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov esp, ebp
        pop ebp
        ret
    }
}
