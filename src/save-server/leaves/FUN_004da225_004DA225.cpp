// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA225 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_004da225_004DA225() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 21: je 0x4da252
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 53 FF FF FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4da252
        __asm _emit 0x75
        __asm _emit 0x11
        push 3fh
        push 673c70h
        ; Exact mapped bytes E8 F3 EA 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da252
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4da22b
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 0ch]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
