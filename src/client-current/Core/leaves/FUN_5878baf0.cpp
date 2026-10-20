// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BAF0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5878baf0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 2B 01: sub eax, dword ptr [ecx]
        __asm _emit 0x2b
        __asm _emit 0x01
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
