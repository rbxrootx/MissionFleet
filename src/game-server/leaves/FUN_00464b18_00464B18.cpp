// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464B18 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00464b18_00464B18() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x464bcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40ca8h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        shl ecx, 4
        cmp dword ptr [edx + ecx + 15b0h], 0
        ; Exact mapped bytes 75 05: jne 0x464b6f
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 5E: jmp 0x464bcd
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 0d78h]
        mov eax, dword ptr [edx + 104h]
        shl eax, 4
        mov ecx, dword ptr [ecx + eax + 15b0h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7E 05: jle 0x464ba1
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2C: jmp 0x464bcd
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 0d78h]
        mov eax, dword ptr [edx + 104h]
        shl eax, 4
        mov eax, dword ptr [ecx + eax + 15b0h]
        ; Exact mapped bytes EB 02: jmp 0x464bcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
