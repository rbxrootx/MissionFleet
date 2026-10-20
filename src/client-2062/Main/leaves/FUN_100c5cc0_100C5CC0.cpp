// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5CC0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_100c5cc0_100C5CC0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 190h]
        mov dword ptr [eax + 68h], 1
        mov ecx, dword ptr [esi + 190h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 0F: jle 0x100c5cf8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c5cf8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x100c5cfa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [eax + 58h], 0
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 148h]
        pop esi
        mov al, byte ptr [edx + 330h]
        mov dword ptr [ecx + 58h], eax
        ret
    }
}
