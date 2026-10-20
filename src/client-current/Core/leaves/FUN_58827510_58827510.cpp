// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827510 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58827510_58827510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 2
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 77 26: ja 0x58827557
        __asm _emit 0x77
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 85 64 75 82 58: jmp dword ptr [eax*4 + 0x58827564]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 50h], 1
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x5882755d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 5
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x5882755d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
