// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790620 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58790620_58790620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 11 E2 FF: call 0x585b1830
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 8A 68 F9 FF: call 0x58726ed0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 4E E2 FF: call 0x585b54b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        movzx eax, word ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x5879066c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        movzx edx, word ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 FF FF FF: call 0x58790570
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
