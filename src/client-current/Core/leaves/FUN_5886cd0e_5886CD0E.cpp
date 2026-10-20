// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CD0E .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5886cd0e_5886CD0E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, -2
        ; Exact mapped bytes 75 18: jne 0x5886cd37
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [eax + 20h], 0
        mov byte ptr [eax + 24h], 1
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        ; Exact mapped bytes EB 74: jmp 0x5886cdab
        __asm _emit 0xeb
        __asm _emit 0x74
        test esi, esi
        ; Exact mapped bytes 78 4B: js 0x5886cd86
        __asm _emit 0x78
        __asm _emit 0x4b
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 43: jae 0x5886cd86
        __asm _emit 0x73
        __asm _emit 0x43
        mov eax, esi
        mov edx, esi
        and eax, 3fh
        sar edx, 6
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 74 28: je 0x5886cd86
        __asm _emit 0x74
        __asm _emit 0x28
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 1]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 0ch], esi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F9 FE FF FF: call 0x5886cc7d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x5886cdae
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        push eax
        push ecx
        push ecx
        push ecx
        mov byte ptr [eax + 24h], 1
        push ecx
        mov dword ptr [eax + 20h], ecx
        mov byte ptr [eax + 1ch], 1
        push ecx
        mov dword ptr [eax + 18h], 9
        ; Exact mapped bytes E8 86 41 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop esi
        leave
        ret
    }
}
