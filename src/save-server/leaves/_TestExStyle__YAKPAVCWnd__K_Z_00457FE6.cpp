// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457FE6 .. +0x17 bytes.
extern "C" __declspec(naked) void _TestExStyle__YAKPAVCWnd__K_Z_00457FE6() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A EC: push -0x14
        __asm _emit 0x6a
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 1C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 23 45 0C: and eax, dword ptr [ebp + 0xc]
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
