// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048F670 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0048f670_0048F670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x48f693
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5ca644h
        ; Exact mapped bytes E8 72 53 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48f693
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x48f67c
        __asm _emit 0x75
        __asm _emit 0xe3
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 FA 66 0E 00: call 0x575da0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 04: jge 0x48f6b3
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x48f6df
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
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
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 09 00 00 00: call 0x48f6e8
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
