// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58489F20 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58489f20_58489F20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 64h
        ; Exact mapped bytes 73 15: jae 0x58489f45
        __asm _emit 0x73
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], edx
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x58489f54
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes EB 0F: jmp 0x58489f54
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 0
        mov eax, 1
        mov esp, ebp
    }
}
