// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C480 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_1006c480_1006C480() {
    __asm {
        ; Exact mapped bytes 8B 91 64 04 01 00: mov edx, dword ptr [ecx + 0x10464]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 80 E6 F1: and dh, 0xf1
        __asm _emit 0x80
        __asm _emit 0xe6
        __asm _emit 0xf1
        ; Exact mapped bytes 89 81 BC 0B 02 00: mov dword ptr [ecx + 0x20bbc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 80 CE 01: or dh, 1
        __asm _emit 0x80
        __asm _emit 0xce
        __asm _emit 0x01
        ; Exact mapped bytes 89 91 64 04 01 00: mov dword ptr [ecx + 0x10464], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
