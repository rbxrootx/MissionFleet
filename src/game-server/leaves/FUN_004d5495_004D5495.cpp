// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5495 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004d5495_004D5495() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d54c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 310h
        push 5c64b4h
        ; Exact mapped bytes E8 3F F5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d54c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d54a1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 28h], 18h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 1ch], 0f000h
        xor ecx, ecx
        cmp dword ptr [ebp + 0ch], 0
        setne cl
        inc ecx
        shl ecx, 0ch
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 28h]
        push edx
        push 0
        push 110dh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
