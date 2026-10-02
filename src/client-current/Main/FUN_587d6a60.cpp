// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6A60 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_587d6a60() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 FF 03: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x03
        ; Exact mapped bytes 77 2A: ja 0x587d6a97
        __asm _emit 0x77
        __asm _emit 0x2a
        ; Exact mapped bytes A1 FC 48 A2 58: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8C BE 8C 00 00 00: mov ecx, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 11 0F 13 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C BE 8C 00 00 00: mov ecx, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C7 44 24 04 00 00 00 00: mov dword ptr [esp + 4], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
