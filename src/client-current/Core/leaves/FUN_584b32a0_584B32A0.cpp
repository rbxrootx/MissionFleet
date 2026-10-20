// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B32A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_584b32a0_584B32A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2
        push 3
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB BD FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b32bd
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 25: jmp 0x584b32e2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B DC FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b32d0
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 12: jmp 0x584b32e2
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 BA FF FF: call 0x584aeda0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b32e0
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b32e2
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
