// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C0B0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_5887c0b0() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 95 7E FF FF: call 0x58873f50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 89 06: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes E8 6B 80 FF FF: call 0x58874130
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
