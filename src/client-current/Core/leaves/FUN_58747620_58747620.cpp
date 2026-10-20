// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58747620 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58747620_58747620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 E1 FF FF: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58747637
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x58747667
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        movzx edx, word ptr [ecx + 38h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 00 00 00: call 0x58747670
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58747652
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x58747667
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 DA FF FF: call 0x58745080
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58747662
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58747667
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
