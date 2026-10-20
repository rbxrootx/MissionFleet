// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976C90 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58976c90() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 08: mov edi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C1 E9 02: shr ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 83 E1 03: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
