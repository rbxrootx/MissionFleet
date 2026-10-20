// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585465E0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_585465e0_585465E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 02: jne 0x585465f7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2A: jmp 0x58546621
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58546609
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 10: jae 0x58546621
        __asm _emit 0x73
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 FF FF FF: call 0x58546550
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5854661f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58546621
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DF: jmp 0x58546600
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
