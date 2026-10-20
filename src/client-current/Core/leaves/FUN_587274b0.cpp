// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587274B0 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_587274b0() {
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
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes E8 0E E5 D6 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe5
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
