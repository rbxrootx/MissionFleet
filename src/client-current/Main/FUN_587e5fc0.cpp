// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E5FC0 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_587e5fc0() {
    __asm {
        ; Exact mapped bytes 8A 44 24 04: mov al, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 81 78 03 00 00: mov byte ptr [ecx + 0x378], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 40: test al, 0x40
        __asm _emit 0xa8
        __asm _emit 0x40
        ; Exact mapped bytes 75 0F: jne 0x587e5fdd
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 81 AC 1C 02 00: mov eax, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
