// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC187 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004cc187_004CC187() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 27: je 0x4cc1b7
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 51 68 00: call dword ptr [0x685104]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 4D: jmp 0x4cc204
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffffh
        xor eax, eax
        cmp edx, 4
        sete al
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 D0 11 67 00: call dword ptr [0x6711d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4cc202
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 04 51 68 00: call dword ptr [0x685104]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 02: jmp 0x4cc204
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
