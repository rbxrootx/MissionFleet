// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868E63 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58868e63_58868E63() {
    __asm {
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1C: jne 0x58868e85
        __asm _emit 0x75
        __asm _emit 0x1c
        push dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 8]
        push dword ptr [ecx]
        add eax, 250h
        push 55h
        push eax
        ; Exact mapped bytes E8 F2 D0 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x58868e86
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 47 81 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
