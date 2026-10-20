// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8E10 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004a8e10_004A8E10() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        and ecx, 66h
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x4a8e35
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 24h], 1
        mov eax, 1
        ; Exact mapped bytes EB 57: jmp 0x4a8e8c
        __asm _emit 0xeb
        __asm _emit 0x57
        push 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AE 92 00 00: call 0x4b2110
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 0D: jne 0x4a8e7b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 45 FD FF FF: call 0x4a8bc0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 0ch]
        mov esp, dword ptr [ebx + 1ch]
        mov ebp, dword ptr [ebx + 20h]
        ; Exact mapped bytes FF 63 18: jmp dword ptr [ebx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x63
        __asm _emit 0x18
        mov eax, 1
    }
}
