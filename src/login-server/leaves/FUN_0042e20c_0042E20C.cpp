// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E20C .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_0042e20c_0042E20C() {
    __asm {
        ; Exact mapped bytes 8B 41 38: mov eax, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x42e21f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 6A EC: push -0x14
        __asm _emit 0x6a
        __asm _emit 0xec
        ; Exact mapped bytes FF 71 1C: push dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 62 74: jmp dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x74
    }
}
