// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B7670 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_587b7670() {
    __asm {
        mov eax, dword ptr [ecx + 188h]
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587b7692
        __asm _emit 0x7c
        __asm _emit 0x18
        push 0
        push 0
        push 0
        or eax, 20000h
        push eax
        push 0
        push 8001b112h
        ; Exact mapped bytes E8 DE 95 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x95
        __asm _emit 0x1b
        __asm _emit 0x00
        ret
    }
}
