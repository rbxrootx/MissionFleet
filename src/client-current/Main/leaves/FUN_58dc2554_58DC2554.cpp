// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DC2554 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58dc2554_58DC2554() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 66 3B ED: cmp bp, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xed
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 81 FE FE 04 2F 28: cmp esi, 0x282f04fe
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x2f
        __asm _emit 0x28
        ; Exact mapped bytes 85 EC: test esp, ebp
        __asm _emit 0x85
        __asm _emit 0xec
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes D2 F8: sar al, cl
        __asm _emit 0xd2
        __asm _emit 0xf8
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes C0 D8 D2: rcr al, 0xd2
        __asm _emit 0xc0
        __asm _emit 0xd8
        __asm _emit 0xd2
        ; Exact mapped bytes 2B D2: sub edx, edx
        __asm _emit 0x2b
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 9D C0: setge al
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F B9 E7 FF: jmp 0x58c3debb
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
    }
}
