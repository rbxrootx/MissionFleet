// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A48DF .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_004a48df_004A48DF() {
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
        ; Exact mapped bytes 68 5E 01 00 00: push 0x15e
        __asm _emit 0x68
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B0 4A 67 00: push 0x674ab0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 67 59 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
