// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469BB0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_00469bb0_00469BB0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes A1 2C 72 68 00: mov eax, dword ptr [0x68722c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 0D 2C 72 68 00: mov dword ptr [0x68722c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
