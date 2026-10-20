// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10010900 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_10010900_10010900() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 6C: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 41 70: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x70
        ; Exact mapped bytes 89 51 6C: mov dword ptr [ecx + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 41 70: mov dword ptr [ecx + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x70
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
