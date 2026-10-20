// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858C380 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_5858c380() {
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
        ; Exact mapped bytes 8B 80 E0 01 00 00: mov eax, dword ptr [eax + 0x1e0]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 B8 0B 00 00: mov ecx, 0xbb8
        __asm _emit 0xb9
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
