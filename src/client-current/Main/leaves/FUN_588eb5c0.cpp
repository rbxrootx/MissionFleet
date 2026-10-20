// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB5C0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_588eb5c0() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        push eax
        mov eax, dword ptr [esp + 14h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 18 B9 EA FF: call 0x58796f00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [esi], 589a1508h
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ecx, ecx
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 15: jle 0x588eb613
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ecx
        ; Exact mapped bytes 74 0D: je 0x588eb613
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588eb615
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        mov byte ptr [esi + 0a8h], cl
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 96 AA 00 00 00: mov word ptr [esi + 0xaa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 0a9h], cl
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [esi + 10h], eax
        mov edx, 2
        mov dword ptr [esi + 0a0h], 1
        mov dword ptr [esi + 0b0h], ecx
        ; Exact mapped bytes 66 89 96 88 00 00 00: mov word ptr [esi + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], 100h
        mov dword ptr [esi + 2ch], 101h
        mov dword ptr [esi + 8ch], ecx
        mov dword ptr [esi + 90h], ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
