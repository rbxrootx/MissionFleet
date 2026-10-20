// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C7CF .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0055c7cf_0055C7CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 26 F7 FF: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        push 67b23ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 C0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE C1 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b24ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 C0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
