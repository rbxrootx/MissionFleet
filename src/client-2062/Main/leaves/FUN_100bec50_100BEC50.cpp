// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BEC50 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_100bec50_100BEC50() {
    __asm {
        ; Exact mapped bytes 8B 81 A8 00 00 00: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 70: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF B6 F6 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
