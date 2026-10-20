// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10011A80 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_10011a80_10011A80() {
    __asm {
        push -1
        push 1016d248h
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10175390h
        mov eax, dword ptr [esi + 74h]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 7E 22: jle 0x10011ad7
        __asm _emit 0x7e
        __asm _emit 0x22
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + edi*4]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10011acf
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + edi*4], 0
        mov eax, dword ptr [esi + 74h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C DE: jl 0x10011ab5
        __asm _emit 0x7c
        __asm _emit 0xde
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10011aee
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A0 AC 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xac
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 60h], 0
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 A3 13 0F 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
