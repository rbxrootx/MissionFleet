// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C1BD .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_5883c1bd() {
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
        ; Exact mapped bytes 80 38 00: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x5883c1cc
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE 4F 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
