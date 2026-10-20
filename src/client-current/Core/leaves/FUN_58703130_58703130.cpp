// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58703130 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58703130_58703130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 75 02: jne 0x58703145
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 17: jmp 0x5870315c
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 88h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 7dh
        mov esp, ebp
        pop ebp
        ret
    }
}
