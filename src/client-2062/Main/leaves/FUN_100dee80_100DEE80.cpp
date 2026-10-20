// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DEE80 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_100dee80_100DEE80() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D B1 AC 02 00 00: lea esi, [ecx + 0x2ac]
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes E8 7C 58 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 75 F3: jne 0x100dee8d
        __asm _emit 0x75
        __asm _emit 0xf3
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
