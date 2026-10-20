// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58552130 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58552130_58552130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14ch], 0
        ; Exact mapped bytes 75 0E: jne 0x58552151
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 148h], edx
        ; Exact mapped bytes EB 34: jmp 0x58552185
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14ch], 1
        ; Exact mapped bytes 75 0F: jne 0x5855216c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 148h], 1
        ; Exact mapped bytes EB 19: jmp 0x58552185
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 14ch], 2
        ; Exact mapped bytes 75 0D: jne 0x58552185
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 148h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
