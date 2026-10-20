// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E69F .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5882e69f() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 75 FC: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xfc
        ; Exact mapped bytes E8 5F 83 CD FF: call 0x58506a10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes C7 06 EC E8 8B 58: mov dword ptr [esi], 0x588be8ec
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
