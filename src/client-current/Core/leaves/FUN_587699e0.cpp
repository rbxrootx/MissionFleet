// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587699E0 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_587699e0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8A 88 B0 1A 02 00: mov cl, byte ptr [eax + 0x21ab0]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 80 C1 01: add cl, 1
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 88 8A B0 1A 02 00: mov byte ptr [edx + 0x21ab0], cl
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
