// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005730AC .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_005730ac_005730AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 20eh
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 98 71 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 2E: je 0x573102
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
        ; Exact mapped bytes EB 0C: jmp 0x57310e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0C 8D FF FF: call 0x56be1a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8d
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
