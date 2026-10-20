// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850720 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58850720() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 00 73 90 58: mov ebx, 0x58907300
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 43 04: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 89 6B 0C: mov dword ptr [ebx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6b
        __asm _emit 0x0c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
