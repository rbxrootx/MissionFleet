// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850D4C .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58850d4c_58850D4C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [edi + 8], 0
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 0B: jne 0x58850d70
        __asm _emit 0x75
        __asm _emit 0x0b
        xor eax, eax
        mov byte ptr [edi + 8], 1
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x58850d73
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [edi + 4]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 00 7F 01 00: call 0x58868c7d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        push dword ptr [ebp - 4]
        mov esi, eax
        mov dword ptr [edi], esi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        mov eax, esi
        pop esi
        leave
        ret
    }
}
