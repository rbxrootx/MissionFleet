// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456BE0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00456be0_00456BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e0e0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 6D 58 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 34h
        push edx
        ; Exact mapped bytes E8 04 58 07 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x456c79
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, 456c79h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x456c90
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 02: jmp 0x456c92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
    }
}
