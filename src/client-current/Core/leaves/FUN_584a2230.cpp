// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2230 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_584a2230() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 45 FF: lea eax, [ebp - 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 7B FE FF FF: call 0x584a20c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
