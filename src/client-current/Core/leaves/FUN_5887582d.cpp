// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887582D .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5887582d() {
    __asm {
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A0 98 96 58: cmp eax, dword ptr [0x589698a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x58875846
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2F FF FF FF: call 0x5887576f
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes A3 9C 98 96 58: mov dword ptr [0x5896989c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
