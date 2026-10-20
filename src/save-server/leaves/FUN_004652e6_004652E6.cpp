// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004652E6 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_004652e6_004652E6() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 1C DA 67 00: mov ebx, 0x67da1c
        __asm _emit 0xbb
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
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
