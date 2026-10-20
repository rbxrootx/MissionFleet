// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500E00 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58500e00_58500E00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 38h], 1
        mov edx, dword ptr [ebp - 4]
        add edx, 3ch
        push edx
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push -1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
