// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042698D .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0042698d_0042698D() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 85 0E 00 00: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        pop ecx
        ; Exact mapped bytes 75 0D: jne 0x4269ac
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 36 B2 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes EB 2D: jmp 0x4269d9
        __asm _emit 0xeb
        __asm _emit 0x2d
        push dword ptr [esp + 14h]
        push 0
        push dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 08: jne 0x4269cc
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4269ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4269de
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 8F B1 FF FF: call 0x421b67
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x4269fd
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, esi
        and esi, 1fh
        sar ecx, 5
        mov eax, esi
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [eax + eax*8]
        and byte ptr [ecx + eax*4 + 4], 0fdh
        lea eax, [ecx + eax*4 + 4]
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
