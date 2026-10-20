// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9230 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_585c9230_585C9230() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 20h
        ; Exact mapped bytes 75 09: jne 0x585c924e
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x585c926c
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes EB 1E: jmp 0x585c926c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x585c926a
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x585c926a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x585c926c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x585c926c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
