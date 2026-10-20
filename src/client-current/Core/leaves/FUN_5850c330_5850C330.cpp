// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C330 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5850c330_5850C330() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C FB F7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xf7
        __asm _emit 0xff
        or eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 DE FF FF: call 0x5850a1a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
