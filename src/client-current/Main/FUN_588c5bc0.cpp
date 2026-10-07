// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 109 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C5BC0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_588c5bc0_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 78h], edi
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 60h]
        sar eax, 2
        test eax, eax
        ; Exact mapped bytes 76 51: jbe 0x588c5c2a
        __asm _emit 0x76
        __asm _emit 0x51
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        sar ecx, 2
        cmp edi, dword ptr [esi + 7ch]
        ; Exact mapped bytes 75 18: jne 0x588c5c06
        __asm _emit 0x75
        __asm _emit 0x18
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x588c5bf7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 7B 70 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        mov eax, dword ptr [edx + edi*4]
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes EB 16: jmp 0x588c5c1c
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x588c5c0f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 63 70 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        mov eax, dword ptr [edx + edi*4]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        inc edi
        sar ecx, 2
        cmp edi, ecx
        ; Exact mapped bytes 72 B6: jb 0x588c5be0
        __asm _emit 0x72
        __asm _emit 0xb6
        pop edi
        pop esi
        ret
    }
}
