// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BD30 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5850bd30_5850BD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 8C F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 77 0F: ja 0x5850bd5b
        __asm _emit 0x77
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 3C FC FF: call 0x584cfa30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x5850bd70
        __asm _emit 0xeb
        __asm _emit 0x15
        movzx edx, byte ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 E2 FF FF: call 0x5850a020
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe2
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
