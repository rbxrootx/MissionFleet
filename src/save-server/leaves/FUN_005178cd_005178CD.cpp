// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005178CD .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_005178cd_005178CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x5178ec
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 F1 FF FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 26: jmp 0x517912
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA 03 01 00: call 0x527cbe
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 3d3h
        push 674cach
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 56 29 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 96 F9 FF: call 0x4b0fcc
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
