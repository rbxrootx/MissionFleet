// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DD4E0 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_586dd4e0_586DD4E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f4h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f4h], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x586dd55f
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f4h], 0
        ; Exact mapped bytes 7D 0F: jge 0x586dd520
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f4h], 4
        ; Exact mapped bytes EB 3F: jmp 0x586dd55f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 5f4h], 18h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 504h]
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x586dd548
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB 19: jmp 0x586dd55f
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes EB 15: jmp 0x586dd55d
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f4h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5f4h], edx
        ; Exact mapped bytes EB 9D: jmp 0x586dd4fc
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov esp, ebp
    }
}
