// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A4EC .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_0042a4ec_0042A4EC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 56: je 0x42a568
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 4A: je 0x42a568
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 1C: jne 0x42a543
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 14h
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 15: je 0x42a561
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 DF 1D 00 00: call 0x42c340
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42a56a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C A8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
