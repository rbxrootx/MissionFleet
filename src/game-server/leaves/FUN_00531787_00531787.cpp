// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531787 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_00531787_00531787() {
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 68 DC F9 FF: call 0x4cf400
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 18: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
