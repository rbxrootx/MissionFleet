// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8100 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_584c8100_584C8100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 77 44: ja 0x584c8158
        __asm _emit 0x77
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 23 FE FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B7 25 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea ecx, [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 90 24 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 1A: jmp 0x584c8172
        __asm _emit 0xeb
        __asm _emit 0x1a
        xor eax, eax
        mov byte ptr [ebp - 2], al
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E EF FF FF: call 0x584c70a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
