// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004117C0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_004117c0_004117C0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        push edi
        test eax, eax
        mov dword ptr [esi], 43d47ch
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes 75 0A: jne 0x4117e7
        __asm _emit 0x75
        __asm _emit 0x0a
        lea eax, [ecx*4 + 1000h]
        push eax
        ; Exact mapped bytes EB 09: jmp 0x4117f0
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp eax, 1
        ; Exact mapped bytes 75 0F: jne 0x4117fb
        __asm _emit 0x75
        __asm _emit 0x0f
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 F7 C0 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], eax
        mov ebx, dword ptr [esi + 4]
        push 22bh
        mov dword ptr [esi + 94h], 1ch
        ; Exact mapped bytes E8 A3 DB 00 00: call 0x41f3b5
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 76 11: jbe 0x41182c
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 A2 DB 00 00: call 0x41f3c2
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        inc edi
        cmp edi, ebx
        mov dword ptr [edx + edi*4 - 4], eax
        ; Exact mapped bytes 72 EF: jb 0x41181b
        __asm _emit 0x72
        __asm _emit 0xef
        mov dword ptr [esi + 10h], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
