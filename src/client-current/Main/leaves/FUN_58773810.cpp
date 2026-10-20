// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58773810 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_58773810() {
    __asm {
        push -1
        push 5897f15ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 10h], esi
        xor ebx, ebx
        lea ecx, [esi + 18h]
        mov dword ptr [esi], 58996358h
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        mov byte ptr [esi + 14h], bl
        mov byte ptr [esi + 15h], bl
        mov byte ptr [esi + 16h], bl
        ; Exact mapped bytes E8 51 C5 18 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x00
        lea ecx, [esi + 30h]
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes E8 45 C5 18 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x00
        lea ecx, [esi + 48h]
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes E8 38 C5 18 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x00
        lea ecx, [esi + 60h]
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes E8 2B C5 18 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x00
        push 404h
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes E8 BA 93 20 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        ; Exact mapped bytes 74 0E: je 0x587738ab
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0ed30h
        mov ecx, edi
        ; Exact mapped bytes E8 E7 E7 FF FF: call 0x58772090
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587738ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes FF 05 9C FC 9C 58: inc dword ptr [0x589cfc9c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, esi
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
