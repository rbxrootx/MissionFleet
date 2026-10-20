// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500960 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58500960_58500960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 1], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 38h]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp - 8]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ret
    }
}
