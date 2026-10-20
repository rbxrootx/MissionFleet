// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861637 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58861637_58861637() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov eax, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], ecx
        push esi
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], esi
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x5886167d
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 02 0E 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 33 F9 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3C: jmp 0x588616b9
        __asm _emit 0xeb
        __asm _emit 0x3c
        test esi, esi
        ; Exact mapped bytes 74 E7: je 0x58861668
        __asm _emit 0x74
        __asm _emit 0xe7
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 1]
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 34h], eax
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 30h], eax
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 2ch], eax
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 38h]
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 E4 9F FF FF: call 0x5885b69d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        leave
        ret
    }
}
