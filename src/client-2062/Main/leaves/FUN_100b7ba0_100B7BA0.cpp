// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7BA0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_100b7ba0_100B7BA0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 8B 46 54: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AD 03 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
