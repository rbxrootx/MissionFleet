// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58900E20 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58900e20() {
    __asm {
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 64 23 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 0C: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes C7 06 A8 24 9A 58: mov dword ptr [esi], 0x589a24a8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 56 50: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
