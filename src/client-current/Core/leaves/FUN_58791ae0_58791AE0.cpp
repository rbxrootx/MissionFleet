// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791AE0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58791ae0_58791AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 64h
        ; Exact mapped bytes 7D 16: jge 0x58791b06
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB E3 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
