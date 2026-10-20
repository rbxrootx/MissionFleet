// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D7400 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_588d7400() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 2f4h]
        test eax, eax
        ; Exact mapped bytes 7E 09: jle 0x588d7417
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E9 49 FF 02 00: jmp 0x58907360
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 4], 0
        ; Exact mapped bytes E9 3C FF 02 00: jmp 0x58907360
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
