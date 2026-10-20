// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA5E0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_584aa5e0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 88 10: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
