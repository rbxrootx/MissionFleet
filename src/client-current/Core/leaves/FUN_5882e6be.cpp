// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E6BE .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5882e6be() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 74 90 C5 FF: call 0x58487740
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0xc5
        __asm _emit 0xff
        ; Exact mapped bytes C7 06 E0 E8 8B 58: mov dword ptr [esi], 0x588be8e0
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
