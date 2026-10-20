// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A6FC .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0056a6fc_0056A6FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 20eh
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 48 0A F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 2E: je 0x56a752
        __asm _emit 0x74
        __asm _emit 0x2e
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 3
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 0C: jmp 0x56a75e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BC B7 FF FF: call 0x565f1a
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
