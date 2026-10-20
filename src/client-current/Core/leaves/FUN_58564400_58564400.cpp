// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564400 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58564400_58564400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], eax
        imul edx, dword ptr [ebp + 0ch], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 1A: je 0x58564447
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0fch], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], 64h
        imul ecx, dword ptr [ebp + 10h], 0ah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0c4h]
        cmp edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes 7E 0F: jle 0x58564477
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c8h], 1
        ; Exact mapped bytes EB 0D: jmp 0x58564484
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
