// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F075 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5883f075() {
    __asm {
        ; Exact mapped bytes 83 4D FC FF: or dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5883f07f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 4D FC FF: or dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
    }
}
