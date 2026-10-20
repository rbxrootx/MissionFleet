// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FABC0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_588fabc0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 7E 04: lea edi, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C7 06 B8 21 9A 58: mov dword ptr [esi], 0x589a21b8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xb8
        __asm _emit 0x21
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C FF FF FF: call 0x588fab20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 66 20 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
