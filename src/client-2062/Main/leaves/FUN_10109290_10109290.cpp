// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109290 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_10109290_10109290() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 20h]
        mov ebx, dword ptr [esi + 18h]
        mov ecx, dword ptr [esi + 5ch]
        sub eax, ebx
        cdq
        idiv ecx
        mov edi, dword ptr [esi + 88h]
        ; Exact mapped bytes 8B 1D 98 51 17 10: mov ebx, dword ptr [0x10175198]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp edi, eax
        ; Exact mapped bytes 7F 08: jg 0x101092bb
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edi, dword ptr [esi + 98h]
        ; Exact mapped bytes 7E 26: jle 0x101092e1
        __asm _emit 0x7e
        __asm _emit 0x26
        push ecx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 6B 5B FF FF: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 20h]
        sub ecx, eax
        push 0
        mov dword ptr [esi + 20h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D7 AB FF FF: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esi + 94h], eax
        mov ecx, dword ptr [esi + 5ch]
        neg ecx
        push ecx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 40 5B FF FF: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 5ch]
        mov edi, dword ptr [esi + 20h]
        mov eax, dword ptr [esp + 14h]
        add edi, edx
        push eax
        mov dword ptr [esi + 20h], edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 A1 A9 FF FF: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
