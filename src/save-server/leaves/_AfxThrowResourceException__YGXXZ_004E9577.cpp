// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9577 .. +0x1D bytes.
extern "C" __declspec(naked) void _AfxThrowResourceException__YGXXZ_004E9577() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 45 FC E8 6A 68 00: mov dword ptr [ebp - 4], 0x686ae8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 D7 64 00: push 0x64d740
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 C3 F7 FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc3
        __asm _emit 0xf7
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
