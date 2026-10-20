// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889DCF0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_5889dcf0() {
    __asm {
        ; Exact mapped bytes 8B 41 70: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x70
        ; Exact mapped bytes 8B 50 64: mov edx, dword ptr [eax + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 3B 51 7C: cmp edx, dword ptr [ecx + 0x7c]
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x7c
        ; Exact mapped bytes 7D 0C: jge 0x5889dd07
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 41 64: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 59 96 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
